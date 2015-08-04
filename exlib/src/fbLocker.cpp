/*
 *  fbLocker.cpp
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#include "service.h"
#include <map>
#include <assert.h>

#ifndef WIN32
#include <unistd.h>
#endif

namespace exlib
{

void Locker::lock()
{
    Thread_base *current = Thread_base::current();

    assert(current != 0);
    assert(m_recursive || current != m_locker);

    m_lock.lock();

    if (!m_recursive && current == m_locker)
    {
        m_lock.unlock();
        return;
    }

    if (m_locker && current != m_locker)
    {
        m_blocks.putTail(current);
        m_lock.unlock();

        current->suspend();
        return;
    }

    if (++m_count == 1) {
        m_locker = current;
    }

    m_lock.unlock();
}

bool Locker::trylock()
{
    Thread_base *current = Thread_base::current();

    assert(current != 0);
    assert(m_recursive || current != m_locker);

    m_lock.lock();

    if (!m_recursive && current == m_locker)
    {
        m_lock.unlock();
        return false;
    }

    if (m_locker && current != m_locker)
    {
        m_lock.unlock();
        return false;
    }

    if (++m_count == 1) {
        m_locker = current;
    }

    m_lock.unlock();

    return true;
}

void Locker::unlock()
{
    Thread_base *current = Thread_base::current();
    Thread_base *fb = 0;

    assert(current != 0);

    assert(current == m_locker);
    assert(m_recursive || m_count == 1);
    assert(m_count >= 1);

    m_lock.lock();

    if (--m_count == 0)
    {
        if ((m_locker = m_blocks.getHead()) != 0)
        {
            fb = m_locker;
            m_count = 1;
        }
    }

    m_lock.unlock();

    if (fb)
        fb->resume();
}

bool Locker::owned()
{
    Thread_base *current = Thread_base::current();

    assert(current != 0);

    m_lock.lock();

    bool r = current == m_locker;

    m_lock.unlock();

    return r;
}

}
