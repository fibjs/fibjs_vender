/*
 *  fbLocker.cpp
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#include "service.h"
#include <map>

#ifndef WIN32
#include <unistd.h>
#endif

namespace exlib {

bool Locker::lock(Task_base* current)
{
    if (current == 0)
        current = Thread_base::current();

    assert(current != 0);

    m_lock.lock();

    if (!canlock(current)) {
        m_blocks.putTail(current);
        current->suspend(m_lock);
        return false;
    }

    if (++m_count == 1)
        m_locker = current;

    m_lock.unlock();

    return true;
}

bool Locker::trylock(Task_base* current)
{
    if (current == 0)
        current = Thread_base::current();

    assert(current != 0);

    m_lock.lock();

    if (!canlock(current)) {
        m_lock.unlock();
        return false;
    }

    if (++m_count == 1)
        m_locker = current;

    m_lock.unlock();

    return true;
}

void Locker::unlock(Task_base* current)
{
#ifdef DEBUG
    if (current == 0)
        current = Thread_base::current();
#endif

    Task_base* fb = 0;

    assert(current != 0);
    assert(current == m_locker);
    assert(m_recursive || m_count == 1);
    assert(m_count >= 1);

    m_lock.lock();

    if (--m_count == 0) {
        if ((m_locker = m_blocks.getHead()) != 0) {
            fb = m_locker;
            m_count = 1;
        }
    }

    m_lock.unlock();

    if (fb)
        fb->resume();
}

bool Locker::owned(Task_base* current)
{
    if (current == 0)
        current = Thread_base::current();

    assert(current != 0);

    m_lock.lock();

    bool r = current == m_locker;

    m_lock.unlock();

    return r;
}
}
