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
    Service(bool dedicated);

public:
    // A dedicated service is deleted by the framework once its thread returned
    // from Run(); free the main fiber context it owns before that.
    virtual ~Service();

public:
    static void dispatch();

    virtual void Run()
    {
        m_main.save_stack_start();
        m_main.m_ctx = convert_fiber(NULL);

        // Only pool workers report back to the master service. A dedicated
        // service has no master.
        if (m_master)
            m_master->m_idleWorkers.dec();
        dispatch_loop();
    }

private:
    void dispatch_loop();

public:
    static void init(int32_t workers);
    static void init();

    // Create a service that owns its run queue and exactly one OS thread, so a
    // fiber posted to it always runs on that thread until shutdown().
    static Service* createDedicated();

    static void CreateFiber(fiber_func func, void* data, int32_t stacksize,
        const char* name = NULL, Thread_base** retVal = NULL);

    // Create a fiber on a specific service instead of the shared pool.
    static void CreateFiber(Service* svc, fiber_func func, void* data,
        int32_t stacksize, const char* name = NULL,
        Thread_base** retVal = NULL);

    bool is_dedicated() const
    {
        return m_dedicated;
    }

    bool is_shutting_down() const
    {
        return m_shutting_down != 0;
    }

    // Ask a dedicated service to exit. The thread keeps draining its run queue
    // and returns from dispatch_loop() once the queue is empty. No-op on pool
    // workers and on the master service.
    void shutdown();

    void post(Fiber* fiber)
    {
        if (m_master) {
            m_master->post(fiber);
            return;
        }

        // A dedicated service that was asked to shut down still drains what is
        // already queued, but a post arriving after the thread returned from
        // dispatch_loop() would strand the fiber forever. The isolate is
        // responsible for quiescing its own producers first; report the
        // violation instead of hiding it.
        if (m_dedicated && m_shutting_down != 0)
            on_post_after_shutdown(fiber);

        m_resumeList.putTail(fiber);
        m_sem.Post();
    }

    Fiber* next()
    {
        if (m_master)
            return m_master->next();

        Fiber* fb;

        m_idleWorkers.inc();

        m_sem.Wait();
        fb = m_resumeList.getHead();

        // A dedicated service exits once it was asked to shut down and every
        // queued fiber has been drained. The shared pool never stops.
        if (!fb && m_dedicated && m_shutting_down != 0) {
            m_idleWorkers.dec();
            return NULL;
        }

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
        ex_assert(m_running != &m_main);
        ex_assert(current() == this);

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

    void on_post_after_shutdown(Fiber* fiber);

private:
    Service* m_master;

    Fiber m_main;

    Fiber* m_running;
    switchConextCallback* m_cb;

    exlib::atomic m_workers;
    exlib::atomic m_idleWorkers;
    // m_dedicated is immutable after construction; m_shutting_down is set by
    // whoever asks a dedicated service to exit.
    bool m_dedicated = false;
    exlib::atomic m_shutting_down;
    LockedList<Fiber> m_resumeList;
    OSSemaphore m_sem;
};
}
