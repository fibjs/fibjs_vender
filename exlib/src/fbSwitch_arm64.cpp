#include "osconfig.h"

#ifndef _WIN32

#ifdef Darwin
asm(".section   __TEXT,__text");
#else
asm(".section   .text");
#endif

#ifdef arm64

asm(".globl fb_switch, _fb_switch");
asm("fb_switch:");
asm("_fb_switch:");

asm("    stp x0, x1, [x0]");
asm("    stp x2, x3, [x0,#16]");
asm("    stp x4, x5, [x0,#32]");
asm("    stp x6, x7, [x0,#48]");
asm("    stp x8, x9, [x0,#64]");
asm("    stp x10, x11, [x0,#80]");
asm("    stp x12, x13, [x0,#96]");
asm("    stp x14, x15, [x0,#112]");
asm("    stp x16, x17, [x0,#128]");
asm("    stp x18, x19, [x0,#144]");
asm("    stp x20, x21, [x0,#160]");
asm("    stp x22, x23, [x0,#176]");
asm("    stp x24, x25, [x0,#192]");
asm("    stp x26, x27, [x0,#208]");
asm("    stp x28, x29, [x0,#224]");

asm("    mov x8, sp");
asm("    stp x30, x8, [x0,#240]");

asm("    stp d0, d1, [x0,#256]");
asm("    stp d2, d3, [x0,#272]");
asm("    stp d4, d5, [x0,#288]");
asm("    stp d6, d7, [x0,#304]");
asm("    stp d8, d9, [x0,#320]");
asm("    stp d10, d11, [x0,#336]");
asm("    stp d12, d13, [x0,#352]");
asm("    stp d14, d15, [x0,#368]");
asm("    stp d16, d17, [x0,#384]");
asm("    stp d18, d19, [x0,#400]");
asm("    stp d20, d21, [x0,#416]");
asm("    stp d22, d23, [x0,#432]");
asm("    stp d24, d25, [x0,#448]");
asm("    stp d26, d27, [x0,#464]");
asm("    stp d28, d29, [x0,#480]");
asm("    stp d30, d31, [x0,#496]");

asm("    mov x0, x1");

asm("    ldp x2, x3, [x0,#16]");
asm("    ldp x4, x5, [x0,#32]");
asm("    ldp x6, x7, [x0,#48]");
asm("    ldp x8, x9, [x0,#64]");
asm("    ldp x10, x11, [x0,#80]");
asm("    ldp x12, x13, [x0,#96]");
asm("    ldp x14, x15, [x0,#112]");
asm("    ldp x16, x17, [x0,#128]");
asm("    ldp x18, x19, [x0,#144]");
asm("    ldp x20, x21, [x0,#160]");
asm("    ldp x22, x23, [x0,#176]");
asm("    ldp x24, x25, [x0,#192]");
asm("    ldp x26, x27, [x0,#208]");
asm("    ldp x28, x29, [x0,#224]");

asm("    ldp x30, x1, [x0,#240]");
asm("    mov sp, x1");

asm("    ldp d0, d1, [x0,#256]");
asm("    ldp d2, d3, [x0,#272]");
asm("    ldp d4, d5, [x0,#288]");
asm("    ldp d6, d7, [x0,#304]");
asm("    ldp d8, d9, [x0,#320]");
asm("    ldp d10, d11, [x0,#336]");
asm("    ldp d12, d13, [x0,#352]");
asm("    ldp d14, d15, [x0,#368]");
asm("    ldp d16, d17, [x0,#384]");
asm("    ldp d18, d19, [x0,#400]");
asm("    ldp d20, d21, [x0,#416]");
asm("    ldp d22, d23, [x0,#432]");
asm("    ldp d24, d25, [x0,#448]");
asm("    ldp d26, d27, [x0,#464]");
asm("    ldp d28, d29, [x0,#480]");
asm("    ldp d30, d31, [x0,#496]");

asm("    ldp x0, x1, [x0]");

asm("    ret");

#endif

#endif
