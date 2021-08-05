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
    m_writer.lock();
    m_reader.lock();

    if (++m_count == 1)
        m_ready.reset();

    m_reader.unlock();
    m_writer.unlock();
}

void RWLocker::rdunlock()
{
    m_reader.lock();

    if (--m_count == 0)
        m_ready.set();

    m_reader.unlock();
}

bool RWLocker::tryrdlock()
{
    if (!m_writer.trylock())
        return false;

    m_reader.lock();

    if (++m_count == 1)
        m_ready.reset();

    m_reader.unlock();
    m_writer.unlock();

    return true;
}

void RWLocker::wrlock()
{
    m_writer.lock();
    m_ready.wait();
}

void RWLocker::wrunlock()
{
    m_writer.unlock();
}

bool RWLocker::trywrlock()
{
    if (!m_writer.trylock())
        return false;

    if (!m_ready.isSet()) {
        m_writer.unlock();
        return false;
    }

    return true;
}
}
