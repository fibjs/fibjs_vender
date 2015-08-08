/*
 *  utils_x64.h
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

template<typename T>
inline T *CompareAndSwap(T *volatile *ptr, T *old_value, T *new_value)
{
    T *prev;
    __asm__ volatile(
        "lock; cmpxchgq %1,%2"
        : "=a" (prev)
        : "q" (new_value), "m" (*ptr), "0" (old_value)
        : "memory");
    return prev;
}

inline intptr_t CompareAndSwap(volatile intptr_t *ptr, intptr_t old_value, intptr_t new_value)
{
    intptr_t prev;
    __asm__ volatile(
        "lock; cmpxchgq %1,%2"
        : "=a" (prev)
        : "q" (new_value), "m" (*ptr), "0" (old_value)
        : "memory");
    return prev;
}

inline intptr_t atom_add(volatile intptr_t *dest, intptr_t incr)
{
    intptr_t ret;
    __asm__ volatile(
        "lock; xaddq %0,(%1)"
        : "=r"(ret)
        : "r"(dest), "0"(incr)
        : "memory");
    return ret + incr;
}

inline intptr_t atom_xchg(volatile intptr_t *ptr, intptr_t new_value)
{
    intptr_t prev;

    __asm__ volatile(
        "lock xchgq %2,(%1)"
        : "=r" (prev)
        : "r" (ptr), "0" (new_value)
        : "memory");

    return prev;
}

template<typename T>
inline T *atom_xchg(T *volatile *ptr, T *new_value)
{
    T *prev;

    __asm__ volatile(
        "lock xchgq %2,(%1)"
        : "=r" (prev)
        : "r" (ptr), "0" (new_value)
        : "memory");

    return prev;
}

inline intptr_t atom_inc(volatile intptr_t *dest)
{
    return atom_add(dest, 1);
}

inline intptr_t atom_dec(volatile intptr_t *dest)
{
    return atom_add(dest, -1);
}

inline void *CompareAndSwap(void *volatile *ptr, void *old_value, void *new_value)
{
    return CompareAndSwap((char *volatile *) ptr, (char *) old_value, (char *) new_value);
}

}
