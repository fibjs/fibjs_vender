/*
 *  fbTrace.cpp
 *  Created on: Jul 16, 2015
 *
 *  Copyright (c) 2015 by Leo Hoo
 *  lion@9465.net
 */

#include "osconfig.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <string>

#ifndef WIN32
#include <cxxabi.h>
#include <dlfcn.h>
#endif

#include "stack.h"
#include "list.h"
#include "lockfree.h"

namespace exlib
{

#ifndef WIN32

#ifdef DEBUG

#if !defined(__clang__)

#define wrap(str) __wrap_##str

extern "C" void* __real_malloc(size_t);
extern "C" void __real_free(void*);
extern "C" void* __real_realloc(void* p, size_t sz);

inline void init_lib()
{}

#else

#define wrap(str) str

static void *(*__real_malloc)(size_t);
static void (*__real_free)(void*);
static void* (*__real_realloc)(void* p, size_t sz);

inline void init_lib()
{
    if (__real_malloc == 0)
        __real_malloc = (void *(*)(size_t))dlsym(RTLD_NEXT, "malloc");
    if (__real_free == 0)
        __real_free = (void (*)(void*))dlsym(RTLD_NEXT, "free");
    if (__real_realloc == 0)
        __real_realloc = (void* (*)(void* p, size_t sz))dlsym(RTLD_NEXT, "realloc");
}
#endif

#else

#define wrap(str) __nouse_##str

#define __real_malloc malloc
#define __real_free free
#define __real_realloc realloc

inline void init_lib()
{}

#endif

struct stack_frame {
    struct stack_frame* next;
    void* ret;
};

void trace::save(intptr_t fp)
{
    stack_frame* frame;

    if (fp == 0) {
        context ctx;

        ctx.save();
        frame = (stack_frame*)ctx.fp;
        frame = frame->next;
    } else
        frame = (stack_frame*)fp;

    m_frame_count = 0;
    while (m_frame_count < (int32_t)ARRAYSIZE(m_frames)) {
        m_frames[m_frame_count++] = frame->ret;

        stack_frame* frame1 = frame->next;
        if (frame1 < frame || frame1->ret == 0)
            break;
        frame = frame1;
    }
}

inline void out_proc(void * proc)
{
    Dl_info info;
    char* demangled = NULL;
    if (!dladdr(proc, &info) || !info.dli_sname)
        printf("%p\n", proc);
    else if ((demangled = abi::__cxa_demangle(info.dli_sname, 0, 0, 0))) {
        printf("%s + %ld\n", demangled, (intptr_t)proc - (intptr_t)info.dli_saddr);
        __real_free(demangled);
    } else
        printf("%s + %ld\n", info.dli_sname, (intptr_t)proc - (intptr_t)info.dli_saddr);
}

void trace::dump()
{
    init_lib();

    if (m_frame_count)
    {
        puts("\n==== C stack trace ===============================");

        for (int32_t i = 0; i < m_frame_count; i ++)
        {
            printf("%2d: ", i);
            out_proc(m_frames[i]);
        }
        puts("");
    }
}

#ifdef DEBUG

// 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61,67, 71, 73, 79, 83, 89, 97
#define POOL_SIZE   97

class MemPool
{
    class stub : public linkitem
    {
    public:
        trace m_trace;
        void *m_p;
        bool m_mark;
    };

public:
    ~MemPool()
    {
        int32_t i;

        for (i = 0; i < POOL_SIZE; i ++)
        {
            m_locks[i].lock();
            stub* s = m_mems[i].getHead();
            while (s) {
                __real_free(s);
                s = m_mems[i].getHead();
            }
            m_locks[i].unlock();
        }
    }

public:
    void put(void* p)
    {
        int32_t hash = (intptr_t)p % POOL_SIZE;

        stub* s = (stub*)__real_malloc(sizeof(stub));
        memset(s, 0, sizeof(stub));

        s->m_p = p;
        s->m_trace.save();

        m_locks[hash].lock();
        m_mems[hash].putHead(s);
        m_locks[hash].unlock();
    }

    void remove(void* p)
    {
        int32_t hash = (intptr_t)p % POOL_SIZE;

        m_locks[hash].lock();

        stub* s = m_mems[hash].head();
        while (s && s->m_p != p)
            s = (stub*)s->m_next;

        if (s) {
            m_mems[hash].remove(s);
            __real_free(s);
        }

        m_locks[hash].unlock();

        if (s == 0)
        {
            trace tr;

            printf("\nfree unknown pointer %p.", p);
            tr.save();
            tr.dump();
        }
    }

    void replace(void* p, void* p1)
    {
        int32_t hash = (intptr_t)p % POOL_SIZE;
        int32_t hash1 = (intptr_t)p1 % POOL_SIZE;

        m_locks[hash].lock();

        stub* s = m_mems[hash].head();
        while (s && s->m_p != p)
            s = (stub*)s->m_next;

        if (s)
            m_mems[hash].remove(s);

        m_locks[hash].unlock();

        if (s == 0)
        {
            trace tr;

            printf("\nrealloc unknown pointer %p to %p.", p, p1);
            tr.save();
            tr.dump();

            return;
        }

        s->m_p = p1;
        s->m_trace.save();

        m_locks[hash1].lock();
        m_mems[hash1].putHead(s);
        m_locks[hash1].unlock();
    }

    void check()
    {
        int32_t i;

        for (i = 0; i < POOL_SIZE; i ++)
        {
            m_locks[i].lock();
            stub* s = m_mems[i].head();
            while (s) {
                s->m_mark = true;
                s = (stub*)s->m_next;
            }
            m_locks[i].unlock();
        }
    }

    class caller
    {
    public:
        caller(void *p): proc(p), num(0)
        {
        }

        ~caller()
        {
            int32_t i;
            for (i = 0; i < subs.size(); i ++)
                delete subs[i];
        }

    public:
        void put(void** frames, int32_t level)
        {
            num ++;
            if (level) {
                int32_t i;
                void* p = frames[0];
                caller* sub;

                for (i = 0; i < subs.size(); i ++)
                {
                    sub = subs[i];
                    if (sub->proc == p)
                        break;
                }

                if (i == subs.size()) {
                    sub = new caller(p);
                    subs.insert(subs.end(), sub);
                }
                sub->put(frames + 1, level - 1);
            }
        }

        static int compare (const void * a, const void * b)
        {
            return (*(caller**)b)->num - (*(caller**)a)->num;
        }

        void dump(int32_t level = 0)
        {
            int32_t i;

            if (proc)
            {
                std::string str;

                for (i = 1; i < level; i ++)
                    str.append("  ", 2);

                printf("%s%d times: ", str.c_str(), num);
                out_proc(proc);
            }

            qsort(&subs[0], subs.size(), sizeof(caller*), compare);
            for (i = 0; i < subs.size(); i ++)
                subs[i]->dump(level + 1);
        }

    public:
        void * proc;
        int32_t num;
        std::vector<caller*> subs;
    };

    void diff()
    {
        int32_t i;
        MemPool clone;

        for (i = 0; i < POOL_SIZE; i ++)
        {
            m_locks[i].lock();
            stub* s = m_mems[i].head();
            while (s) {
                if (!s->m_mark)
                {
                    stub* s1 = (stub*)__real_malloc(sizeof(stub));
                    memset(s1, 0, sizeof(stub));
                    s1->m_trace = s->m_trace;
                    clone.m_mems[i].putTail(s1);
                }
                s = (stub*)s->m_next;
            }
            m_locks[i].unlock();
        }

        caller root(0);

        for (i = 0; i < POOL_SIZE; i ++)
        {
            stub* s = clone.m_mems[i].head();
            while (s) {
                int32_t num = s->m_trace.m_frame_count - 2;
                if (num > 5)
                    num = 5;
                root.put(s->m_trace.m_frames + 2, num);
                s = (stub*)s->m_next;
            }
        }

        root.dump();
    }

private:
    List<stub> m_mems[POOL_SIZE];
    spinlock m_locks[POOL_SIZE];
};

inline MemPool& init_mpool()
{
    static MemPool s_mpool;
    return s_mpool;
}

void mem_check()
{
    init_mpool().check();
}

void mem_diff()
{
    init_mpool().diff();
}

extern "C" void* wrap(malloc)(size_t sz)
{
    MemPool &mpool = init_mpool();
    init_lib();

    void* p = __real_malloc(sz);
    if (p == 0)
        return p;

    mpool.put(p);

    return p;
}

extern "C" void wrap(free)(void *p)
{
    MemPool &mpool = init_mpool();
    init_lib();

    if (p != 0)
        mpool.remove(p);

    __real_free(p);
}

extern "C" void* wrap(realloc)(void* p, size_t sz)
{
    MemPool &mpool = init_mpool();
    init_lib();

    if (p == 0)
        return malloc(sz);

    if (sz == 0)
    {
        free(p);
        return 0;
    }

    void* p1 = __real_realloc(p, sz);
    if (p1)
        mpool.replace(p, p1);

    return p1;
}

extern "C" void* wrap(calloc)(size_t num, size_t sz)
{
    void* p = malloc(num * sz);
    if (p)
        memset(p, 0, sizeof(num * sz));

    return p;
}

#endif

#endif

}
