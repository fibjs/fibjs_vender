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
    (*(LinuxKernelMemoryBarrierFunc)0xffff0fa0)();
}

inline void yield()
{
    asm volatile("yield" ::: "memory");
}

}
