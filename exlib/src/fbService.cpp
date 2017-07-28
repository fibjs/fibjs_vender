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
#include <assert.h>

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
        static Service _srv(workers);
        s_service = &_srv;
        s_service->m_main.saveStackGuard();
        s_service->bindCurrent();
    }
}

Thread_base* Thread_base::current()
{
    if (!s_service_inited)
        return 0;

    OSThread* thread_ = OSThread::current();

    if (thread_ == 0)
        return 0;

    if (thread_->is(Service::type))
        return ((Service*)thread_)->running();
    return thread_;
}

Service* Service::current()
{
    OSThread* thread_ = OSThread::current();

    assert(s_service_inited);
    assert(thread_ != 0);
    assert(thread_->is(Service::type));

    return (Service*)thread_;
}

#ifdef DEBUG

static LockedList<linkitem> s_fibers;
static spinlock s_locker;

void Service::forEach(void (*func)(Fiber*))
{
    s_locker.lock();

    linkitem* p = s_fibers.head();

    while (p) {
        Fiber* zfb = 0;
        func((Fiber*)((intptr_t)p - (intptr_t)(&zfb->m_link)));

        p = s_fibers.next(p);
    }

    s_locker.unlock();
}

#endif

Service::Service()
    : m_master(s_service)
    , m_main(this, NULL, NULL)
    , m_running(&m_main)
    , m_cb(NULL)
{
    m_main.set_name("main");
    m_main.m_ctx = convert_Fiber(NULL);
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
    m_main.m_ctx = convert_Fiber(NULL);
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
#ifdef DEBUG
            s_locker.lock();
            s_fibers.remove(&m_fb->m_link);
            s_locker.unlock();
#endif

            m_fb->m_joins.set();
            m_fb->Unref();
        }

    private:
        Fiber* m_fb;
    } _cb(fb);

    fb->saveStackGuard();
    fb->m_func(fb->m_data);

    Service* now = fb->m_pService;
    now->switchConext(&_cb);
}

void Service::Create(fiber_func func, void* data, int32_t stacksize, const char* name, Fiber** retVal)
{
    Fiber* fb = new Fiber(s_service, func, data);
    fb->m_ctx = create_fiber(stacksize, _fiber_proc, fb);

#ifdef DEBUG
    s_locker.lock();
    s_fibers.putTail(&fb->m_link);
    s_locker.unlock();
#endif

    if (retVal) {
        *retVal = fb;
        fb->Ref();
    }

    fb->Ref();
    fb->resume();
}

void Service::dispatch()
{
    assert(s_service != 0);
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
        assert(fb != 0);

        m_running = fb;
        fb->m_pService = this;
        switch_fiber(m_main.m_ctx, fb->m_ctx);
    }
}
}
