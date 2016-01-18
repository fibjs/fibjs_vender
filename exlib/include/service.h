/*
 *  fiber.h
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#ifndef _ex_service_h__
#define _ex_service_h__

#include "fiber.h"
#include "thread.h"

namespace exlib
{

class Service : public OSThread
{
private:
    Service(Service* master);
    Service(int32_t workers = 1);

public:
    static const int32_t type = 2;
    virtual bool is(int32_t t)
    {
        return t == type || OSThread::is(t);
    }

    void start()
    {
        m_master->m_idleWorkers.inc();
        OSThread::start();
    }

    void bindCurrent()
    {
        m_main.saveStackGuard();
        OSThread::bindCurrent();
    }

    static void dispatch();

    virtual void Run()
    {
        m_main.saveStackGuard();

        m_master->m_idleWorkers.dec();
        dispatch_loop();
    }

private:
    void dispatch_loop();

public:
    static void init(int32_t workers);
    static Service *current();
    static void init();

    static Fiber* Create(void *(*func)(void *), void *data, int32_t stacksize);

    void post(Fiber* fiber)
    {
        m_master->m_resume->post(fiber);
    }

    Fiber* next()
    {
        return m_master->_next();
    }

    Fiber* running()
    {
        return m_running;
    }

public:
    void switchConext()
    {
        assert(m_running != &m_main);
        assert(current() == this);

        m_running->m_cntxt.switchto(&m_main.m_cntxt);
    }

    void switchConext(spinlock& lock)
    {
        m_unlocker = &lock;
        switchConext();
    }

    void yield()
    {
        m_yield = m_running;
        switchConext();
    }

private:
    static void fiber_proc(void *(*func)(void *), Fiber* fb);

    Fiber* _next()
    {
        Fiber* fb;

        m_idleWorkers.inc();
        fb = m_resume->next();
        if (m_idleWorkers.dec() == 0 && m_workers > 0)
        {
            if (m_workers.dec() < 0)
                m_workers.inc();
            else
            {
                Service* worker = new Service(this);
                worker->start();
            }
        }

        return fb;
    }

    class ResumeQueue
    {
    public:
        void post(Fiber* fiber)
        {
            m_resume.putTail(fiber);
            m_sem.Post();
        }

        Fiber* next()
        {
            m_sem.Wait();
            return m_resume.getHead();
        }

    private:
        LockedList<Fiber> m_resume;
        OSSemaphore m_sem;
    };

private:
    Service* m_master;
    exlib::atomic m_workers;
    exlib::atomic m_idleWorkers;

    Fiber m_main;

    Fiber *m_running;

    Fiber *m_recycle;
    Fiber *m_yield;
    spinlock *m_unlocker;

    ResumeQueue* m_resume;
};

}

#endif

