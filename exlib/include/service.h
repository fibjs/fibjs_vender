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
    Service(Service* master);

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

    void post(Fiber* fiber)
    {
        m_resume->post(fiber);
    }

    Fiber* next()
    {
        return m_resume->next();
    }

    Fiber* running()
    {
        return m_running;
    }

private:
    static void fiber_proc(void *(*func)(void *), void *data);

    class ResumeQueue
    {
    public:
        void post(Fiber* fiber)
        {
            m_resume.putTail(fiber);
            m_sem.Post();
        }

        Fiber* next()
        {
            Fiber* new_;

            do
            {
                m_sem.Wait();
                new_ = m_resume.getHead();
            } while (!new_);

            return new_;
        }

    private:
        LockedList<Fiber> m_resume;
        OSSemaphore m_sem;
    };

private:
    Fiber m_main;
    Fiber *m_running;
    Fiber *m_recycle;
    ResumeQueue* m_resume;
};

}

#endif

