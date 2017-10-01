#include "osconfig.h"

#ifndef _WIN32

#ifdef Darwin
asm(".section   __TEXT,__text");
#else
asm(".section   .text");
#endif

#ifdef mips64

asm(".globl fb_switch, _fb_switch");
asm("fb_switch:");
asm("_fb_switch:");

asm("    sd $29, 0($4)");
asm("    sd $30, 8($4)");
asm("    sd $31, 16($4)");

asm("    sd $4, 24($4)");
asm("    sd $5, 32($4)");
asm("    sd $6, 40($4)");
asm("    sd $7, 48($4)");

asm("    sd $16, 56($4)");
asm("    sd $17, 64($4)");
asm("    sd $18, 72($4)");
asm("    sd $19, 80($4)");
asm("    sd $20, 88($4)");
asm("    sd $21, 96($4)");
asm("    sd $22, 104($4)");
asm("    sd $23, 112($4)");
asm("    sd $24, 120($4)");

asm("    sdc1 $f20, 128($4)");
asm("    sdc1 $f21, 136($4)");
asm("    sdc1 $f22, 144($4)");
asm("    sdc1 $f23, 152($4)");
asm("    sdc1 $f24, 160($4)");
asm("    sdc1 $f25, 168($4)");
asm("    sdc1 $f26, 176($4)");
asm("    sdc1 $f27, 184($4)");
asm("    sdc1 $f28, 192($4)");
asm("    sdc1 $f29, 200($4)");
asm("    sdc1 $f30, 208($4)");
asm("    sdc1 $f31, 216($4)");

asm("    ld $29, 0($4)");
asm("    ld $30, 8($4)");
asm("    ld $31, 16($4)");

asm("    ld $5, 32($4)");
asm("    ld $6, 40($4)");
asm("    ld $7, 48($4)");

asm("    ld $16, 56($4)");
asm("    ld $17, 64($4)");
asm("    ld $18, 72($4)");
asm("    ld $19, 80($4)");
asm("    ld $20, 88($4)");
asm("    ld $21, 96($4)");
asm("    ld $22, 104($4)");
asm("    ld $23, 112($4)");
asm("    ld $24, 120($4)");

asm("    ldc1 $f20, 128($4)");
asm("    ldc1 $f21, 136($4)");
asm("    ldc1 $f22, 144($4)");
asm("    ldc1 $f23, 152($4)");
asm("    ldc1 $f24, 160($4)");
asm("    ldc1 $f25, 168($4)");
asm("    ldc1 $f26, 176($4)");
asm("    ldc1 $f27, 184($4)");
asm("    ldc1 $f28, 192($4)");
asm("    ldc1 $f29, 200($4)");
asm("    ldc1 $f30, 208($4)");
asm("    ldc1 $f31, 216($4)");

asm("    ld $4, 24($4)");

asm("    move $2,$0");
asm("    j $ra");

#endif

#endif
