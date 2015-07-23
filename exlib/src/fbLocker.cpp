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

void Blocker::suspend(Thread_base* current)
{
    if (current == 0)
        current = Fiber::Current();

    trace_assert(current != 0);

    m_blocks.putTail(current);
    current->suspend();
}

Thread_base* Blocker::resume()
{
    Thread_base* fb = m_blocks.getHead();

    if (fb)
        fb->resume();

    return fb;
}

void Blocker::resumeAll()
{
    Thread_base* fb;

    while ((fb = m_blocks.getHead()) != 0)
        fb->resume();
}

void Locker::lock()
{
    Thread_base *current = Fiber::Current();

#ifdef WIN32
    if (current == 0)
        return;
#endif

    trace_assert(current != 0);
    trace_assert(m_recursive || current != m_locker);

    if (!m_recursive && current == m_locker)
        return;

    if (m_locker && current != m_locker)
    {
#ifdef DEBUG
        if (count() > 200)
            dump();

        current->m_blocking = this;
#endif

        suspend(current);

#ifdef DEBUG
        current->m_blocking = 0;
#endif
    }
    else if (++m_count == 1) {
        m_locker = current;
#ifdef DEBUG
        m_trace.save();
#endif
    }
}

bool Locker::trylock()
{
    Thread_base *current = Fiber::Current();

    trace_assert(current != 0);
    trace_assert(m_recursive || current != m_locker);

    if (!m_recursive && current == m_locker)
        return false;

    if (m_locker && current != m_locker)
        return false;

    if (++m_count == 1) {
        m_locker = current;
#ifdef DEBUG
        m_trace.save();
#endif
    }

    return true;
}

void Locker::unlock()
{
    Thread_base *current = Fiber::Current();

#ifdef WIN32
    if (current == 0)
        return;
#endif

    trace_assert(current != 0);

    trace_assert(current == m_locker);
    trace_assert(m_recursive || m_count == 1);
    trace_assert(m_count >= 1);

    if (--m_count == 0)
    {
        if ((m_locker = resume()) != 0)
        {
            m_count = 1;
#ifdef DEBUG
            m_trace = m_locker->m_trace;
#endif
        }
    }
}

bool Locker::owned()
{
    Thread_base *current = Fiber::Current();

    trace_assert(current != 0);

    return current == m_locker;
}

}
