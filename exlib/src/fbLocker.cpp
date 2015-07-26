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

void Blocker::suspend(spinlock& lock, Thread_base* current)
{
    if (current == 0)
        current = Fiber::Current();

    trace_assert(current != 0);

    m_blocks.putTail(current);

    lock.unlock();

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
#ifdef WIN32
    if (!Service::hasService())
        return;
#endif

    Thread_base *current = Fiber::Current();

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
        if (count() > 200)
            dump();

        current->m_blocking = this;
#endif

        suspend(m_lock, current);

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
#ifdef WIN32
    if (!Service::hasService())
        return true;
#endif

    Thread_base *current = Fiber::Current();

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
#ifdef WIN32
    if (!Service::hasService())
        return;
#endif

    Thread_base *current = Fiber::Current();

    trace_assert(current != 0);

    trace_assert(current == m_locker);
    trace_assert(m_recursive || m_count == 1);
    trace_assert(m_count >= 1);

    m_lock.lock();

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

    m_lock.unlock();
}

bool Locker::owned()
{
    Thread_base *current = Fiber::Current();

    trace_assert(current != 0);

    m_lock.lock();

    bool r = current == m_locker;

    m_lock.unlock();

    return r;
}

}
