/*
 *  utils_arm.h
 *  Created on: Jul 10, 2014
 *
 *  Copyright (c) 2014 by Leo Hoo
 *  lion@9465.net
 */

namespace exlib
{

typedef void (*LinuxKernelMemoryBarrierFunc)(void);
inline void MemoryBarrier()
{
	__asm__ __volatile__ ("dmb ish" ::: "memory");
}

inline void yield()
{
	asm volatile("yield" ::: "memory");
}

}
