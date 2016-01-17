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

#define TLS_SIZE    8

class Locker;

class Task_base : public linkitem
{
public:
    virtual ~Task_base()
    {}

public:
    virtual void suspend() = 0;
    virtual void resume() = 0;

    virtual bool is(int32_t t)
    {
        return false;
    }
};

class Thread_base : public Task_base
{
public:
    Thread_base() : m_stackguard(0)
    {
        memset(&m_tls, 0, sizeof(m_tls));
    }

public:
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
    static int32_t tlsAlloc();
    static void *tlsGet(int32_t idx);
    static void tlsPut(int32_t idx, void *v);
    static void tlsFree(int32_t idx);

private:
    virtual void destroy() = 0;

private:
    void *m_tls[TLS_SIZE];
    intptr_t m_stackguard;
    atomic refs_;
};

class Locker
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
    List<Task_base> m_blocks;
    Task_base *m_locker;
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

class Event
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
    List<Task_base> m_blocks;
};

class CondVar
{
public:
    void wait(Locker &l);
    void notify_one();
    void notify_all();

private:
    spinlock m_lock;
    List<Task_base> m_blocks;
};

class Semaphore
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
    List<Task_base> m_blocks;
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

#define FIBER_STACK_SIZE    (65536 * 2)

class Service;

class Fiber : public Thread_base
{
public:
    Fiber(Service* pService, void* data) :
        m_pService(pService), m_data(data)
    {
        memset(&m_cntxt, 0, sizeof(m_cntxt));
        memset(&name_, 0, sizeof(name_));
    }

public:
    static const int32_t type = 3;
    virtual bool is(int32_t t)
    {
        return t == type;
    }

    virtual void suspend();
    virtual void resume();

    void join();
    void yield();

private:
    virtual void destroy();

public:
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
    static void sleep(int32_t ms, Task_base* now = 0);
    static void cancel_sleep(Task_base* now);

    static Fiber *current();

public:
    context m_cntxt;
    Event m_joins;
    Service* m_pService;
    void* m_data;
    char name_[16];

    linkitem m_link;
};

}

#endif

