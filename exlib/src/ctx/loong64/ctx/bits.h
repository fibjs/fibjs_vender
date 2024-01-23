#pragma once

#include <bits/types/sigset_t.h>
#include <bits/types/stack_t.h>

typedef struct {
    unsigned long long __pc;
    unsigned long long __gregs[32];
    unsigned int __flags;
    unsigned long long __fpregs[8] __attribute__((__aligned__(16)));
} ctx_mcontext_t;

typedef struct ctx_ucontext {
    unsigned long uc_flags;
    struct ctx_ucontext* uc_link;
    stack_t uc_stack;
    ctx_mcontext_t uc_mcontext;
} ctx_ucontext_t;
