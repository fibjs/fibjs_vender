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
#include <assert.h>

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

class Sleeping : public linkitem
{
public:
    Sleeping(Fiber* now, int32_t tm) :
        m_now(now), m_tm(tm)
    {}

public:
    Fiber* m_now;
    int32_t m_tm;
};

Fiber *Fiber::current()
{
    Service *pService = Service::current();

    if (pService)
        return pService->m_running;

    return NULL;
}

void Fiber::destroy()
{
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

void Fiber::resume()
{
    m_pService->m_resume.putTail(this);
}

void Fiber::yield()
{
    m_pService->m_resume.putTail(this);
    m_pService->switchConext();
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
            std::multimap<double, Sleeping *>::iterator e;

            wait();

            m_tm = v8::base::OS::TimeCurrentMillis();

            while (1)
            {
                p = m_acSleep.getHead();
                if (p == NULL)
                    break;

                m_tms.insert(std::make_pair(m_tm + p->m_tm, p));
            }

            while (1)
            {
                e = m_tms.begin();
                if (e == m_tms.end())
                    break;
                if (e->first > m_tm)
                    break;

                e->second->m_now->resume();
                m_tms.erase(e);
            }
        }
    }

    void post(Sleeping *p)
    {
        m_acSleep.putTail(p);
        m_sem.Post();
    }

private:
    OSSemaphore m_sem;
    double m_tm;
    LockedList<Sleeping> m_acSleep;
    std::multimap<double, Sleeping *> m_tms;
} s_timer;

void init_timer()
{
    s_timer.start();
}

void Fiber::sleep(int32_t ms)
{
    if (ms <= 0) {
        assert(current() != 0);
        current()->yield();
    }
    else
    {
        Fiber* now = current();

        assert(now != 0);

        Sleeping as(now, ms);

        s_timer.post(&as);
        now->suspend();
    }
}

}
