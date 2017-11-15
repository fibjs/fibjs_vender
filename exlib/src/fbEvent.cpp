/*
 *  fbEvent.cpp
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#include "service.h"

namespace exlib {

bool Event::wait(Task_base* current)
{
    m_lock.lock();
    if (!m_set) {
        if (!current)
            current = Thread_base::current();
        assert(current != 0);

        m_blocks.putTail(current);
        current->suspend(m_lock);

        return false;
    }

    m_lock.unlock();
    return true;
}

void Event::pulse()
{
    List<Task_base> blocks;

    m_lock.lock();
    m_blocks.getList(blocks);
    m_lock.unlock();

    Task_base* fb;
    while ((fb = blocks.getHead()) != 0)
        fb->resume();
}

void Event::set()
{
    List<Task_base> blocks;

    m_lock.lock();
    m_set = true;
    m_blocks.getList(blocks);
    m_lock.unlock();

    Task_base* fb;
    while ((fb = blocks.getHead()) != 0)
        fb->resume();
}

void Event::reset()
{
    m_lock.lock();
    m_set = false;
    m_lock.unlock();
}

bool Event::isSet()
{
    m_lock.lock();
    bool r = m_set;
    m_lock.unlock();

    return r;
}
}
