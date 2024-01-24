#pragma once

typedef struct {
    unsigned long long __pc;
    unsigned long long __gregs[32];
    unsigned int __flags;
    unsigned long long __fpregs[8] __attribute__((__aligned__(16)));
} ctx_mcontext_t;

typedef struct
{
    void* ss_sp;
    int ss_flags;
    size_t ss_size;
} ctx_stack_t;

typedef struct ctx_ucontext {
    unsigned long uc_flags;
    struct ctx_ucontext* uc_link;
    ctx_stack_t uc_stack;
    ctx_mcontext_t uc_mcontext;
} ctx_ucontext_t;
