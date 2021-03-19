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

void RWLocker::rdlock()
{
    m_reader.lock();

    if (++m_count == 1)
        m_writer.lock();

    m_reader.unlock();
}

void RWLocker::rdunlock()
{
    m_reader.lock();

    if (--m_count == 0)
        m_writer.unlock();

    m_reader.unlock();
}

bool RWLocker::tryrdlock()
{
    m_reader.lock();

    if (++m_count == 1)
        if (!m_writer.trylock()) {
            m_count--;
            m_reader.unlock();

            return false;
        }

    m_reader.unlock();

    return true;
}

void RWLocker::wrlock()
{
    m_writer.lock();
}

void RWLocker::wrunlock()
{
    m_writer.unlock();
}

bool RWLocker::trywrlock()
{
    return m_writer.trylock();
}
}
