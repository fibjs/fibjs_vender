#include "osconfig.h"

#if defined(_MSC_VER) && defined(i386)

extern "C" void win_switch();
extern "C" void win_save();

void __declspec(naked) win_switch()
{
    __asm
    {
        mov eax, [esp + 4]
        mov [eax], ebp
        mov [eax + 004h], ebx
        mov [eax + 008h], ecx
        mov [eax + 00ch], edx
        mov [eax + 010h], esi
        mov [eax + 014h], edi

        mov [eax + 018h], esp

        mov eax, [esp + 08h]
        mov ebp, [eax]
        mov ebx, [eax + 004h]
        mov ecx, [eax + 008h]
        mov edx, [eax + 00ch]
        mov esi, [eax + 010h]
        mov edi, [eax + 014h]
        mov esp, [eax + 018h]
        ret
    }
}

void __declspec(naked) win_save()
{
    __asm
    {
        mov eax, [esp + 4]
        mov [eax], ebp
        mov [eax + 004h], ebx
        mov [eax + 008h], ecx
        mov [eax + 00ch], edx
        mov [eax + 010h], esi
        mov [eax + 014h], edi

        ret
    }
}

#endif

#ifndef _WIN32

#ifdef Darwin
asm(".section   __TEXT,__text");
#else
asm(".section   .text");
#endif

#if defined(amd64)

asm(".globl nix_switch, _nix_switch");
asm("nix_switch:");
asm("_nix_switch:");

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

asm(".globl nix_save, _nix_save");
asm("nix_save:");
asm("_nix_save:");

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

asm("    ret");

#elif defined(i386)

asm(".globl nix_switch, _nix_switch");
asm("nix_switch:");
asm("_nix_switch:");

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

asm(".globl nix_save, _nix_save");
asm("nix_save:");
asm("_nix_save:");

asm("    movl    0x4(%esp), %eax");
asm("    movl    %ebp, (%eax)");
asm("    movl    %ebx, 0x04(%eax)");
asm("    movl    %ecx, 0x08(%eax)");
asm("    movl    %edx, 0x0c(%eax)");
asm("    movl    %esi, 0x10(%eax)");
asm("    movl    %edi, 0x14(%eax)");

asm("    ret");

#elif defined(arm)

asm(".globl nix_switch, _nix_switch");
asm("nix_switch:");
asm("_nix_switch:");

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

asm(".globl nix_save, _nix_save");
asm("nix_save:");
asm("_nix_save:");

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

asm("    mov pc, lr");

#elif defined(arm64)

asm(".globl nix_switch, _nix_switch");
asm("nix_switch:");
asm("_nix_switch:");

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

asm(".globl nix_save, _nix_save");
asm("nix_save:");
asm("_nix_save:");

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

asm("    mov x2, sp");
asm("    stp x30, x2, [x0,#240]");

asm("    ret");

#endif

#endif

