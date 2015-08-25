/*
 *  fbCondVar.cpp
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#include "service.h"
#include <assert.h>

namespace exlib
{

void CondVar::wait(Locker &l)
{
	l.unlock();

	Task_base* current = Thread_base::current();
	assert(current != 0);

	m_lock.lock();
	m_blocks.putTail(current);
	m_lock.unlock();

	current->suspend();

	l.lock();
}

void CondVar::notify_one()
{
	Task_base* fb;

	m_lock.lock();
	fb = m_blocks.getHead();
	m_lock.unlock();

	if (fb != 0)
		fb->resume();
}

void CondVar::notify_all()
{
	List<Task_base> blocks;

	m_lock.lock();
	m_blocks.getList(blocks);
	m_lock.unlock();

	Task_base* fb;
	while ((fb = blocks.getHead()) != 0)
		fb->resume();
}

}
