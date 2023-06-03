#include "src/flags/flags.h"

#if V8_HAS_PTHREAD_JIT_WRITE_PROTECT

#define _COMM_PAGE_START_ADDRESS (0x0000000FFFFFC000ULL)
#define _COMM_PAGE_APRR_SUPPORT (_COMM_PAGE_START_ADDRESS + 0x10C)
#define _COMM_PAGE_APPR_WRITE_ENABLE (_COMM_PAGE_START_ADDRESS + 0x110)
#define _COMM_PAGE_APRR_WRITE_DISABLE (_COMM_PAGE_START_ADDRESS + 0x118)

extern "C" void pthread_jit_write_protect_np(int enabled)
{
    uint8_t aprr_support = *(volatile uint8_t*)_COMM_PAGE_APRR_SUPPORT;
    if (aprr_support == 0 || aprr_support > 3) {
        return;
    } else if (aprr_support == 1) {
        __asm__ __volatile__(
            "mov x0, %0\n"
            "ldr x0, [x0]\n"
            "msr S3_4_c15_c2_7, x0\n"
            "isb sy\n" ::"r"(enabled ? _COMM_PAGE_APRR_WRITE_DISABLE
                                     : _COMM_PAGE_APPR_WRITE_ENABLE)
            : "memory", "x0");
    } else {
        __asm__ __volatile__(
            "mov x0, %0\n"
            "ldr x0, [x0]\n"
            "msr S3_6_c15_c1_5, x0\n"
            "isb sy\n" ::"r"(enabled ? _COMM_PAGE_APRR_WRITE_DISABLE
                                     : _COMM_PAGE_APPR_WRITE_ENABLE)
            : "memory", "x0");
    }
}

#endif
