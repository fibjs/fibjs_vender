/*
 *  utils_arm.h
 *  Created on: Jul 10, 2014
 *
 *  Copyright (c) 2014 by Leo Hoo
 *  lion@9465.net
 */

namespace exlib {

#pragma pack(1)

class registers {
public:
    intptr_t x0;
    intptr_t x1;
    intptr_t x2;
    intptr_t x3;
    intptr_t x4;
    intptr_t x5;
    intptr_t x6;
    intptr_t x7;
    intptr_t x8;
    intptr_t x9;
    intptr_t x10;
    intptr_t x11;
    intptr_t x12;
    intptr_t x13;
    intptr_t x14;
    intptr_t x15;
    intptr_t x16;
    intptr_t x17;
    intptr_t x18;
    intptr_t x19;
    intptr_t x20;
    intptr_t x21;
    intptr_t x22;
    intptr_t x23;
    intptr_t x24;
    intptr_t x25;
    intptr_t x26;
    intptr_t x27;
    intptr_t x28;
    union {
        intptr_t x29;
        intptr_t fp;
    };
    union {
        intptr_t x30;
        intptr_t lr;
    };
    intptr_t sp;
    intptr_t d0;
    intptr_t d1;
    intptr_t d2;
    intptr_t d3;
    intptr_t d4;
    intptr_t d5;
    intptr_t d6;
    intptr_t d7;
    intptr_t d8;
    intptr_t d9;
    intptr_t d10;
    intptr_t d11;
    intptr_t d12;
    intptr_t d13;
    intptr_t d14;
    intptr_t d15;
    intptr_t d16;
    intptr_t d17;
    intptr_t d18;
    intptr_t d19;
    intptr_t d20;
    intptr_t d21;
    intptr_t d22;
    intptr_t d23;
    intptr_t d24;
    intptr_t d25;
    intptr_t d26;
    intptr_t d27;
    intptr_t d28;
    intptr_t d29;
    intptr_t d30;
    intptr_t d31;
};

#pragma pack()

typedef void (*LinuxKernelMemoryBarrierFunc)(void);
inline void MemoryBarrier()
{
    __asm__ __volatile__("dmb ish" ::
                             : "memory");
}

inline void yield()
{
    asm volatile("yield" ::
                     : "memory");
}

template <typename T>
inline T* CompareAndSwap(T* volatile* ptr, T* old_value, T* new_value)
{
    T *oldval, *temp;

    __asm__ __volatile__(
        "0:\n"
        "ldxr %[oldval], %[ptr]\n"
        "cmp %[oldval], %[old_value]\n"
        "bne 1f\n"
        "stxr %w[temp], %[new_value], %[ptr]\n"
        "cbnz %w[temp], 0b\n"
        "1:\n"
        : [oldval] "=&r"(oldval),
        [temp] "=&r"(temp),
        [ptr] "+Q"(*ptr)
        : [old_value] "IJr"(old_value),
        [new_value] "r"(new_value)
        : "cc", "memory");

    return oldval;
}

inline intptr_t CompareAndSwap(volatile intptr_t* ptr, intptr_t old_value, intptr_t new_value)
{
    intptr_t oldval, temp;

    __asm__ __volatile__(
        "0:\n"
        "ldxr %[oldval], %[ptr]\n"
        "cmp %[oldval], %[old_value]\n"
        "bne 1f\n"
        "stxr %w[temp], %[new_value], %[ptr]\n"
        "cbnz %w[temp], 0b\n"
        "1:\n"
        : [oldval] "=&r"(oldval),
        [temp] "=&r"(temp),
        [ptr] "+Q"(*ptr)
        : [old_value] "IJr"(old_value),
        [new_value] "r"(new_value)
        : "cc", "memory");

    return oldval;
}

inline intptr_t atom_add(volatile intptr_t* dest, intptr_t incr)
{
    intptr_t result;
    intptr_t temp;

    __asm__ __volatile__(
        "0:\n"
        "ldxr %[result], %[dest]\n"
        "add %[result], %[result], %[incr]\n"
        "stxr %w[temp], %[result], %[dest]\n"
        "cbnz %w[temp], 0b\n"
        : [result] "=&r"(result),
        [temp] "=&r"(temp),
        [dest] "+Q"(*dest)
        : [incr] "IJr"(incr)
        : "memory");

    return result;
}

inline intptr_t atom_inc(volatile intptr_t* dest)
{
    return atom_add(dest, 1);
}

inline intptr_t atom_dec(volatile intptr_t* dest)
{
    return atom_add(dest, -1);
}

inline intptr_t atom_xchg(volatile intptr_t* ptr, intptr_t new_value)
{
    intptr_t result;
    intptr_t temp;

    __asm__ __volatile__(
        "0:\n"
        "ldxr %[result], %[ptr]\n"
        "stxr %w[temp], %[new_value], %[ptr]\n"
        "cbnz %w[temp], 0b\n"
        : [result] "=&r"(result),
        [temp] "=&r"(temp),
        [ptr] "+Q"(*ptr)
        : [new_value] "r"(new_value)
        : "memory");

    return result;
}

inline int32_t CompareAndSwap(volatile int32_t* ptr, int32_t old_value, int32_t new_value)
{
    int32_t oldval, temp;

    __asm__ __volatile__(
        "0:\n"
        "ldxr %w[oldval], %[ptr]\n"
        "cmp %w[oldval], %w[old_value]\n"
        "bne 1f\n"
        "stxr %w[temp], %w[new_value], %[ptr]\n"
        "cbnz %w[temp], 0b\n"
        "1:\n"
        : [oldval] "=&r"(oldval),
        [temp] "=&r"(temp),
        [ptr] "+Q"(*ptr)
        : [old_value] "IJr"(old_value),
        [new_value] "r"(new_value)
        : "cc", "memory");

    return oldval;
}

inline int32_t atom_add(volatile int32_t* dest, int32_t incr)
{
    int32_t result;
    int32_t temp;

    __asm__ __volatile__(
        "0:\n"
        "ldxr %w[result], %[dest]\n"
        "add %w[result], %w[result], %w[incr]\n"
        "stxr %w[temp], %w[result], %[dest]\n"
        "cbnz %w[temp], 0b\n"
        : [result] "=&r"(result),
        [temp] "=&r"(temp),
        [dest] "+Q"(*dest)
        : [incr] "IJr"(incr)
        : "memory");

    return result;
}

inline int32_t atom_inc(volatile int32_t* dest)
{
    return atom_add(dest, 1);
}

inline int32_t atom_dec(volatile int32_t* dest)
{
    return atom_add(dest, -1);
}

inline int32_t atom_xchg(volatile int32_t* ptr, int32_t new_value)
{
    int32_t result;
    int32_t temp;

    __asm__ __volatile__(
        "0:\n"
        "ldxr %w[result], %[ptr]\n"
        "stxr %w[temp], %w[new_value], %[ptr]\n"
        "cbnz %w[temp], 0b\n"
        : [result] "=&r"(result),
        [temp] "=&r"(temp),
        [ptr] "+Q"(*ptr)
        : [new_value] "r"(new_value)
        : "memory");

    return result;
}

template <typename T>
inline T* atom_xchg(T* volatile* ptr, T* new_value)
{
    T* result;
    T* temp;

    __asm__ __volatile__(
        "0:\n"
        "ldxr %[result], %[ptr]\n"
        "stxr %w[temp], %[new_value], %[ptr]\n"
        "cbnz %w[temp], 0b\n"
        : [result] "=&r"(result),
        [temp] "=&r"(temp),
        [ptr] "+Q"(*ptr)
        : [new_value] "r"(new_value)
        : "memory");

    return result;
}

inline void* CompareAndSwap(void* volatile* ptr, void* old_value, void* new_value)
{
    return CompareAndSwap((char* volatile*)ptr, (char*)old_value, (char*)new_value);
}
}
