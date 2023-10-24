/*
 * Copyright (c) 2018 Ariadne Conill <ariadne@dereferenced.org>
 * Copyright (c) 2019 A. Wilcox <awilfox@adelielinux.org>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * This software is provided 'as is' and without any warranty, express or
 * implied.  In no event shall the authors be liable for any damages arising
 * from the use of this software.
 */

#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include <stdint.h>
#include "defs.h"
#include <ctx/ctx.h>

extern void ctx_trampoline(void);

void ctx_makecontext(ctx_ucontext_t* ucp, void (*func)(void), int argc, ...)
{
    ctx_greg_t *sp, *argp;
    va_list va;
    int i;
    unsigned int uc_link;

    uc_link = (argc > 6 ? argc - 6 : 0) + 1;

    sp = (ctx_greg_t*)((uintptr_t)ucp->uc_stack.ss_sp + ucp->uc_stack.ss_size);
    sp -= uc_link;
    sp = (ctx_greg_t*)(((uintptr_t)sp & -16L) - 8);

    ucp->uc_mcontext.gregs[REG_EIP] = (uintptr_t)func;
    ucp->uc_mcontext.gregs[REG_EBX] = (uintptr_t)argc;
    ucp->uc_mcontext.gregs[REG_ESP] = (uintptr_t)sp;

    argp = sp;
    *argp++ = (uintptr_t)&ctx_trampoline;

    va_start(va, argc);

    for (i = 0; i < argc; i++)
        *argp++ = va_arg(va, ctx_greg_t);

    va_end(va);

    *argp++ = (uintptr_t)ucp->uc_link;
}

#ifdef EXPORT_UNPREFIXED
extern __typeof(ctx_makecontext) makecontext __attribute__((weak, __alias__("ctx_makecontext")));
extern __typeof(ctx_makecontext) __makecontext __attribute__((weak, __alias__("ctx_makecontext")));
#endif
