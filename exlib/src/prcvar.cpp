/*
 *  prcvar.cpp
 *  Created on: Mar 19, 2016
 *
 *  Copyright (c) 2016 by Leo Hoo
 *  lion@9465.net
 */

#include "prcvar.h"
#include "fiber.h"

class _prcvar : public exlib::CondVar {
public:
    _prcvar(exlib::Locker* l)
        : m_l(l)
    {
    }

    void wait()
    {
        exlib::CondVar::wait(*m_l);
    }

private:
    exlib::Locker* m_l;
};

PRCondVar* PR_NewCondVar(PRLock* lock)
{
    return new _prcvar((exlib::Locker*)lock);
}

void PR_DestroyCondVar(PRCondVar* cvar)
{
    delete ((_prcvar*)cvar);
}

PRStatus PR_WaitCondVar(PRCondVar* cvar, PRIntervalTime timeout)
{
    ((_prcvar*)cvar)->wait();
    return PR_SUCCESS;
}

PRStatus PR_NotifyCondVar(PRCondVar* cvar)
{
    ((_prcvar*)cvar)->notify_one();
    return PR_SUCCESS;
}

PRStatus PR_NotifyAllCondVar(PRCondVar* cvar)
{
    ((_prcvar*)cvar)->notify_all();
    return PR_SUCCESS;
}
