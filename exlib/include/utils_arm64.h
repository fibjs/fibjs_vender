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

template<typename T>
inline T *CompareAndSwap(T *volatile *ptr, T *old_value, T *new_value)
{
    T *oldval, *temp;

    __asm__ __volatile__ (
        "0:\n"
        "ldxr %[oldval], %[ptr]\n"
        "cmp %[oldval], %[old_value]\n"
        "bne 1f\n"
        "stxr %w[temp], %[new_value], %[ptr]\n"
        "cbnz %w[temp], 0b\n"
        "1:\n"
        : [oldval]"=&r" (oldval),
        [temp]"=&r" (temp),
        [ptr]"+Q" (*ptr)
        : [old_value]"IJr" (old_value),
        [new_value]"r" (new_value)
        : "cc", "memory"
    );

    return oldval;
}

inline intptr_t CompareAndSwap(volatile intptr_t *ptr, intptr_t old_value, intptr_t new_value)
{
    intptr_t oldval, temp;

    __asm__ __volatile__ (
        "0:\n"
        "ldxr %[oldval], %[ptr]\n"
        "cmp %[oldval], %[old_value]\n"
        "bne 1f\n"
        "stxr %w[temp], %[new_value], %[ptr]\n"
        "cbnz %w[temp], 0b\n"
        "1:\n"
        : [oldval]"=&r" (oldval),
        [temp]"=&r" (temp),
        [ptr]"+Q" (*ptr)
        : [old_value]"IJr" (old_value),
        [new_value]"r" (new_value)
        : "cc", "memory"
    );

    return oldval;
}

inline intptr_t atom_add(volatile intptr_t *dest, intptr_t incr)
{
    intptr_t result;
    intptr_t temp;

    __asm__ __volatile__ (
        "0:\n"
        "ldxr %[result], %[dest]\n"
        "add %[result], %[result], %[incr]\n"
        "stxr %w[temp], %[result], %[dest]\n"
        "cbnz %w[temp], 0b\n"
        : [result]"=&r" (result),
        [temp]"=&r" (temp),
        [dest]"+Q" (*dest)
        : [incr]"IJr" (incr)
        : "memory"
    );

    return result;
}

inline intptr_t atom_inc(volatile intptr_t *dest)
{
    return atom_add(dest, 1);
}

inline intptr_t atom_dec(volatile intptr_t *dest)
{
    return atom_add(dest, -1);
}

inline intptr_t atom_xchg(volatile intptr_t *ptr, intptr_t new_value)
{
    intptr_t result;
    intptr_t temp;

    __asm__ __volatile__ (
        "0:\n"
        "ldxr %[result], %[ptr]\n"
        "stxr %w[temp], %[new_value], %[ptr]\n"
        "cbnz %w[temp], 0b\n"
        : [result]"=&r" (result),
        [temp]"=&r" (temp),
        [ptr]"+Q" (*ptr)
        : [new_value]"r" (new_value)
        : "memory"
    );

    return result;
}

inline int32_t CompareAndSwap(volatile int32_t *ptr, int32_t old_value, int32_t new_value)
{
    int32_t oldval, temp;

    __asm__ __volatile__ (
        "0:\n"
        "ldxr %w[oldval], %[ptr]\n"
        "cmp %w[oldval], %w[old_value]\n"
        "bne 1f\n"
        "stxr %w[temp], %w[new_value], %[ptr]\n"
        "cbnz %w[temp], 0b\n"
        "1:\n"
        : [oldval]"=&r" (oldval),
        [temp]"=&r" (temp),
        [ptr]"+Q" (*ptr)
        : [old_value]"IJr" (old_value),
        [new_value]"r" (new_value)
        : "cc", "memory"
    );

    return oldval;
}

inline int32_t atom_add(volatile int32_t *dest, int32_t incr)
{
    int32_t result;
    int32_t temp;

    __asm__ __volatile__ (
        "0:\n"
        "ldxr %w[result], %[dest]\n"
        "add %w[result], %w[result], %w[incr]\n"
        "stxr %w[temp], %w[result], %[dest]\n"
        "cbnz %w[temp], 0b\n"
        : [result]"=&r" (result),
        [temp]"=&r" (temp),
        [dest]"+Q" (*dest)
        : [incr]"IJr" (incr)
        : "memory"
    );

    return result;
}

inline int32_t atom_inc(volatile int32_t *dest)
{
    return atom_add(dest, 1);
}

inline int32_t atom_dec(volatile int32_t *dest)
{
    return atom_add(dest, -1);
}

inline int32_t atom_xchg(volatile int32_t *ptr, int32_t new_value)
{
    int32_t result;
    int32_t temp;

    __asm__ __volatile__ (
        "0:\n"
        "ldxr %w[result], %[ptr]\n"
        "stxr %w[temp], %w[new_value], %[ptr]\n"
        "cbnz %w[temp], 0b\n"
        : [result]"=&r" (result),
        [temp]"=&r" (temp),
        [ptr]"+Q" (*ptr)
        : [new_value]"r" (new_value)
        : "memory"
    );

    return result;
}

template<typename T>
inline T *atom_xchg(T *volatile *ptr, T *new_value)
{
    T *result;
    T *temp;

    __asm__ __volatile__ (
        "0:\n"
        "ldxr %[result], %[ptr]\n"
        "stxr %w[temp], %[new_value], %[ptr]\n"
        "cbnz %w[temp], 0b\n"
        : [result]"=&r" (result),
        [temp]"=&r" (temp),
        [ptr]"+Q" (*ptr)
        : [new_value]"r" (new_value)
        : "memory"
    );

    return result;
}

inline void *CompareAndSwap(void *volatile *ptr, void *old_value, void *new_value)
{
    return CompareAndSwap((char *volatile *) ptr, (char *) old_value, (char *) new_value);
}

}
