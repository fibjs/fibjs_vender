/*
 *  fbSemaphore.cpp
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#include "service.h"

namespace exlib
{

void Semaphore::wait()
{
    m_lock.lock();

    if (m_count == 0)
    {
        Thread_base* current = Fiber::Current();
        trace_assert(current != 0);

        m_blocks.putTail(current);
        m_lock.unlock();

        current->suspend();
    }
    else
    {
        m_count--;
        m_lock.unlock();
    }
}

void Semaphore::post()
{
    Thread_base* fb;

    m_lock.lock();
    fb = m_blocks.getHead();
    if (fb == 0)
        m_count++;
    m_lock.unlock();

    if (fb != 0)
        fb->resume();
}

bool Semaphore::trywait()
{
    m_lock.lock();
    if (m_count == 0)
    {
        m_lock.unlock();
        return false;
    }

    m_count--;
    m_lock.unlock();

    return true;
}

}
