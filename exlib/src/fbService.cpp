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

namespace exlib
{

#define FB_STK_ALIGN 256

#ifdef _WIN32
extern "C" int win_switch(context *from, context *to);
#define fb_switch win_switch
#else
extern "C" int nix_switch(context *from, context *to);
#define fb_switch nix_switch
#endif

Service *Service::root;

#ifdef _WIN32

static DWORD s_main;

Service *Service::getFiberService()
{
    if (!s_main)
    {
        root = new Service();
        s_main = GetCurrentThreadId();
    }
    else if (s_main != GetCurrentThreadId())
        return NULL;

    return root;
}

bool Service::hasService()
{
    return s_main == GetCurrentThreadId();
}

#else

static pthread_t s_main;

Service *Service::getFiberService()
{
    if (!s_main)
    {
        root = new Service();
        s_main = pthread_self();
    }
    else if (s_main != pthread_self())
        return NULL;

    return root;
}

bool Service::hasService()
{
    return s_main == pthread_self();
}

#endif

static class _service_init
{
public:
    _service_init()
    {
        exlib::Service::getFiberService();
    }
} s_service_init;

Service::Service()
{
    m_recycle = NULL;
    m_running = &m_main;
    m_Idle = NULL;
    m_InterCallback = NULL;
    memset(&m_main, 0, sizeof(m_main));
    memset(&m_tls, 0, sizeof(m_tls));

    m_main.set_name("main");
    m_fibers.putTail(&m_main.m_link);
}

static void fiber_proc(void *(*func)(void *), void *data)
{
    func(data);

    Service::root->m_recycle = Service::root->m_running;
    Service::root->switchtonext();
}

Fiber *Fiber::Create(void *(*func)(void *), void *data, int stacksize)
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

    memset(fb, 0, sizeof(Fiber));

    fb->m_cntxt.ip = (reg_type) fiber_proc;
    fb->m_cntxt.sp = (reg_type) stack;

#if defined(x64)
#ifdef _WIN32
    fb->m_cntxt.Rcx = (reg_type) func;
    fb->m_cntxt.Rdx = (reg_type) data;
#else
    fb->m_cntxt.Rdi = (reg_type) func;
    fb->m_cntxt.Rsi = (reg_type) data;
#endif
#elif defined(I386)
    stack[1] = (void *)func;
    stack[2] = data;
#elif defined(arm)
    fb->m_cntxt.r0 = (reg_type) func;
    fb->m_cntxt.r1 = (reg_type) data;
#endif

    Service::root->m_resume.putTail(fb);
    Service::root->m_fibers.putTail(&fb->m_link);

    fb->Ref();
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

        pEvent = m_aEvents.get();
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

void Service::switchtonext()
{
    while (1)
    {
        doInterrupt();

        // First switch if we have work to do.
        if (!m_resume.empty())
        {
            Fiber *old = m_running;

            m_running = m_resume.getHead();

            if (old != m_running)
                fb_switch(&old->m_cntxt, &m_running->m_cntxt);

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
            AsyncEvent *p = m_aEvents.get();
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

        // if we still have time, weakup yield fiber.
        while (1)
        {
            AsyncEvent *p = m_yieldList.getHead();
            if (p == NULL)
                break;

            p->callback();
        }

        if (!m_resume.empty())
            continue;

        // still no work, we wait, and wait, and wait.....
        waitEvent();
    }
}

void Service::yield()
{
    AsyncEvent ae;
    m_yieldList.putTail(&ae);
    ae.wait();
}

}
