/*
 *  fb_api_ctx.cpp
 *  Created on: Apr 28, 2021
 *      Author: lion
 */

#include "fb_api.h"

#ifdef CTX_USE_CONTEXT
#include <string.h>
#include <stdio.h>
#include <ucontext.h>

namespace exlib {

#define FB_STK_ALIGN 256

extern "C" void fb_switch(void* from, void* to);

void* convert_fiber(void* param)
{
    ucontext_t* ctx = (ucontext_t*)malloc(sizeof(ucontext_t));
    getcontext(ctx);
    return ctx;
}

void* create_fiber(size_t stacksize, fiber_func proc, void* param)
{
    stacksize = (stacksize + FB_STK_ALIGN - 1) & ~(FB_STK_ALIGN - 1);
    ucontext_t* ctx = (ucontext_t*)malloc(stacksize);
    void** stack = (void**)ctx + stacksize / sizeof(void*) - 6;

    getcontext(ctx);
    ctx->uc_stack.ss_sp = (char*)ctx + sizeof(ucontext_t);
    ctx->uc_stack.ss_size = stacksize - sizeof(ucontext_t);
    ctx->uc_stack.ss_flags = 0;
    ctx->uc_link = NULL;

    makecontext(ctx, (void (*)())proc, 1, param);

    return ctx;
}

void switch_fiber(void* from, void* to)
{
    swapcontext((ucontext_t*)from, (ucontext_t*)to);
}

void delete_fiber(void* fiber)
{
    free(fiber);
}
}
#endif
