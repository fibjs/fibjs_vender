#include "osconfig.h"

#ifndef _WIN32

#ifdef Darwin
asm(".section   __TEXT,__text");
#else
asm(".section   .text");
#endif

#ifdef amd64

asm(".globl fb_switch, _fb_switch");
asm("fb_switch:");
asm("_fb_switch:");

asm("    movq    %rbp,(%rdi)");

asm("    movq    %rbx,0x08(%rdi)");
asm("    movq    %rcx,0x10(%rdi)");
asm("    movq    %rdx,0x18(%rdi)");
asm("    movq    %rsi,0x20(%rdi)");
asm("    movq    %rdi,0x28(%rdi)");
asm("    movq    %r8,0x30(%rdi)");
asm("    movq    %r9,0x38(%rdi)");
asm("    movq    %r10,0x40(%rdi)");
asm("    movq    %r11,0x48(%rdi)");
asm("    movq    %r12,0x50(%rdi)");
asm("    movq    %r13,0x58(%rdi)");
asm("    movq    %r14,0x60(%rdi)");
asm("    movq    %r15,0x68(%rdi)");

asm("    movq    %rsp,0x70(%rdi)");

asm("    movq    %rsi, %rdi");

asm("    movq    (%rdi), %rbp");
asm("    movq    0x08(%rdi), %rbx");
asm("    movq    0x10(%rdi), %rcx");
asm("    movq    0x18(%rdi), %rdx");
asm("    movq    0x20(%rdi), %rsi");

asm("    movq    0x30(%rdi), %r8");
asm("    movq    0x38(%rdi), %r9");
asm("    movq    0x40(%rdi), %r10");
asm("    movq    0x48(%rdi), %r11");
asm("    movq    0x50(%rdi), %r12");
asm("    movq    0x58(%rdi), %r13");
asm("    movq    0x60(%rdi), %r14");
asm("    movq    0x68(%rdi), %r15");
asm("    movq    0x70(%rdi), %rsp");

asm("    movq    0x28(%rdi), %rdi");

asm("    ret");

#endif

#endif
