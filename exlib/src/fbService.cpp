/*
 *  fbService.cpp
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "osconfig.h"
#include "service.h"
#include "thread.h"

namespace exlib {

#define FB_STK_ALIGN 256

void init_timer();

static bool s_service_inited;
static Service* s_service = NULL;

void Service::init(int32_t workers)
{
    if (!s_service) {
        s_service = new Service(workers);
        s_service->m_main.save_stack_start();
        s_service->bindCurrent();
    }
}

Thread_base* Thread_base::current()
{
    if (!s_service_inited)
        return OSThread::current();

    OSThread* thread_ = OSThread::current();

    if (thread_ == 0)
        return 0;

    if (dynamic_cast<Service*>(thread_))
        return ((Service*)thread_)->running();
    return thread_;
}

Service::Service()
    : m_master(s_service)
    , m_main(this, NULL, NULL)
    , m_running(&m_main)
    , m_cb(NULL)
{
    m_main.set_name("main");
    m_main.Ref();
}

Service::Service(int32_t workers)
    : m_master(NULL)
    , m_main(this, NULL, NULL)
    , m_running(&m_main)
    , m_cb(NULL)
    , m_workers(workers - 1)
{
    m_main.set_name("main");
    m_main.m_ctx = convert_fiber(NULL);
    m_main.Ref();

    if (!s_service_inited) {
        s_service_inited = true;
        init_timer();
    }
}

// A dedicated service is a pool worker that belongs to nobody: it owns its run
// queue and runs on its own OS thread, so any fiber posted to it stays on that
// thread. Used to pin all JS execution of one isolate to a single thread.
Service::Service(bool dedicated)
    : m_master(NULL)
    , m_main(this, NULL, NULL)
    , m_running(&m_main)
    , m_cb(NULL)
    , m_dedicated(dedicated)
{
    m_main.set_name("main");
    m_main.Ref();
}

Service::~Service()
{
    // m_main.m_ctx is allocated by convert_fiber() when the thread starts
    // running this service. A pool worker never gets here (it returns from
    // dispatch_loop() only when the process dies), but a dedicated service does
    // once it is shut down.
    if (m_main.m_ctx) {
        ex_assert(m_running == &m_main);
        delete_fiber(m_main.m_ctx);
        m_main.m_ctx = NULL;
    }
}

Service* Service::createDedicated()
{
    Service* svc = new Service(true);

    // start() takes one reference for the thread itself. Take a second one for
    // the owner so the object stays valid after the thread returned from Run()
    // and the framework dropped its own reference - the owner releases it with
    // Unref() once it stops using the service.
    svc->Ref();
    svc->start();

    return svc;
}

void Service::shutdown()
{
    if (!m_dedicated || m_shutting_down != 0)
        return;

    m_shutting_down = 1;
    m_sem.Post();
}

void Service::on_post_after_shutdown(Fiber* fiber)
{
#ifdef DEBUG
    fprintf(stderr, "exlib: fiber %p posted to a service that is shutting down\n",
        (void*)fiber);
    fflush(stderr);
    ex_assert(false);
#else
    (void)fiber;
#endif
}

static void _fiber_proc(void* param)
{
    Fiber* fb = (Fiber*)param;
    class cb : public Service::switchConextCallback {
    public:
        cb(Fiber* fb)
            : m_fb(fb)
        {
        }

    public:
        virtual void invoke()
        {
            m_fb->m_joins.set();
            m_fb->Unref();
        }

    private:
        Fiber* m_fb;
    } _cb(fb);

    fb->save_stack_start();
    fb->m_func(fb->m_data);

    Service* now = fb->m_pService;
    now->switchConext(&_cb);
}

bool Service::use_thread = false;

void Service::CreateFiber(fiber_func func, void* data, int32_t stacksize, const char* name, Thread_base** retVal)
{
    CreateFiber(s_service, func, data, stacksize, name, retVal);
}

void Service::CreateFiber(Service* svc, fiber_func func, void* data, int32_t stacksize, const char* name, Thread_base** retVal)
{
    if (use_thread) {
        OSThread::Create(func, data, retVal);
        return;
    }

    Fiber* fb = new Fiber(svc, func, data);
    fb->m_ctx = create_fiber(stacksize, _fiber_proc, fb);

    if (retVal) {
        *retVal = fb;
        fb->Ref();
    }

    fb->Ref();
    fb->resume();
}

void Service::dispatch()
{
    ex_assert(s_service != 0);
    s_service->dispatch_loop();
}

void Service::dispatch_loop()
{
    while (true) {
        m_running = &m_main;

        if (m_cb) {
            m_cb->invoke();
            m_cb = NULL;
        }

        Fiber* fb = next();

        // next() only returns NULL for a dedicated service that was asked to
        // shut down and has drained its run queue.
        if (fb == 0) {
            ex_assert(m_dedicated);
            break;
        }

        m_running = fb;
        fb->m_pService = this;
        switch_fiber(m_main.m_ctx, fb->m_ctx);
    }
}
}
