/*
 *  fbCondVar.cpp
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#include "service.h"

namespace exlib
{

void CondVar::wait(Locker &l)
{
    Service *pService = Service::getFiberService();

    trace_assert(pService != 0);

    l.unlock();

    m_blocks.putTail(pService->m_running);
    pService->switchtonext();

    l.lock();
}

void CondVar::notify_one()
{
    if (!m_blocks.empty())
    {
        Service *pService = Service::getFiberService();

        trace_assert(pService != 0);

        pService->m_resume.putTail(m_blocks.getHead());
    }
}

void CondVar::notify_all()
{
    if (!m_blocks.empty())
    {
        Service *pService = Service::getFiberService();

        trace_assert(pService != 0);

        while (!m_blocks.empty())
            pService->m_resume.putTail(m_blocks.getHead());
    }
}

}
