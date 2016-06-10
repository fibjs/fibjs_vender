/*
 *  utils.h
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#ifndef _ex_utils_h__
#define _ex_utils_h__

#include <stdint.h>
#include "osconfig.h"
#include <atomic>

#ifdef WIN32
#include "utils_win.h"
#elif defined(x64)
#include "utils_x64.h"
#elif defined(I386)
#include "utils_x86.h"
#elif defined(arm)
#include "utils_arm.h"
#elif defined(arm64)
#include "utils_arm64.h"
#endif

namespace exlib
{

class spinlock
{
public:
	spinlock()
	{
		m_atom.clear(std::memory_order_release);
	}

public:
	void lock()
	{
		while (m_atom.test_and_set(std::memory_order_acquire))
			yield();
	}

	void unlock()
	{
		m_atom.clear(std::memory_order_release);
	}

private:
	std::atomic_flag m_atom;
};

}

#ifndef ARRAYSIZE
#define ARRAYSIZE(a) \
    ((sizeof(a) / sizeof(*(a))) / static_cast<size_t>(!(sizeof(a) % sizeof(*(a)))))
#endif

#endif
