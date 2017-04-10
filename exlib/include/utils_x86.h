/*
 *  utils_x86.h
 *  Created on: Jul 17, 2014
 *
 *  Copyright (c) 2014 by Leo Hoo
 *  lion@9465.net
 */

#ifdef Darwin
#include <libkern/OSAtomic.h>
#endif

namespace exlib {

#pragma pack(1)

class registers {
public:
    union {
        intptr_t Ebp;
        intptr_t fp;
    };
    intptr_t Ebx;
    intptr_t Ecx;
    intptr_t Edx;
    intptr_t Esi;
    intptr_t Edi;
    union {
        intptr_t Esp;
        intptr_t sp;
    };
};

#pragma pack()

#if defined(Darwin)
inline void MemoryBarrier()
{
    OSMemoryBarrier();
}
#else
inline void MemoryBarrier()
{
    __asm__ volatile(""
                     :
                     :
                     : "memory");
}
#endif

inline void yield()
{
    __asm__ volatile("pause");
}

template <typename T>
inline T* CompareAndSwap(T* volatile* ptr, T* old_value, T* new_value)
{
    T* prev;
    __asm__ volatile(
        "lock; cmpxchgl %1,%2"
        : "=a"(prev)
        : "q"(new_value), "m"(*ptr), "0"(old_value)
        : "memory");
    return prev;
}

inline intptr_t CompareAndSwap(volatile intptr_t* ptr, intptr_t old_value, intptr_t new_value)
{
    intptr_t prev;
    __asm__ volatile(
        "lock; cmpxchgl %1,%2"
        : "=a"(prev)
        : "q"(new_value), "m"(*ptr), "0"(old_value)
        : "memory");
    return prev;
}

inline intptr_t atom_add(volatile intptr_t* dest, intptr_t incr)
{
    intptr_t ret;
    __asm__ volatile(
        "lock; xaddl %0,(%1)"
        : "=r"(ret)
        : "r"(dest), "0"(incr)
        : "memory");
    return ret + incr;
}

inline intptr_t atom_xchg(volatile intptr_t* ptr, intptr_t new_value)
{
    intptr_t prev;

    __asm__ volatile(
        "lock xchgl %2,(%1)"
        : "=r"(prev)
        : "r"(ptr), "0"(new_value)
        : "memory");

    return prev;
}

inline intptr_t atom_inc(volatile intptr_t* dest)
{
    return atom_add(dest, 1);
}

inline intptr_t atom_dec(volatile intptr_t* dest)
{
    return atom_add(dest, -1);
}

template <typename T>
inline T* atom_xchg(T* volatile* ptr, T* new_value)
{
    T* prev;

    __asm__ volatile(
        "lock xchgl %2,(%1)"
        : "=r"(prev)
        : "r"(ptr), "0"(new_value)
        : "memory");

    return prev;
}

inline void* CompareAndSwap(void* volatile* ptr, void* old_value, void* new_value)
{
    return CompareAndSwap((char* volatile*)ptr, (char*)old_value, (char*)new_value);
}
}
