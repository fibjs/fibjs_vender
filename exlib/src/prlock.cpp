/*
 *  prlock.cpp
 *  Created on: Mar 19, 2016
 *
 *  Copyright (c) 2016 by Leo Hoo
 *  lion@9465.net
 */

#include "prlock.h"
#include "fiber.h"

PRLock* PR_NewLock()
{
    return new exlib::Locker();
}

void PR_DestroyLock(PRLock* lock)
{
    delete ((exlib::Locker*)lock);
}

void PR_Lock(PRLock* lock)
{
    ((exlib::Locker*)lock)->lock();
}

PRStatus PR_Unlock(PRLock* lock)
{
    ((exlib::Locker*)lock)->unlock();
    return PR_SUCCESS;
}
