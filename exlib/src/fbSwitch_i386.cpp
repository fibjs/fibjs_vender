#include "osconfig.h"

#ifndef _WIN32

#ifdef Darwin
asm(".section   __TEXT,__text");
#else
asm(".section   .text");
#endif

#ifdef i386

asm(".globl fb_switch, _fb_switch");
asm("fb_switch:");
asm("_fb_switch:");

asm("    movl    0x4(%esp), %eax");
asm("    movl    %ebp, (%eax)");
asm("    movl    %ebx, 0x04(%eax)");
asm("    movl    %ecx, 0x08(%eax)");
asm("    movl    %edx, 0x0c(%eax)");
asm("    movl    %esi, 0x10(%eax)");
asm("    movl    %edi, 0x14(%eax)");

asm("    movl    %esp, 0x18(%eax)");

asm("    movl    0x8(%esp), %eax");
asm("    movl    (%eax), %ebp");
asm("    movl    0x04(%eax), %ebx");
asm("    movl    0x08(%eax), %ecx");
asm("    movl    0x0c(%eax), %edx");
asm("    movl    0x10(%eax), %esi");
asm("    movl    0x14(%eax), %edi");
asm("    movl    0x18(%eax), %esp");

asm("    ret");

#endif

#endif
