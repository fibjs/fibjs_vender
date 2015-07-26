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

	m_lock.lock();
	suspend(m_lock);

	l.lock();
}

void CondVar::notify_one()
{
	m_lock.lock();

	resume();

	m_lock.unlock();
}

void CondVar::notify_all()
{
	m_lock.lock();

	resumeAll();

	m_lock.unlock();
}

}
