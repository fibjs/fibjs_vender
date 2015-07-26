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
	m_lock.lock();
	if (!m_set)
		suspend(m_lock);
	else
		m_lock.unlock();
}

void Event::pulse()
{
	m_lock.lock();

	resumeAll();

	m_lock.unlock();
}

void Event::set()
{
	m_lock.lock();

	m_set = true;
	resumeAll();

	m_lock.unlock();
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
