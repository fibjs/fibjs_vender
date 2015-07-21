/*
 *  fbEvent.cpp
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#include "service.h"

namespace exlib
{
void Event::wait()
{
    if (!m_set)
        suspend();
}

void Event::pulse()
{
    resumeAll();
}

void Event::set()
{
    m_set = true;
    pulse();
}

void Event::reset()
{
    m_set = false;
}

bool Event::isSet()
{
    return m_set;
}

}
