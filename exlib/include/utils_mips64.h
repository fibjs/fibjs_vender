/*
 *  utils_mips64.h
 *  Created on: Aug 12, 2016
 *
 *  Copyright (c) 2016 by Leo Hoo
 *  lion@9465.net
 */

namespace exlib {

#pragma pack(1)

class registers {
public:
    intptr_t sp;
    intptr_t fp;
    intptr_t ra;

    intptr_t a0;
    intptr_t a1;
    intptr_t a2;
    intptr_t a3;

    intptr_t s0;
    intptr_t s1;
    intptr_t s2;
    intptr_t s3;
    intptr_t s4;
    intptr_t s5;
    intptr_t s6;
    intptr_t s7;
    intptr_t s8;

    intptr_t f20;
    intptr_t f21;
    intptr_t f22;
    intptr_t f23;
    intptr_t f24;
    intptr_t f25;
    intptr_t f26;
    intptr_t f27;
    intptr_t f28;
    intptr_t f29;
    intptr_t f30;
    intptr_t f31;
};

#pragma pack()

typedef void (*LinuxKernelMemoryBarrierFunc)(void);
inline void MemoryBarrier()
{
    __asm__ __volatile__("sync"
                         :
                         :
                         : "memory");
}

inline void yield()
{
    __asm__ __volatile__("sync"
                         :
                         :
                         : "memory");
}

template <typename T>
inline T* CompareAndSwap(T* volatile* ptr, T* old_value, T* new_value)
{
    T *prev, *tmp;
    __asm__ __volatile__(".set push\n"
                         ".set noreorder\n"
                         "1:\n"
                         "lld %0, %5\n"
                         "bne %0, %3, 2f\n"
                         "move %2, %4\n"
                         "scd %2, %1\n"
                         "beqz %2, 1b\n"
                         "nop\n"
                         "2:\n"
                         ".set pop\n"
                         : "=&r"(prev), "=m"(*ptr), "=&r"(tmp)
                         : "r"(old_value), "r"(new_value), "m"(*ptr)
                         : "memory");
    return prev;
}

inline intptr_t CompareAndSwap(volatile intptr_t* ptr, intptr_t old_value, intptr_t new_value)
{
    intptr_t temp, old;
    __asm__ __volatile__(".set push\n"
                         ".set noreorder\n"
                         "1:\n"
                         "lld %1, %2\n"
                         "move %0, %3\n"
                         "scd %0, %2\n"
                         "beqz %0, 1b\n"
                         "nop\n"
                         ".set pop\n"
                         : "=&r"(temp), "=&r"(old), "=m"(*ptr)
                         : "r"(new_value), "m"(*ptr)
                         : "memory");

    return old;
}

inline intptr_t atom_add(volatile intptr_t* dest, intptr_t incr)
{
    intptr_t temp, temp2;

    __asm__ __volatile__(".set push\n"
                         ".set noreorder\n"
                         "1:\n"
                         "lld %0, %2\n"
                         "daddu %1, %0, %3\n"
                         "scd %1, %2\n"
                         "beqz %1, 1b\n"
                         "daddu %1, %0, %3\n"
                         ".set pop\n"
                         : "=&r"(temp), "=&r"(temp2), "=ZC"(*dest)
                         : "Ir"(incr), "m"(*dest)
                         : "memory");

    return temp2;
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
    intptr_t temp, old;
    __asm__ __volatile__(".set push\n"
                         ".set noreorder\n"
                         ".set at\n"
                         "1:\n"
                         "ll %1, 0(%3)\n"
                         "move %0, %2\n"
                         "sc %0, 0(%3)\n"
                         "beqz %0, 1b\n"
                         "nop\n"
                         ".set pop\n"
                         : "=&r"(temp), "=&r"(old)
                         : "r"(new_value), "r"(ptr)
                         : "memory");

    return old;
}

inline int32_t CompareAndSwap(volatile int32_t* ptr, int32_t old_value, int32_t new_value)
{
    int32_t prev, tmp;
    __asm__ __volatile__(".set push\n"
                         ".set noreorder\n"
                         "1:\n"
                         "ll %0, %5\n"
                         "bne %0, %3, 2f\n"
                         "move %2, %4\n"
                         "sc %2, %1\n"
                         "beqz %2, 1b\n"
                         "nop\n"
                         "2:\n"
                         ".set pop\n"
                         : "=&r"(prev), "=m"(*ptr), "=&r"(tmp)
                         : "r"(old_value), "r"(new_value), "m"(*ptr)
                         : "memory");
    return prev;
}

inline int32_t atom_add(volatile int32_t* dest, int32_t incr)
{
    int32_t temp, temp2;

    __asm__ __volatile__(".set push\n"
                         ".set noreorder\n"
                         "1:\n"
                         "ll %0, %2\n"
                         "addu %1, %0, %3\n"
                         "sc %1, %2\n"
                         "beqz %1, 1b\n"
                         "addu %1, %0, %3\n"
                         ".set pop\n"
                         : "=&r"(temp), "=&r"(temp2), "=ZC"(*dest)
                         : "Ir"(incr), "m"(*dest)
                         : "memory");

    return temp2;
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
    int32_t temp, old;
    __asm__ __volatile__(".set push\n"
                         ".set noreorder\n"
                         "1:\n"
                         "ll %1, %2\n"
                         "move %0, %3\n"
                         "sc %0, %2\n"
                         "beqz %0, 1b\n"
                         "nop\n"
                         ".set pop\n"
                         : "=&r"(temp), "=&r"(old), "=m"(*ptr)
                         : "r"(new_value), "m"(*ptr)
                         : "memory");

    return old;
}

template <typename T>
inline T* atom_xchg(T* volatile* ptr, T* new_value)
{
    T *temp, *old;
    __asm__ __volatile__(".set push\n"
                         ".set noreorder\n"
                         ".set at\n"
                         "1:\n"
                         "ll %1, 0(%3)\n"
                         "move %0, %2\n"
                         "sc %0, 0(%3)\n"
                         "beqz %0, 1b\n"
                         "nop\n"
                         ".set pop\n"
                         : "=&r"(temp), "=&r"(old)
                         : "r"(new_value), "r"(ptr)
                         : "memory");

    return old;
}

inline void* CompareAndSwap(void* volatile* ptr, void* old_value, void* new_value)
{
    return CompareAndSwap((char* volatile*)ptr, (char*)old_value, (char*)new_value);
}
}
