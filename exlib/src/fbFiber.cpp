/*
 *  fbService.cpp
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <time.h>

#include "osconfig.h"
#include "service.h"
#include "thread.h"

#include <map>

#ifndef WIN32
#include <cxxabi.h>
#include <dlfcn.h>
#endif

namespace v8
{
namespace base
{

class OS
{
public:
    static double TimeCurrentMillis();
};

}
}

namespace exlib
{

class Sleeping : public linkitem,
    public Service::switchConextCallback
{
public:
    Sleeping(Task_base* now, int32_t tm) :
        m_now(now), m_tm(tm)
    {}

public:
    virtual void invoke();

public:
    Task_base* m_now;
    int32_t m_tm;
};

class Canceling : public linkitem
{
public:
    Canceling(Task_base* now) : m_now(now)
    {}

public:
    Task_base* m_now;
};

Fiber *Fiber::current()
{
    Service *pService = Service::current();

    if (pService)
        return pService->running();

    return NULL;
}

void Fiber::destroy()
{
    Thread_base::destroy();

#ifdef WIN32
    VirtualFree(this, 0, MEM_RELEASE);
#else
    free(this);
#endif
}

void Fiber::join()
{
    m_joins.wait();
}

void Fiber::suspend()
{
    m_pService->switchConext();
}

void Fiber::suspend(spinlock& lock)
{
    class cb : public Service::switchConextCallback
    {
    public:
        cb(spinlock& lock) : m_lock(lock)
        {}

    public:
        virtual void invoke()
        {
            m_lock.unlock();
        }

    private:
        spinlock& m_lock;
    } _cb(lock);

    m_pService->switchConext(&_cb);
}

void Fiber::resume()
{
    m_pService->post(this);
}

void Fiber::yield()
{
    class cb : public Service::switchConextCallback
    {
    public:
        cb(Fiber* fb) : m_fb(fb)
        {}

    public:
        virtual void invoke()
        {
            m_fb->m_pService->post(m_fb);
        }

    private:
        Fiber* m_fb;
    } _cb(this);

    m_pService->switchConext(&_cb);
}

static class _timerThread: public OSThread
{
public:
    void wait()
    {
        std::multimap<double, Sleeping *>::iterator e;

        e = m_tms.begin();
        if (e != m_tms.end())
            m_sem.TimedWait((int32_t)(e->first - m_tm));
        else
            m_sem.Wait();
    }

    virtual void Run()
    {
        while (1)
        {
            Sleeping *p;
            Canceling *p1;
            std::multimap<double, Sleeping *>::iterator e;

            wait();

            m_tm = v8::base::OS::TimeCurrentMillis();

            while ((p = m_acSleep.getHead()) != NULL)
            {
                m_tms.insert(std::make_pair(m_tm + p->m_tm, p));
            }

            while ((p1 = m_acCancel.getHead()) != NULL)
            {
                e = m_tms.begin();
                while (e != m_tms.end())
                {
                    if (e->second->m_now == p1->m_now)
                    {
                        e->second->m_now->resume();
                        delete e->second;
                        m_tms.erase(e);
                        break;
                    }

                    e++;
                }

                delete p1;
            }

            while (1)
            {
                e = m_tms.begin();
                if (e == m_tms.end())
                    break;
                if (e->first > m_tm)
                    break;

                e->second->m_now->resume();
                delete e->second;
                m_tms.erase(e);
            }
        }
    }

    void sleep(Task_base* now, int32_t ms)
    {
        m_acSleep.putTail(new Sleeping(now, ms));
        m_sem.Post();
        now->suspend();
    }

    void cancel(Task_base* now)
    {
        m_acCancel.putTail(new Canceling(now));
        m_sem.Post();
    }

private:
    OSSemaphore m_sem;
    double m_tm;
    LockedList<Sleeping> m_acSleep;
    LockedList<Canceling> m_acCancel;
    std::multimap<double, Sleeping *> m_tms;

    friend class Sleeping;
} s_timer;

void Sleeping::invoke()
{
    s_timer.m_acSleep.putTail(this);
    s_timer.m_sem.Post();
}

void init_timer()
{
    s_timer.start();
}

void Fiber::sleep(int32_t ms, Task_base* now)
{
    if (now == 0)
        now = current();

    assert(now != 0);

    if (now->is(Fiber::type))
    {
        if (ms <= 0)
            ((Fiber*)now)->yield();
        else
        {
            ((Fiber*)now)->m_pService->switchConext(new Sleeping(now, ms));
        }
    } else
    {
        if (ms <= 0)
            ms = 0;

        s_timer.sleep(now, ms);
    }
}

void Fiber::cancel_sleep(Task_base* now)
{
    s_timer.cancel(now);
}

}
