/*
 *  fiber.h
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#pragma once

#include "fiber.h"
#include "thread.h"
#include "fb_api.h"

namespace exlib {

class Service : public OSThread {
private:
    Service();
    Service(int32_t workers);

public:
    static const int32_t type = kTTService;
    virtual bool is(int32_t t)
    {
        return t == type || OSThread::is(t);
    }

    static void dispatch();

    virtual void Run()
    {
        m_main.saveStackGuard();
        m_main.m_ctx = convert_fiber(NULL);

        m_master->m_idleWorkers.dec();
        dispatch_loop();
    }

private:
    void dispatch_loop();

public:
    static void init(int32_t workers);
    static Service* current();
    static void init();

    static void CreateFiber(fiber_func func, void* data, int32_t stacksize,
        const char* name = NULL, Thread_base** retVal = NULL);

    void post(Fiber* fiber)
    {
        if (m_master)
            m_master->post(fiber);
        else {
            m_resumeList.putTail(fiber);
            m_sem.Post();
        }
    }

    Fiber* next()
    {
        if (m_master)
            return m_master->next();

        Fiber* fb;

        m_idleWorkers.inc();

        m_sem.Wait();
        fb = m_resumeList.getHead();

        if (m_idleWorkers.dec() == 0 && m_workers > 0) {
            if (m_workers.dec() < 0)
                m_workers.inc();
            else {
                m_idleWorkers.inc();
                Service* worker = new Service();
                worker->start();
            }
        }

        return fb;
    }

    Fiber* running()
    {
        return m_running;
    }

public:
    class switchConextCallback {
    public:
        virtual ~switchConextCallback()
        {
        }

    public:
        virtual void invoke() = 0;
    };

public:
    void switchConext()
    {
        assert(m_running != &m_main);
        assert(current() == this);

        switch_fiber(m_running->m_ctx, m_main.m_ctx);
    }

    void switchConext(switchConextCallback* cb)
    {
        m_cb = cb;
        switchConext();
    }

public:
    static bool use_thread;

private:
    static void fiber_proc(fiber_func func, Fiber* fb);

private:
    Service* m_master;

    Fiber m_main;

    Fiber* m_running;
    switchConextCallback* m_cb;

    exlib::atomic m_workers;
    exlib::atomic m_idleWorkers;
    LockedList<Fiber> m_resumeList;
    OSSemaphore m_sem;
};
}
