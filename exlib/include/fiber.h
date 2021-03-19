/*
 *  fiber.h
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#pragma once

#include "osconfig.h"
#include <stdint.h>
#include <string.h>
#include <string>
#include "list.h"

namespace exlib {

#define TLS_SIZE 8

class Locker;

class Task_base : public linkitem {
public:
    virtual ~Task_base()
    {
    }

public:
    virtual void suspend()
    {
    }

    virtual void suspend(spinlock& lock)
    {
        lock.unlock();
    }

    virtual void resume() = 0;

    virtual bool is(int32_t t)
    {
        return false;
    }
};

class Thread_base : public Task_base {
public:
    Thread_base()
        : m_stackguard(0)
    {
        memset(&m_tls, 0, sizeof(m_tls));
    }

public:
    virtual void join()
    {
    }

    virtual bool is(int32_t t) = 0;

    void saveStackGuard()
    {
        assert(m_stackguard == 0);

        intptr_t stack_value;
        m_stackguard = (intptr_t)&stack_value + sizeof(stack_value) * 6;
    }

    intptr_t stackguard()
    {
        assert(m_stackguard != 0);
        return m_stackguard;
    }

    static Thread_base* current();

public:
    void Ref()
    {
        refs_.inc();
    }

    void Unref()
    {
        if (refs_.dec() == 0)
            destroy();
    }

public:
    typedef void (*tls_free)(void*);
    static int32_t tlsAlloc(tls_free _free = NULL);
    static void* tlsGet(int32_t idx);
    static void tlsPut(int32_t idx, void* v);
    static void tlsFree(int32_t idx);

protected:
    virtual void destroy();

private:
    void* m_tls[TLS_SIZE];
    intptr_t m_stackguard;
    atomic refs_;
};

class Locker {
public:
    Locker(bool recursive = true)
        : m_recursive(recursive)
        , m_count(0)
        , m_locker(0)
    {
    }

public:
    bool lock(Task_base* current = NULL);
    void unlock(Task_base* current = NULL);
    bool trylock(Task_base* current = NULL);
    bool owned(Task_base* current = NULL);

    int32_t count()
    {
        int32_t cnt;

        m_lock.lock();
        cnt = m_blocks.count();
        m_lock.unlock();

        return cnt;
    }

private:
    bool m_recursive;
    int32_t m_count;
    spinlock m_lock;
    List<Task_base> m_blocks;
    Task_base* m_locker;
};

class RWLocker {
public:
    RWLocker()
        : m_count(0)
    {
    }

public:
    void rdlock();
    void wrlock();
    void rdunlock();
    void wrunlock();
    bool tryrdlock();
    bool trywrlock();

private:
    int32_t m_count;
    Locker m_reader;
    Locker m_writer;
    List<Task_base> m_blocks;
};

class autoLocker {
public:
    autoLocker(Locker& l)
        : m_l(l)
    {
        m_l.lock();
    }

    ~autoLocker()
    {
        m_l.unlock();
    }

private:
    Locker& m_l;
};

class Event {
public:
    Event()
    {
        m_set = false;
    }

public:
    bool wait(Task_base* current = NULL);
    void pulse();
    void set();
    void reset();
    bool isSet();

    int32_t count()
    {
        int32_t cnt;

        m_lock.lock();
        cnt = m_blocks.count();
        m_lock.unlock();

        return cnt;
    }

private:
    bool m_set;
    spinlock m_lock;
    List<Task_base> m_blocks;
};

class Semaphore {
public:
    Semaphore(int32_t count = 0)
        : m_count(count)
    {
    }

public:
    void wait();
    void post(int32_t cnt = 1);
    bool trywait();

    int32_t count()
    {
        int32_t cnt;

        m_lock.lock();
        cnt = m_blocks.count();
        m_lock.unlock();

        return cnt;
    }

private:
    int32_t m_count;
    spinlock m_lock;
    List<Task_base> m_blocks;
};

class CondVar {
public:
    CondVar()
        : m_semBlockLock(1)
    {
    }

public:
    void wait(Locker& mtxExternal);
    void notify(bool bAll);

    void notify_one()
    {
        notify(false);
    }

    void notify_all()
    {
        notify(true);
    }

    int32_t count()
    {
        return m_semBlockQueue.count();
    }

private:
    Semaphore m_semBlockLock;
    Semaphore m_semBlockQueue;
    Locker m_mtxUnblockLock;
    int32_t m_nWaitersGone = 0;
    int32_t m_nWaitersBlocked = 0;
    int32_t m_nWaitersToUnblock = 0;
};

template <class T>
class Queue {
public:
    void put(T* pNew)
    {
        m_list.putTail(pNew);
        m_sem.post();
    }

    T* get()
    {
        m_sem.wait();
        return m_list.getHead();
    }

    T* tryget()
    {
        if (!m_sem.trywait())
            return 0;
        return m_list.getHead();
    }

    bool empty()
    {
        return m_list.empty();
    }

    int32_t count()
    {
        return m_list.count();
    }

public:
    LockedList<T> m_list;
    Semaphore m_sem;
};

#define FIBER_STACK_SIZE (65536 * 2)
typedef void (*fiber_func)(void*);

class Service;

class Fiber : public Thread_base {
public:
    Fiber(Service* pService, fiber_func func, void* data)
        : m_pService(pService)
        , m_func(func)
        , m_data(data)
    {
        m_ctx = NULL;
        memset(&name_, 0, sizeof(name_));
    }

public:
    static const int32_t type = 3;
    virtual bool is(int32_t t)
    {
        return t == type;
    }

    virtual void suspend();
    virtual void suspend(spinlock& lock);
    virtual void resume();

    virtual void join();
    void yield();

private:
    virtual void destroy();

public:
    void set_name(const char* name)
    {
        strncpy(name_, name, sizeof(name_));
        name_[sizeof(name_) - 1] = '\0';
    }

    const char* name()
    {
        return name_;
    }

public:
    static void sleep(int32_t ms, Task_base* now = 0);
    static void cancel_sleep(Task_base* now);

    static Fiber* current();

public:
    void* m_ctx;
    Event m_joins;
    Service* m_pService;
    fiber_func m_func;
    void* m_data;
    char name_[16];

#ifdef DEBUG
    linkitem m_link;
#endif
};
}
