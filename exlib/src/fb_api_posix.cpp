/*
 *  fb_api_ctx.cpp
 *  Created on: Apr 28, 2021
 *      Author: lion
 *
 *  POSIX fiber stacks.
 *
 *  A fiber stack is carved out of a private mapping so the layout is:
 *
 *      [ control page ][ guard low ][ usable stack ][ guard high ]
 *
 *  The downward growing stack therefore ends on a PROT_NONE guard page instead
 *  of a heap chunk header, and the context handle lives in its own control page
 *  in front of it.  EXLIB_STACK_ALLOC=malloc selects the legacy single-malloc
 *  layout (no guards) for experiments, EXLIB_STACK_GUARD overrides the guard
 *  size in bytes.
 */

#ifndef _WIN32

#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>

#include "fb_api.h"
#include "fbStack.h"
#include <ctx/ctx.h>

namespace exlib {

#define FB_STK_ALIGN 256

// Unit that keeps running on the stack it already has: only the context handle
// is allocated, the stack bounds come from stack_query_native() when captured.
void* convert_fiber(void* param)
{
    return malloc(sizeof(ctx_ucontext_t));
}

static void* legacy_create_fiber(size_t stacksize, fiber_func proc, void* param,
    const char* name, StackDescriptor* desc)
{
    stacksize = (stacksize + FB_STK_ALIGN - 1) & ~(FB_STK_ALIGN - 1);

    ctx_ucontext_t* ctx = (ctx_ucontext_t*)malloc(stacksize);

    if (!ctx)
        return NULL;

    if (desc) {
        memset(desc, 0, sizeof(*desc));
        desc->stack_base = (uintptr_t)ctx + sizeof(ctx_ucontext_t);
        desc->stack_limit = desc->stack_base;
        desc->stack_start = desc->stack_base + (stacksize - sizeof(ctx_ucontext_t));
        desc->reserved_size = stacksize;
        desc->usable_size = stacksize - sizeof(ctx_ucontext_t);
        desc->kind = StackDescriptor::Kind::kFiberMallocLegacy;
        desc->stack_id = stack_next_id();
        desc->debug_name = name;
        desc->control_block = ctx;
        stack_register(*desc);
    }

    ctx_getcontext(ctx);
    ctx->uc_stack.ss_sp = (char*)ctx + sizeof(ctx_ucontext_t);
    ctx->uc_stack.ss_size = stacksize - sizeof(ctx_ucontext_t);
    ctx->uc_stack.ss_flags = 0;
    ctx->uc_link = NULL;

    ctx_makecontext(ctx, (void (*)())proc, 1, param);

    return ctx;
}

static void* carve_create_fiber(size_t stacksize, fiber_func proc, void* param,
    const char* name, StackDescriptor* desc)
{
    StackLayout layout;
    StackDescriptor local;

    if (!stack_layout_for(stacksize, sizeof(ctx_ucontext_t), layout))
        return NULL;

    void* base = mmap(NULL, layout.total_size, PROT_READ | PROT_WRITE,
        MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);

    if (base == MAP_FAILED)
        return NULL;

    uintptr_t low = (uintptr_t)base + layout.control_size + layout.guard_low_size;
    uintptr_t high = low + layout.stack_size;

    if (layout.guard_low_size)
        mprotect((void*)(low - layout.guard_low_size), layout.guard_low_size, PROT_NONE);
    if (layout.guard_high_size)
        mprotect((void*)high, layout.guard_high_size, PROT_NONE);

    ctx_ucontext_t* ctx = (ctx_ucontext_t*)stack_carve_init(base, layout,
        sizeof(ctx_ucontext_t), name, StackDescriptor::Kind::kFiberMmap, local);

    if (!ctx) {
        munmap(base, layout.total_size);
        return NULL;
    }

    if (desc)
        *desc = local;

    ctx_getcontext(ctx);
    ctx->uc_stack.ss_sp = (void*)low;
    ctx->uc_stack.ss_size = layout.stack_size;
    ctx->uc_stack.ss_flags = 0;
    ctx->uc_link = NULL;

    ctx_makecontext(ctx, (void (*)())proc, 1, param);

    return ctx;
}

void* create_fiber_named(size_t stacksize, fiber_func proc, void* param,
    const char* name, StackDescriptor* desc)
{
    if (stack_use_legacy_malloc())
        return legacy_create_fiber(stacksize, proc, param, name, desc);

    void* ctx = carve_create_fiber(stacksize, proc, param, name, desc);

    if (ctx)
        return ctx;

    // Constrained environments (no address space for the mapping) still run,
    // without guard pages.
    return legacy_create_fiber(stacksize, proc, param, name, desc);
}

void* create_fiber(size_t stacksize, fiber_func proc, void* param)
{
    return create_fiber_named(stacksize, proc, param, NULL, NULL);
}

void switch_fiber(void* from, void* to)
{
    ctx_swapcontext((ctx_ucontext_t*)from, (ctx_ucontext_t*)to);
}

void delete_fiber(void* fiber)
{
    stack_delete_fiber(fiber);
}

void release_converted_fiber(void* fiber)
{
    delete_fiber(fiber);
}
}
#endif
