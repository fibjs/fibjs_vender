/*
 *  stack.h
 *  Created on: Jul 14, 2015
 *
 *  Copyright (c) 2015 by Leo Hoo
 *  lion@9465.net
 */

#include "osconfig.h"
#include "utils.h"
#include <stdio.h>

#ifndef _ex_stack_h__
#define _ex_stack_h__

namespace exlib
{

#ifdef _WIN32

extern "C" void win_switch(void *from, void *to);
#define fb_switch win_switch

#else

extern "C" void nix_switch(void *from, void *to);
#define fb_switch nix_switch

#endif

#pragma pack (1)

class context
{
public:
#if defined(amd64)
    union {
        intptr_t Rbp;
        intptr_t fp;
    };
    intptr_t Rbx;
    intptr_t Rcx;
    intptr_t Rdx;
    intptr_t Rsi;
    intptr_t Rdi;
    intptr_t R8;
    intptr_t R9;
    intptr_t R10;
    intptr_t R11;
    intptr_t R12;
    intptr_t R13;
    intptr_t R14;
    intptr_t R15;
    union {
        intptr_t Rsp;
        intptr_t sp;
    };
#elif defined(i386)
    union {
        intptr_t Ebp;
        intptr_t fp;
    };
    intptr_t Ebx;
    intptr_t Ecx;
    intptr_t Edx;
    intptr_t Esi;
    intptr_t Edi;
    union {
        intptr_t Esp;
        intptr_t sp;
    };
#elif defined(arm)
    intptr_t r0;
    intptr_t r1;
    intptr_t r2;
    intptr_t r3;
    intptr_t r4;
    intptr_t r5;
    intptr_t r6;
    intptr_t r7;
    intptr_t r8;
    intptr_t r9;
    intptr_t r10;
    union {
        intptr_t r11;
        intptr_t fp;
    };
    intptr_t r12;
    union {
        intptr_t r13;
        intptr_t sp;
    };
    union {
        intptr_t r14;
        intptr_t lr;
    };
#elif defined(arm64)
    intptr_t x0;
    intptr_t x1;
    intptr_t x2;
    intptr_t x3;
    intptr_t x4;
    intptr_t x5;
    intptr_t x6;
    intptr_t x7;
    intptr_t x8;
    intptr_t x9;
    intptr_t x10;
    intptr_t x11;
    intptr_t x12;
    intptr_t x13;
    intptr_t x14;
    intptr_t x15;
    intptr_t x16;
    intptr_t x17;
    intptr_t x18;
    intptr_t x19;
    intptr_t x20;
    intptr_t x21;
    intptr_t x22;
    intptr_t x23;
    intptr_t x24;
    intptr_t x25;
    intptr_t x26;
    intptr_t x27;
    intptr_t x28;
    union {
        intptr_t x29;
        intptr_t fp;
    };
    union {
        intptr_t x30;
        intptr_t lr;
    };
    intptr_t sp;
    intptr_t d0;
    intptr_t d1;
    intptr_t d2;
    intptr_t d3;
    intptr_t d4;
    intptr_t d5;
    intptr_t d6;
    intptr_t d7;
    intptr_t d8;
    intptr_t d9;
    intptr_t d10;
    intptr_t d11;
    intptr_t d12;
    intptr_t d13;
    intptr_t d14;
    intptr_t d15;
    intptr_t d16;
    intptr_t d17;
    intptr_t d18;
    intptr_t d19;
    intptr_t d20;
    intptr_t d21;
    intptr_t d22;
    intptr_t d23;
    intptr_t d24;
    intptr_t d25;
    intptr_t d26;
    intptr_t d27;
    intptr_t d28;
    intptr_t d29;
    intptr_t d30;
    intptr_t d31;
#endif

public:
    void switchto(void *to)
    {
        fb_switch(this, to);
    }
};

#pragma pack ()

}

#endif

