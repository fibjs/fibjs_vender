/*
 *  fbLocker.cpp
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#include "service.h"

namespace exlib
{

void Locker::lock()
{
    Service *pService = Service::getFiberService();

#ifdef WIN32
    if (pService == 0)
        return;
#endif

    assert(pService != 0);

    Fiber *current = pService->m_running;

    assert(m_recursive || current != m_locker);

    if (!m_recursive && current == m_locker)
        return;

    if (m_locker && current != m_locker)
    {
        m_blocks.putTail(current);
        pService->switchtonext();
    }
    else if (++m_count == 1)
        m_locker = current;
}

bool Locker::trylock()
{
    Service *pService = Service::getFiberService();

    assert(pService != 0);

    Fiber *current = pService->m_running;

    if (m_locker && current != m_locker)
        return false;

    if (++m_count == 1)
        m_locker = current;

    return true;
}

void Locker::unlock()
{
    Service *pService = Service::getFiberService();

#ifdef WIN32
    if (pService == 0)
        return;
#endif

    assert(pService != 0);

    Fiber *current = pService->m_running;

    assert(current == m_locker);
    assert(m_recursive || m_count == 1);
    assert(m_count >= 1);

    if (current == m_locker)
    {
        if (--m_count == 0)
        {
            if (m_blocks.empty())
                m_locker = NULL;
            else
            {
                m_count++;
                m_locker = m_blocks.getHead();
                pService->m_resume.putTail(m_locker);
            }
        }
    }
}

bool Locker::owned()
{
    Service *pService = Service::getFiberService();

    assert(pService != 0);

    return pService->m_running == m_locker;
}

}
