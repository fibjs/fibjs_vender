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
#include "lockfree.h"

namespace exlib
{

typedef void (*IDLE_PROC)();

class Service
{
public:
    Service();

public:
    void switchtonext();
    void yield();
    static Service *getFiberService();
    static bool hasService();

    void RequestInterrupt(IDLE_PROC proc)
    {
        atom_xchg(&m_InterCallback, proc);
    }

    IDLE_PROC onIdle(IDLE_PROC proc)
    {
        IDLE_PROC p = m_Idle;
        m_Idle = proc;
        return p;
    }

#ifdef DEBUG
public:
    Fiber* firstFiber()
    {
        linkitem* p = m_fibers.head();
        if (!p)
            return 0;
        return (Fiber*)((intptr_t)p - (intptr_t)(&((Fiber*)0)->m_link));
    }

    Fiber* nextFiber(Fiber* pThis)
    {
        linkitem* p = pThis->m_link.m_next;
        if (!p)
            return 0;
        return (Fiber*)((intptr_t)p - (intptr_t)(&((Fiber*)0)->m_link));
    }
#endif

private:
    void waitEvent();
    void doInterrupt();

public:
    Fiber m_main;
    Fiber *m_running;
    Fiber *m_recycle;
    char m_tls[TLS_SIZE];
    List<Fiber> m_resume;
    lockfree<AsyncEvent> m_aEvents;
    List<AsyncEvent> m_yieldList;

    IDLE_PROC m_Idle;
    IDLE_PROC m_InterCallback;

    static Service *root;

#ifdef DEBUG
    List<linkitem> m_fibers;
#endif
};

typedef lockfree<AsyncEvent> AsyncQueue;

}

#endif

