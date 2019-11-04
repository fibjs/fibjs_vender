/*
 *  fbSemaphore.cpp
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#include "service.h"

namespace exlib {

void Semaphore::wait()
{
    m_lock.lock();

    if (m_count == 0) {
        Task_base* current = Thread_base::current();
        assert(current != 0);

        m_blocks.putTail(current);
        current->suspend(m_lock);
    } else {
        m_count--;
        m_lock.unlock();
    }
}

void Semaphore::post(int32_t cnt)
{
    m_lock.lock();

    while (cnt--) {
        Task_base* fb;

        fb = m_blocks.getHead();
        if (fb == 0)
            m_count++;
        else
            fb->resume();
    }

    m_lock.unlock();
}

bool Semaphore::trywait()
{
    m_lock.lock();
    if (m_count == 0) {
        m_lock.unlock();
        return false;
    }

    m_count--;
    m_lock.unlock();

    return true;
}
}
