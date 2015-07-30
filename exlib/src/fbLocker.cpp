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

namespace exlib
{

#ifdef DEBUG
void Locker::dump()
{
    puts("lock chain...........................");

    Locker* lock = this;
    std::map<Locker*, bool> mapLocker;

    while (lock && mapLocker.find(lock) == mapLocker.end()) {
        mapLocker.insert(std::pair<Locker*, bool>(lock, true));

        printf("\nLock %p locked by Fiber %p\n", lock, lock->m_locker);
        lock->m_trace.dump();

        printf("\nFiber %p blocked by Lock %p\n", lock->m_locker,
               lock->m_locker->m_blocking);
        lock->m_locker->m_trace.dump();
        lock = lock->m_locker->m_blocking;
    }
    _exit(-1);
}
#endif

void Locker::lock()
{
    Thread_base *current = Thread_base::current();

    trace_assert(current != 0);
    trace_assert(m_recursive || current != m_locker);

    m_lock.lock();

    if (!m_recursive && current == m_locker)
    {
        m_lock.unlock();
        return;
    }

    if (m_locker && current != m_locker)
    {
#ifdef DEBUG
        if (m_blocks.count() > 200)
            dump();

        current->m_blocking = this;
#endif

        m_blocks.putTail(current);
        m_lock.unlock();

        current->suspend();

#ifdef DEBUG
        current->m_blocking = 0;
#endif
        return;
    }

    if (++m_count == 1) {
        m_locker = current;
#ifdef DEBUG
        m_trace.save();
#endif
    }

    m_lock.unlock();
}

bool Locker::trylock()
{
    Thread_base *current = Thread_base::current();

    trace_assert(current != 0);
    trace_assert(m_recursive || current != m_locker);

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
#ifdef DEBUG
        m_trace.save();
#endif
    }

    m_lock.unlock();

    return true;
}

void Locker::unlock()
{
    Thread_base *current = Thread_base::current();
    Thread_base *fb = 0;

    trace_assert(current != 0);

    trace_assert(current == m_locker);
    trace_assert(m_recursive || m_count == 1);
    trace_assert(m_count >= 1);

    m_lock.lock();

    if (--m_count == 0)
    {
        if ((m_locker = m_blocks.getHead()) != 0)
        {
            fb = m_locker;
            m_count = 1;
#ifdef DEBUG
            m_trace = m_locker->m_trace;
#endif
        }
    }

    m_lock.unlock();

    if (fb)
        fb->resume();
}

bool Locker::owned()
{
    Thread_base *current = Thread_base::current();

    trace_assert(current != 0);

    m_lock.lock();

    bool r = current == m_locker;

    m_lock.unlock();

    return r;
}

}
