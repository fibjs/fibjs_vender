/*
 *  fbLocker.cpp
 *  Created on: Apr 7, 2019
 *
 *  Copyright (c) 2019 by Leo Hoo
 *  lion@9465.net
 */

#include "service.h"
#include <map>

#ifndef WIN32
#include <unistd.h>
#endif

namespace exlib {

void RWLocker::rdlock(Task_base* current)
{
    if (current == 0)
        current = Thread_base::current();

    assert(current != 0);

    m_reader.lock();

    if (++m_count == 1)
        m_writer.lock(current);

    m_reader.unlock();
}

void RWLocker::rdunlock(Task_base* current)
{
    if (current == 0)
        current = Thread_base::current();

    assert(current != 0);

    m_reader.lock();

    if (--m_count == 0)
        m_writer.unlock(current);

    m_reader.unlock();
}

bool RWLocker::tryrdlock(Task_base* current)
{
    if (current == 0)
        current = Thread_base::current();

    assert(current != 0);

    m_reader.lock();

    if (++m_count == 1)
        if (!m_writer.trylock(current)) {
            m_count--;
            m_reader.unlock();

            return false;
        }

    m_reader.unlock();

    return true;
}

void RWLocker::wrlock(Task_base* current)
{
    m_writer.lock(current);
}

void RWLocker::wrunlock(Task_base* current)
{
    m_writer.unlock(current);
}

bool RWLocker::trywrlock(Task_base* current)
{
    return m_writer.trylock(current);
}
}
