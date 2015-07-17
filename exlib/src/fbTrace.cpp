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
#include <map>

#ifndef WIN32
#include <cxxabi.h>
#include <dlfcn.h>
#endif

#include "stack.h"
#include "List.h"
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

void trace::dump()
{
    init_lib();

    if (m_frame_count)
    {
        puts("\n==== C stack trace ===============================");

        for (int32_t i = 0; i < m_frame_count; i ++)
        {
            void * proc = m_frames[i];

            printf("%2d: ", i);

            Dl_info info;
            char* demangled = NULL;
            if (!dladdr(proc, &info) || !info.dli_sname)
                printf("%p\n", proc);
            else if ((demangled = abi::__cxa_demangle(info.dli_sname, 0, 0, 0))) {
                printf("%s\n", demangled);
                __real_free(demangled);
            } else
                printf("%s\n", info.dli_sname);
        }
        puts("");
    }
}

#ifdef DEBUG

class mstub : public linkitem
{
public:
    trace m_trace;
    void *m_p;
    bool m_mark;
};

static List<mstub> s_mems;
static spinlock s_lock;

extern "C" void* wrap(malloc)(size_t sz)
{
    init_lib();

    void* p = __real_malloc(sz);
    if (p == 0)
        return p;

    mstub* ms = (mstub*)__real_malloc(sizeof(mstub));
    memset(ms, 0, sizeof(mstub));
    ms->m_p = p;

    s_lock.lock();
    s_mems.putHead(ms);
    s_lock.unlock();

    return p;
}

extern "C" void wrap(free)(void *p)
{
    init_lib();

    if (p != 0)
    {
        s_lock.lock();

        mstub* ms = s_mems.head();
        while (ms && ms->m_p != p)
            ms = (mstub*)ms->m_next;

        if (ms) {
            s_mems.remove(ms);
            __real_free(ms);
        }

        s_lock.unlock();

        if (ms == 0)
        {
            trace tr;

            printf("\nfree unknown pointer %p.", p);
            tr.save();
            tr.dump();
        }
    }

    __real_free(p);
}

extern "C" void* wrap(realloc)(void* p, size_t sz)
{
    init_lib();

    if (p == 0)
        return malloc(sz);

    if (sz == 0)
    {
        free(p);
        return 0;
    }

    void* p1 = __real_realloc(p, sz);

    if (p1 && p != p1)
    {
        s_lock.lock();

        mstub* ms = s_mems.head();
        while (ms && ms->m_p != p)
            ms = (mstub*)ms->m_next;

        if (ms)
            ms->m_p = p1;

        s_lock.unlock();

        if (ms == 0)
        {
            trace tr;

            printf("\nrealloc unknown pointer %p to %p.", p, p1);
            tr.save();
            tr.dump();

            _exit(-1);
        }
    }

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
