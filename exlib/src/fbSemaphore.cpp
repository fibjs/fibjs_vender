/*
 *  fbSemaphore.cpp
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#include "service.h"

namespace exlib
{

void Semaphore::wait()
{
    if (m_count == 0)
        suspend();
    else
        m_count--;
}

void Semaphore::post()
{
    if (resume() == 0)
        m_count++;
}

bool Semaphore::trywait()
{
    if (m_count == 0)
        return false;

    m_count--;
    return true;
}

}
