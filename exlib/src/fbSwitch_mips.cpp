#include "osconfig.h"

#ifndef _WIN32

#ifdef Darwin
asm(".section   __TEXT,__text");
#else
asm(".section   .text");
#endif

#ifdef mips

asm(".globl fb_switch, _fb_switch");
asm("fb_switch:");
asm("_fb_switch:");

asm("    sw $sp, 0($a0)");
asm("    sw $ra, 4($a0)");

asm("    sw $a0, 8($a0)");
asm("    sw $a1, 12($a0)");
asm("    sw $a2, 16($a0)");
asm("    sw $a3, 20($a0)");

asm("    sw $s0, 24($a0)");
asm("    sw $s1, 28($a0)");
asm("    sw $s2, 32($a0)");
asm("    sw $s3, 36($a0)");
asm("    sw $s4, 40($a0)");
asm("    sw $s5, 44($a0)");
asm("    sw $s6, 48($a0)");
asm("    sw $s7, 52($a0)");
asm("    sw $s8, 56($a0)");

asm("    lw $sp, 0($a0)");
asm("    lw $ra, 4($a0)");

asm("    lw $a1, 12($a0)");
asm("    lw $a2, 16($a0)");
asm("    lw $a3, 20($a0)");

asm("    lw $s0, 24($a0)");
asm("    lw $s1, 28($a0)");
asm("    lw $s2, 32($a0)");
asm("    lw $s3, 36($a0)");
asm("    lw $s4, 40($a0)");
asm("    lw $s5, 44($a0)");
asm("    lw $s6, 48($a0)");
asm("    lw $s7, 52($a0)");
asm("    lw $s8, 56($a0)");

asm("    lw $a0, 8($a0)");

asm("    move $v0,$0");
asm("    j $ra");

#endif

#endif
