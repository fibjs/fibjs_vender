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

LockedList<AsyncEvent> s_acSleep;
std::multimap<double, AsyncEvent *> s_tms;


Fiber *Fiber::Current()
{
    Service *pService = Service::getFiberService();

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

void Fiber::suspend()
{
    m_pService->switchConext();
}

void Fiber::resume()
{
    m_pService->m_resume.putTail(this);
}

static class _timerThread: public OSThread
{
public:
    _timerThread()
    {
        start();
    }

    OSSemaphore m_sem;
    double now;

    void wait()
    {
        std::multimap<double, AsyncEvent *>::iterator e;

        e = s_tms.begin();
        if (e != s_tms.end())
            m_sem.TimedWait((int32_t)(e->first - now));
        else
            m_sem.Wait();
    }

    virtual void Run()
    {
        now = v8::base::OS::TimeCurrentMillis();

        while (1)
        {
            AsyncEvent *p;
            std::multimap<double, AsyncEvent *>::iterator e;

            wait();

            now = v8::base::OS::TimeCurrentMillis();

            while (1)
            {
                p = s_acSleep.getHead();
                if (p == NULL)
                    break;

                s_tms.insert(std::make_pair(now + p->result(), p));
            }

            while (1)
            {
                e = s_tms.begin();
                if (e == s_tms.end())
                    break;
                if (e->first > now)
                    break;

                e->second->apost(0);
                s_tms.erase(e);
            }
        }
    }

    static void post(AsyncEvent *p);

} s_timer;

void _timerThread::post(AsyncEvent *p)
{
    s_acSleep.putTail(p);
    s_timer.m_sem.Post();
}

void AsyncEvent::sleep(int ms)
{
    m_v = ms;
    _timerThread::post(this);
}

void Fiber::sleep(int ms)
{
    if (ms <= 0) {
        Service *pService = Service::getFiberService();

        trace_assert(pService != 0);

        pService->yield();
    }
    else
    {
        AsyncEvent as;

        as.sleep(ms);
        as.wait();
    }
}

}
