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
    , m_main(this, nullptr)
    , m_running(&m_main)
    , m_cb(NULL)
{
    m_main.set_name("main");
    m_main.Ref();
}

Service::Service(int32_t workers)
    : m_master(NULL)
    , m_main(this, nullptr)
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
    fb->m_func();

    Service* now = fb->m_pService;
    now->switchConext(&_cb);
}

bool Service::use_thread = false;

Fiber* Fiber::Create(std::function<void()> func, int32_t stacksize, const char* name)
{
    Fiber* fb = new Fiber(s_service, std::move(func));
    fb->m_ctx = create_fiber(stacksize, _fiber_proc, fb);

    if (name)
        fb->set_name(name);

    fb->Ref();
    fb->resume();

    return fb;
}

Fiber* Service::CreateFiber(std::function<void()> func, int32_t stacksize, const char* name, Thread_base** retVal)
{
    if (use_thread) {
        OSThread* th = OSThread::Create(std::move(func));
        if (retVal) {
            *retVal = th;
            th->Ref();
        }
        return nullptr;
    }

    Fiber* fb = Fiber::Create(std::move(func), stacksize, name);

    if (retVal) {
        *retVal = fb;
        fb->Ref();
    }

    return fb;
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
        ex_assert(fb != 0);

        m_running = fb;
        fb->m_pService = this;
        switch_fiber(m_main.m_ctx, fb->m_ctx);
    }
}
}
