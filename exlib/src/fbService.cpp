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

Service *root;

static bool s_service_inited;

Service *Service::current()
{
    OSThread* thread_ = OSThread::current();

    assert(s_service_inited);
    assert(thread_ != 0);
    assert(!strcmp(thread_->type(), "Service"));

    return (Service*)thread_;
}

bool Service::hasService()
{
    if (!s_service_inited)
        return false;

    assert(OSThread::current() != 0);
    return !strcmp(OSThread::current()->type(), "Service");
}

void Service::init()
{
    root = new Service();
    root->bindCurrent();

    s_service_inited = true;
}

Service::Service() : m_main(this)
{
    mem_savestack();

    m_recycle = NULL;
    m_running = &m_main;
    m_Idle = NULL;
    m_InterCallback = NULL;
    memset(&m_tls, 0, sizeof(m_tls));

    m_main.set_name("main");
    m_main.Ref();

    m_fibers.putTail(&m_main.m_link);
}

const char* Service::type()
{
    return "Service";
}

#ifdef DEBUG
void Service::dumpFibers()
{
#ifndef WIN32
    Fiber* fb = firstFiber();
    while (fb)
    {
        fb->m_trace.dump();
        fb = nextFiber(fb);
    }
#endif
}
#endif

static void fiber_proc(void *(*func)(void *), void *data)
{
    func(data);

    Service* now = Service::current();
    now->m_recycle = now->m_running;
    now->switchConext();
}

Fiber *Fiber::Create(void *(*func)(void *), void *data, int stacksize)
{
    Fiber *fb;
    void **stack;
    Service* now = Service::current();

    stacksize = (stacksize + FB_STK_ALIGN - 1) & ~(FB_STK_ALIGN - 1);
#ifdef WIN32
    fb = (Fiber *) VirtualAlloc(NULL, stacksize, MEM_COMMIT | MEM_TOP_DOWN, PAGE_READWRITE);
#else
    fb = (Fiber *) malloc(stacksize);
#endif
    if (fb == NULL)
        return NULL;
    stack = (void **) fb + stacksize / sizeof(void *) - 5;

    new(fb) Fiber(now);

#ifdef DEBUG
    fb->m_stacktop = stack;
#endif

    fb->m_cntxt.ip = (intptr_t) fiber_proc;
    fb->m_cntxt.sp = (intptr_t) stack;

#if defined(x64)
#ifdef _WIN32
    fb->m_cntxt.Rcx = (intptr_t) func;
    fb->m_cntxt.Rdx = (intptr_t) data;
#else
    fb->m_cntxt.Rdi = (intptr_t) func;
    fb->m_cntxt.Rsi = (intptr_t) data;
#endif
#elif defined(I386)
    stack[1] = (void *)func;
    stack[2] = data;
#elif defined(arm)
    fb->m_cntxt.r0 = (intptr_t) func;
    fb->m_cntxt.r1 = (intptr_t) data;
#endif

    now->m_resume.putTail(fb);
    now->m_fibers.putTail(&fb->m_link);

    fb->Ref();

    return fb;
}

void Service::doInterrupt()
{
    IDLE_PROC proc = m_InterCallback;

    if (proc)
    {
        atom_xchg(&m_InterCallback, (IDLE_PROC)NULL);
        proc();
    }
}

void Service::waitEvent()
{
    int nCount = 0;
    int time_0 = 0;
    int time_1 = time_0 + 2000;
    int time_2 = time_1 + 200;
    int time_3 = time_2 + 20;
    AsyncEvent* pEvent;

    while (1)
    {
        doInterrupt();

        if (nCount < 2000000)
            nCount++;

        if (!m_resume.empty())
            return;

        pEvent = m_aEvents.getHead();
        if (pEvent != 0)
            break;

        if (nCount > time_3)
            OSThread::Sleep(100);
        else if (nCount > time_2)
            OSThread::Sleep(10);
        else if (nCount > time_1)
            OSThread::Sleep(1);
        else if (nCount > time_0)
            OSThread::Sleep(0);
    }

    pEvent->callback();
}

void Service::switchConext()
{
#ifdef DEBUG
    m_running->m_trace.save();
#endif

    while (1)
    {
        doInterrupt();

        // First switch if we have work to do.
        if (!m_resume.empty())
        {
            Fiber *old = m_running;

            m_running = m_resume.getHead();

            if (old != m_running)
                old->m_cntxt.switchto(&m_running->m_cntxt);

            if (m_recycle)
            {
                m_fibers.remove(&m_recycle->m_link);
                m_recycle->m_joins.set();
                m_recycle->Unref();
                m_recycle = NULL;
            }
            break;
        }

        // Then weakup async event.
        while (1)
        {
            AsyncEvent *p = m_aEvents.getHead();
            if (p == NULL)
                break;

            p->callback();
        }

        if (!m_resume.empty())
            continue;

        // doing smoething when we have time.
        if (m_Idle)
            m_Idle();

        if (!m_resume.empty())
            continue;

        // still no work, we wait, and wait, and wait.....
        waitEvent();
    }
}

}
