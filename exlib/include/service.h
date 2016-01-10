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
public:
    Service();

public:
    static const int32_t type = 2;
    virtual bool is(int32_t t)
    {
        return t == type || OSThread::is(t);
    }

    virtual void Run()
    {}

public:
    void switchConext();
    static Service *current();
    static bool hasService();
    static void init();

    Fiber* Create(void *(*func)(void *), void *data, int32_t stacksize);

public:
    Fiber m_main;
    Fiber *m_running;
    Fiber *m_recycle;
    LockedList<Fiber> m_resume;
};

}

#endif

