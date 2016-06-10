/*
 *  utils_win.h
 *  Created on: Jul 17, 2014
 *
 *  Copyright (c) 2014 by Leo Hoo
 *  lion@9465.net
 */

#include <windows.h>

namespace exlib
{

#ifdef x64
inline void MemoryBarrier()
{
    ::__faststorefence();
}
#else
inline void MemoryBarrier()
{
    LONG Barrier;
    __asm
    {
        xchg Barrier, eax
    }
}
#endif

inline void yield()
{
    YieldProcessor();
}

}
