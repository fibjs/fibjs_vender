/*
 *  fbLocker.cpp
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#include "service.h"
#include <map>

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
    Service *pService = Service::getFiberService();

#ifdef WIN32
    if (pService == 0)
        return;
#endif

    trace_assert(pService != 0);

    Fiber *current = pService->m_running;

    trace_assert(m_recursive || current != m_locker);

    if (!m_recursive && current == m_locker)
        return;

    if (m_locker && current != m_locker)
    {
        m_blocks.putTail(current);

#ifdef DEBUG
        if (m_blocks.count() > 200)
            dump();

        current->m_blocking = this;
#endif

        pService->switchtonext();

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
    Service *pService = Service::getFiberService();

    trace_assert(pService != 0);

    Fiber *current = pService->m_running;

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
    Service *pService = Service::getFiberService();

#ifdef WIN32
    if (pService == 0)
        return;
#endif

    trace_assert(pService != 0);

    Fiber *current = pService->m_running;

    trace_assert(current == m_locker);
    trace_assert(m_recursive || m_count == 1);
    trace_assert(m_count >= 1);

    if (--m_count == 0)
    {
        if (m_blocks.empty())
            m_locker = NULL;
        else
        {
            m_count++;
            m_locker = m_blocks.getHead();
#ifdef DEBUG
            m_trace = m_locker->m_trace;
#endif
            pService->m_resume.putTail(m_locker);
        }
    }
}

bool Locker::owned()
{
    Service *pService = Service::getFiberService();

    trace_assert(pService != 0);

    return pService->m_running == m_locker;
}

}
