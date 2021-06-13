/*
 *  fb_api_switch.cpp
 *  Created on: Apr 28, 2021
 *      Author: lion
 */

#include "fb_api.h"

#if !defined(CTX_USE_CONTEXT) && !defined(Windows)
#include <string.h>
#include <stdio.h>

namespace exlib {

#define FB_STK_ALIGN 256

extern "C" void fb_switch(void* from, void* to);

void* convert_fiber(void* param)
{
    registers* ctx = (registers*)malloc(sizeof(registers));
    memset(ctx, 0, sizeof(registers));
    return ctx;
}

void* create_fiber(size_t stacksize, fiber_func proc, void* param)
{
    stacksize = (stacksize + FB_STK_ALIGN - 1) & ~(FB_STK_ALIGN - 1);
    registers* ctx = (registers*)malloc(stacksize);
    void** stack = (void**)ctx + stacksize / sizeof(void*) - 6;

    ctx->sp = (intptr_t)stack;

#if defined(amd64)
    stack[0] = (void*)proc;
    ctx->Rdi = (intptr_t)param;
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
    free(fiber);
}
}
#endif
