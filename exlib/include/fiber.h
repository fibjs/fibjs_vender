/*
 *  fiber.h
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#ifndef _ex_fiber_h__
#define _ex_fiber_h__

#include "osconfig.h"
#include <stdint.h>
#include <string.h>
#include <string>
#include "list.h"

namespace exlib
{

class Locker;

class Thread_base : public linkitem
{
public:
    Thread_base() : refs_(0)
    {}

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
    virtual const char* type() = 0;
    virtual void suspend() = 0;
    virtual void resume() = 0;
    virtual void yield() = 0;

private:
    virtual void destroy() = 0;

private:
    exlib::atomic refs_;

#ifdef DEBUG
public:
    Locker *m_blocking;
    void *m_stacktop;
    trace m_trace;
#endif
};

class Blocker
{
public:
    void suspend(spinlock& lock, Thread_base* current = 0);
    Thread_base* resume();
    void resumeAll();
    size_t count() const
    {
        return m_blocks.count();
    }

private:
    List<Thread_base> m_blocks;
};

class Locker : public Blocker
{
public:
    Locker(bool recursive = true) :
        m_recursive(recursive), m_count(0), m_locker(0)
    {
    }

public:
    void lock();
    void unlock();
    bool trylock();
    bool owned();

private:
    bool m_recursive;
    int32_t m_count;
    spinlock m_lock;
    Thread_base *m_locker;
#ifdef DEBUG
    trace m_trace;

    void dump();
#endif
};

class autoLocker
{
public:
    autoLocker(Locker &l) :
        m_l(l)
    {
        m_l.lock();
    }

    ~autoLocker()
    {
        m_l.unlock();
    }

private:
    Locker &m_l;
};

class Event : public Blocker
{
public:
    Event()
    {
        m_set = false;
    }

public:
    void wait();
    void pulse();
    void set();
    void reset();
    bool isSet();

private:
    bool m_set;
    spinlock m_lock;
};

class CondVar : public Blocker
{
public:
    void wait(Locker &l);
    void notify_one();
    void notify_all();

private:
    spinlock m_lock;
};

class Semaphore : public Blocker
{
public:
    Semaphore(int32_t count = 0) :
        m_count(count)
    {
    }

public:
    void wait();
    void post();
    bool trywait();

private:
    int32_t m_count;
    spinlock m_lock;
};

template<class T>
class Queue
{
public:
    void put(T *pNew)
    {
        m_list.putTail(pNew);
        m_sem.post();
    }

    T *get()
    {
        m_sem.wait();
        return m_list.getHead();
    }

    T *tryget()
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

#define TLS_SIZE    8

#define FIBER_STACK_SIZE    (65536 * 2)

class Service;

class Fiber : public Thread_base
{
public:
    Fiber(Service* pService) : m_pService(pService)
    {
        memset(&m_cntxt, 0, sizeof(m_cntxt));
        memset(&m_tls, 0, sizeof(m_tls));
        memset(&name_, 0, sizeof(name_));

#ifdef DEBUG
        m_blocking = 0;
        m_stacktop = 0;
#endif
    }

public:
    virtual const char* type();
    virtual void suspend();
    virtual void resume();
    virtual void yield();

private:
    virtual void destroy();

public:
    void join()
    {
        m_joins.wait();
    }

    void set_name(const char *name)
    {
        strncpy(name_, name, sizeof(name_));
        name_[sizeof(name_) - 1] = '\0';
    }

    const char* name()
    {
        return name_;
    }

public:
    static void sleep(int32_t ms);
    static Fiber *Current();
    static Fiber *Create(void *(*func)(void *), void *data = 0,
                         int32_t stacksize = FIBER_STACK_SIZE);

    static int32_t tlsAlloc();
    static void *tlsGet(int32_t idx);
    static void tlsPut(int32_t idx, void *v);
    static void tlsFree(int32_t idx);

public:
    context m_cntxt;
    Event m_joins;
    Service* m_pService;
    void *m_tls[TLS_SIZE];
    char name_[16];

    linkitem m_link;
};

}

#endif

