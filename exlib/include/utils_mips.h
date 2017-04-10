/*
 *  utils_mips.h
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
                         "ll %0, 0(%4)\n"
                         "bne %0, %2, 2f\n"
                         "move %1, %3\n"
                         "sc %1, 0(%4)\n"
                         "beqz %1, 1b\n"
                         "nop\n"
                         "2:\n"
                         ".set pop\n"
                         : "=&r"(prev), "=&r"(tmp)
                         : "r"(old_value), "r"(new_value), "r"(ptr)
                         : "memory");
    return prev;
}

inline intptr_t CompareAndSwap(volatile intptr_t* ptr, intptr_t old_value, intptr_t new_value)
{
    intptr_t prev, tmp;
    __asm__ __volatile__(".set push\n"
                         ".set noreorder\n"
                         "1:\n"
                         "ll %0, 0(%4)\n"
                         "bne %0, %2, 2f\n"
                         "move %1, %3\n"
                         "sc %1, 0(%4)\n"
                         "beqz %1, 1b\n"
                         "nop\n"
                         "2:\n"
                         ".set pop\n"
                         : "=&r"(prev), "=&r"(tmp)
                         : "r"(old_value), "r"(new_value), "r"(ptr)
                         : "memory");
    return prev;
}

inline intptr_t atom_add(volatile intptr_t* dest, intptr_t incr)
{
    intptr_t temp, temp2;

    __asm__ __volatile__(".set push\n"
                         ".set noreorder\n"
                         "1:\n"
                         "ll %0, 0(%3)\n"
                         "addu %1, %0, %2\n"
                         "sc %1, 0(%3)\n"
                         "beqz %1, 1b\n"
                         "addu %1, %0, %2\n"
                         ".set pop\n"
                         : "=&r"(temp), "=&r"(temp2)
                         : "Ir"(incr), "r"(dest)
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
