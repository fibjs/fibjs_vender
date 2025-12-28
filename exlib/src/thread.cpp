/*
 *  thread.cpp
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#include <stdio.h>
#include <stdlib.h>

#include "thread.h"
#include "fiber.h"

namespace exlib {

static thread_local OSThread* th_current = nullptr;

void OSThread::start()
{
    Ref();
    m_thread = std::thread([this]() {
        save_stack_start();
        th_current = this;
        Run();
        Unref();
    });
}

void OSThread::suspend()
{
    m_sem.Wait();
}

void OSThread::suspend(spinlock& lock)
{
    lock.unlock();
    suspend();
}

void OSThread::resume()
{
    m_sem.Post();
}

OSThread* OSThread::current()
{
    return th_current;
}

void OSThread::bindCurrent()
{
    save_stack_start();

    Ref();
    th_current = this;
}

void OSThread::destroy()
{
    Thread_base::destroy();
    delete this;
}

void OSThread::join()
{
    if (m_thread.joinable())
        m_thread.join();
}

OSThread::~OSThread()
{
    if (m_thread.joinable())
        m_thread.detach();
}

}
