#include "osconfig.h"

#ifndef _WIN32

#ifdef Darwin
asm(".section   __TEXT,__text");
#else
asm(".section   .text");
#endif

#ifdef arm

asm(".globl fb_switch, _fb_switch");
asm("fb_switch:");
asm("_fb_switch:");

asm("    str r0, [r0]");
asm("    str r1, [r0,#4]");
asm("    str r2, [r0,#8]");
asm("    str r3, [r0,#12]");
asm("    str r4, [r0,#16]");
asm("    str r5, [r0,#20]");
asm("    str r6, [r0,#24]");
asm("    str r7, [r0,#28]");
asm("    str r8, [r0,#32]");
asm("    str r9, [r0,#36]");
asm("    str r10, [r0,#40]");
asm("    str r11, [r0,#44]");
asm("    str r12, [r0,#48]");
asm("    str r13, [r0,#52]");
asm("    str r14, [r0,#56]");

asm("    mov r0, r1");

asm("    ldr r1, [r0,#4]");
asm("    ldr r2, [r0,#8]");
asm("    ldr r3, [r0,#12]");
asm("    ldr r4, [r0,#16]");
asm("    ldr r5, [r0,#20]");
asm("    ldr r6, [r0,#24]");
asm("    ldr r7, [r0,#28]");
asm("    ldr r8, [r0,#32]");
asm("    ldr r9, [r0,#36]");
asm("    ldr r10, [r0,#40]");
asm("    ldr r11, [r0,#44]");
asm("    ldr r12, [r0,#48]");
asm("    ldr r13, [r0,#52]");
asm("    ldr r14, [r0,#56]");
asm("    ldr r0, [r0]");
asm("    mov pc, lr");

#endif

#endif
