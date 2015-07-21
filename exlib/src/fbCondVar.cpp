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
	l.unlock();

	suspend();

	l.lock();
}

void CondVar::notify_one()
{
	resume();
}

void CondVar::notify_all()
{
	resumeAll();
}

}
