/*
 *  fb_api.cpp
 *  Created on: Jul 28, 2017
 *
 *  Copyright (c) 2017 by Leo Hoo
 *  lion@9465.net
 */

#include "osconfig.h"
#include "fb_api.h"
#include "utils.h"
#include <string.h>

namespace exlib {

#define FB_STK_ALIGN 256

#ifdef _WIN32

extern "C" void win_switch(void* from, void* to);
#define fb_switch win_switch

#else

extern "C" void nix_switch(void* from, void* to);
#define fb_switch nix_switch

#endif

void* convert_Fiber(void* param)
{
#ifdef WIN32
    registers* ctx = (registers*)VirtualAlloc(NULL, sizeof(registers), MEM_COMMIT | MEM_TOP_DOWN, PAGE_READWRITE);
#else
    registers* ctx = (registers*)malloc(sizeof(registers));
#endif

    memset(ctx, 0, sizeof(registers));
    return ctx;
}

void* create_fiber(size_t stacksize, fiber_func proc, void* param)
{
    stacksize = (stacksize + FB_STK_ALIGN - 1) & ~(FB_STK_ALIGN - 1);
#ifdef WIN32
    registers* ctx = (registers*)VirtualAlloc(NULL, stacksize, MEM_COMMIT | MEM_TOP_DOWN, PAGE_READWRITE);
#else
    registers* ctx = (registers*)malloc(stacksize);
#endif

    void** stack = (void**)ctx + stacksize / sizeof(void*) - 6;

    ctx->sp = (intptr_t)stack;

#if defined(amd64)
    stack[0] = (void*)proc;
#ifdef _WIN32
    ctx->Rcx = (intptr_t)param;
#else
    ctx->Rdi = (intptr_t)param;
#endif
#elif defined(i386)
    stack[0] = (void*)proc;
    stack[2] = (void*)param;
#elif defined(arm)
    ctx->lr = (intptr_t)proc;
    ctx->r0 = (intptr_t)param;
#elif defined(arm64)
    ctx->lr = (intptr_t)proc;
    ctx->x0 = (intptr_t)param;
#elif defined(mips)
    ctx->ra = (intptr_t)proc;
    ctx->a0 = (intptr_t)param;
#elif defined(mips64)
    ctx->ra = (intptr_t)proc;
    ctx->a0 = (intptr_t)param;
#endif

    return ctx;
}

void switch_fiber(void* from, void* to)
{
    fb_switch(from, to);
}

void delete_fiber(void* fiber)
{
#ifdef WIN32
    VirtualFree(fiber, 0, MEM_RELEASE);
#else
    free(fiber);
#endif
}
}