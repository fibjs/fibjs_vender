/*
 *  utils_x86.h
 *  Created on: Jul 17, 2014
 *
 *  Copyright (c) 2014 by Leo Hoo
 *  lion@9465.net
 */

#ifdef MacOS
#include <libkern/OSAtomic.h>
#endif

namespace exlib
{

#if defined(MacOS)
inline void MemoryBarrier()
{
    OSMemoryBarrier();
}
#else
inline void MemoryBarrier()
{
    __asm__ volatile("" : : : "memory");
}
#endif

inline void yield()
{
    __asm__ volatile("pause");
}

}
