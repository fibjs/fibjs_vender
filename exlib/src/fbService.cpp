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

namespace exlib
{

#define FB_STK_ALIGN 256

void init_timer();

static bool s_service_inited;

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

Service *Service::current()
{
    OSThread* thread_ = OSThread::current();

    assert(s_service_inited);
    assert(thread_ != 0);
    assert(thread_->is(Service::type));

    return (Service*)thread_;
}

bool Service::hasService()
{
    if (!s_service_inited)
        return false;

    assert(OSThread::current() != 0);
    return OSThread::current()->is(Service::type);
}

Service::Service(Service* master) : m_main(this, NULL)
{
    m_recycle = NULL;
    m_running = &m_main;

    m_resume = master ? master->m_resume : new ResumeQueue();

    m_main.set_name("main");
    m_main.Ref();
    m_main.saveStackGuard();

    if (!s_service_inited)
    {
        s_service_inited = true;
        init_timer();
    }
}

void Service::fiber_proc(void *(*func)(void *), Fiber *fb)
{
    fb->saveStackGuard();

    func(fb->m_data);

    Service* now = fb->m_pService;

    now->m_recycle = now->m_running;
    now->switchConext();
}

Fiber *Service::Create(void *(*func)(void *), void *data, int32_t stacksize)
{
    Fiber *fb;
    void **stack;

    stacksize = (stacksize + FB_STK_ALIGN - 1) & ~(FB_STK_ALIGN - 1);
#ifdef WIN32
    fb = (Fiber *) VirtualAlloc(NULL, stacksize, MEM_COMMIT | MEM_TOP_DOWN, PAGE_READWRITE);
#else
    fb = (Fiber *) malloc(stacksize);
#endif
    if (fb == NULL)
        return NULL;
    stack = (void **) fb + stacksize / sizeof(void *) - 5;

    new(fb) Fiber(this, data);

    fb->m_cntxt.ip = (intptr_t) fiber_proc;
    fb->m_cntxt.sp = (intptr_t) stack;

#if defined(x64)
#ifdef _WIN32
    fb->m_cntxt.Rcx = (intptr_t) func;
    fb->m_cntxt.Rdx = (intptr_t) fb;
#else
    fb->m_cntxt.Rdi = (intptr_t) func;
    fb->m_cntxt.Rsi = (intptr_t) fb;
#endif
#elif defined(I386)
    stack[1] = (void *)func;
    stack[2] = fb;
#elif defined(arm)
    fb->m_cntxt.r0 = (intptr_t) func;
    fb->m_cntxt.r1 = (intptr_t) fb;
#endif

    fb->resume();
    fb->Ref();

    return fb;
}

void Service::switchConext()
{
    Fiber *new_ = next();

    assert(new_ != 0);

    Fiber *old = m_running;
    m_running = new_;

    if (old != new_)
        old->m_cntxt.switchto(&new_->m_cntxt);

    if (m_recycle)
    {
        m_recycle->m_joins.set();
        m_recycle->Unref();
        m_recycle = NULL;
    }
}

}
