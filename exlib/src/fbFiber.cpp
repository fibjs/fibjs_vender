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

#include "osconfig.h"
#include "service.h"
#include "thread.h"
#include "hrtime.h"

#include <map>

#ifndef WIN32
#include <cxxabi.h>
#include <dlfcn.h>
#endif

namespace exlib {

class Sleeping : public linkitem,
                 public Service::switchConextCallback {
public:
    Sleeping(Task_base* now, int64_t tm)
        : m_now(now)
        , m_tm(tm)
    {
    }

public:
    virtual void invoke();

public:
    Task_base* m_now;
    int64_t m_tm;
};

Fiber* Fiber::current()
{
    Service* pService = Service::current();

    if (pService)
        return pService->running();

    return NULL;
}

void Fiber::destroy()
{
    Thread_base::destroy();

    delete_fiber(m_ctx);
    delete this;
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
    class cb : public Service::switchConextCallback {
    public:
        cb(spinlock& lock)
            : m_lock(lock)
        {
        }

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
    class cb : public Service::switchConextCallback {
    public:
        cb(Fiber* fb)
            : m_fb(fb)
        {
        }

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

class _timerThread : public OSThread {
public:
    void wait()
    {
        std::multimap<int64_t, Sleeping*>::iterator e;

        e = m_tms.begin();
        if (e != m_tms.end())
            m_sem.TimedWait((int32_t)((e->first - m_tm) / NANOS_PER_MICRO));
        else
            m_sem.Wait();
    }

    virtual void Run()
    {
        while (1) {
            Sleeping* p;
            std::multimap<int64_t, Sleeping*>::iterator e;
            List<Sleeping> _acSleep;

            wait();

            m_tm = _hrtime();
            m_acSleep.getList(_acSleep);

            while ((p = _acSleep.getHead()) != NULL)
                if (p->m_tm >= 0)
                    m_tms.insert(std::make_pair(m_tm + p->m_tm, p));
                else {
                    e = m_tms.begin();
                    while (e != m_tms.end()) {
                        if (e->second->m_now == p->m_now) {
                            e->second->m_now->resume();
                            delete e->second;
                            m_tms.erase(e);
                            break;
                        }

                        e++;
                    }

                    delete p;
                }

            while (1) {
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

    void post(Task_base* now, int32_t ms)
    {
        m_acSleep.putTail(new Sleeping(now, ms * NANOS_PER_MICRO));
        m_sem.Post();
    }

    void cancel(Task_base* now)
    {
        m_acSleep.putTail(new Sleeping(now, -1));
        m_sem.Post();
    }

private:
    OSSemaphore m_sem;
    int64_t m_tm;
    LockedList<Sleeping> m_acSleep;
    std::multimap<int64_t, Sleeping*> m_tms;

    friend class Sleeping;
};
static _timerThread* s_timer;

void Sleeping::invoke()
{
    s_timer->m_acSleep.putTail(this);
    s_timer->m_sem.Post();
}

void init_timer()
{
    s_timer = new _timerThread();
    s_timer->start();
}

void Fiber::sleep(int32_t ms, Task_base* now)
{
    if (now == 0)
        now = current();

    assert(now != 0);

    if (now->is(Fiber::type)) {
        if (ms <= 0)
            ((Fiber*)now)->yield();
        else {
            ((Fiber*)now)->m_pService->switchConext(new Sleeping(now, ms * NANOS_PER_MICRO));
        }
    } else if (now->is(OSThread::type)) {
        if (ms <= 0)
            ms = 0;

        s_timer->post(now, ms);
        now->suspend();
    } else {
        if (ms <= 0)
            ms = 0;

        s_timer->post(now, ms);
    }
}

void Fiber::cancel_sleep(Task_base* now)
{
    s_timer->cancel(now);
}
}
