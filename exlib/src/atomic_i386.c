#include "osconfig.h"

#ifdef Linux

#include <stdlib.h>
#include <stdint.h>

#ifdef i386
int64_t __atomic_load_8(const volatile int64_t* ptr, int memorder)
{
    (void)memorder;
    return *ptr;
}

int __atomic_compare_exchange_8(volatile int64_t* ptr, volatile int64_t* old_val, int64_t newval, int smodel, int fmodel)
{
    unsigned long long prev;
    asm volatile("lock; cmpxchg8b %3"
                 : "=A"(prev)
                 : "c"((int32_t)(newval >> 32)), "b"((int32_t)newval), "m"(*ptr), "0"(*old_val)
                 : "memory");
    return prev == *old_val;
}
#endif

#endif