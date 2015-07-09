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

template<typename T>
inline T *CompareAndSwap(T *volatile *ptr, T *old_value, T *new_value)
{
    T *oldval, *res;

    do
    {
        __asm__ volatile(
            "ldrex %0, [%3]\n"
            "mov %1, #0\n"
            "cmp %0, %4\n"
#ifdef __thumb2__
            "it eq\n"
#endif
            "strexeq %1, %5, [%3]\n"
            : "=&r"(oldval), "=&r"(res), "+m"(*ptr)
            : "r"(ptr), "r"(old_value), "r"(new_value)
            : "cc", "memory");
    }
    while (res != 0);

    return oldval;
}

inline atomic_t CompareAndSwap(volatile atomic_t *ptr, atomic_t old_value, atomic_t new_value)
{
    atomic_t oldval, res;

    do
    {
        __asm__ volatile(
            "ldrex %0, [%3]\n"
            "mov %1, #0\n"
            "cmp %0, %4\n"
#ifdef __thumb2__
            "it eq\n"
#endif
            "strexeq %1, %5, [%3]\n"
            : "=&r"(oldval), "=&r"(res), "+m"(*ptr)
            : "r"(ptr), "r"(old_value), "r"(new_value)
            : "cc", "memory");
    }
    while (res != 0);

    return oldval;
}

inline atomic_t atom_add(volatile atomic_t *dest, atomic_t incr)
{
    atomic_t value;
    atomic_t res;

    do
    {
        __asm__ volatile(
            "ldrex %0, [%3]\n"
            "add %0, %0, %4\n"
            "strex %1, %0, [%3]\n"
            : "=&r"(value), "=&r"(res), "+m"(*dest)
            : "r"(dest), "r"(incr)
            : "cc", "memory");
    }
    while (res);
    return value;
}

inline atomic_t atom_inc(volatile atomic_t *dest)
{
    return atom_add(dest, 1);
}

inline atomic_t atom_dec(volatile atomic_t *dest)
{
    return atom_add(dest, -1);
}

inline atomic_t atom_xchg(volatile atomic_t *ptr, atomic_t new_value)
{
    atomic_t old_value;
    atomic_t res;

    do
    {
        __asm__ volatile(
            "ldrex %0, [%3]\n"
            "strex %1, %4, [%3]\n"
            : "=&r"(old_value), "=&r"(res), "+m"(*ptr)
            : "r"(ptr), "r"(new_value)
            : "cc", "memory");
    }
    while (res != 0);
    return old_value;
}

template<typename T>
inline T *atom_xchg(T *volatile *ptr, T *new_value)
{
    T *old_value;
    T *res;

    do
    {
        __asm__ volatile(
            "ldrex %0, [%3]\n"
            "strex %1, %4, [%3]\n"
            : "=&r"(old_value), "=&r"(res), "+m"(*ptr)
            : "r"(ptr), "r"(new_value)
            : "cc", "memory");
    }
    while (res != 0);
    return old_value;
}

inline void *CompareAndSwap(void *volatile *ptr, void *old_value, void *new_value)
{
    return CompareAndSwap((char *volatile *) ptr, (char *) old_value, (char *) new_value);
}

}
