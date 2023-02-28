/*
 *  fb_api_ctx.cpp
 *  Created on: Apr 28, 2021
 *      Author: lion
 */

#ifndef _WIN32

#include "fb_api.h"
#include <ctx/ctx.h>

namespace exlib {

#define FB_STK_ALIGN 256

void* convert_fiber(void* param)
{
    return malloc(sizeof(ctx_ucontext_t));
}

void* create_fiber(size_t stacksize, fiber_func proc, void* param)
{
    stacksize = (stacksize + FB_STK_ALIGN - 1) & ~(FB_STK_ALIGN - 1);
    ctx_ucontext_t* ctx = (ctx_ucontext_t*)malloc(stacksize);

    ctx_getcontext(ctx);
    ctx->uc_stack.ss_sp = (char*)ctx + sizeof(ctx_ucontext_t);
    ctx->uc_stack.ss_size = stacksize - sizeof(ctx_ucontext_t);
    ctx->uc_stack.ss_flags = 0;
    ctx->uc_link = NULL;

    ctx_makecontext(ctx, (void (*)())proc, 1, param);

    return ctx;
}

void switch_fiber(void* from, void* to)
{
    ctx_swapcontext((ctx_ucontext_t*)from, (ctx_ucontext_t*)to);
}

void delete_fiber(void* fiber)
{
    free(fiber);
}
}
#endif
