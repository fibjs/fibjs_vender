#pragma once

typedef unsigned long ctx_greg_t;
typedef unsigned long ctx_gregset_t[34];

typedef struct {
    __uint128_t vregs[32];
    unsigned int fpsr;
    unsigned int fpcr;
} ctx_fpregset_t;

typedef struct sigcontext {
    unsigned long fault_address;
    unsigned long regs[32];
    unsigned long sp, pc, pstate;
    long double __reserved[256];
} ctx_mcontext_t;

typedef struct {
    void* ss_sp;
    int ss_flags;
    size_t ss_size;
} ctx_stack_t;

typedef struct ctx_ucontext {
    unsigned long uc_flags;
    struct ctx_ucontext* uc_link;
    ctx_stack_t uc_stack;
    unsigned char __pad[136];
    ctx_mcontext_t uc_mcontext;
} ctx_ucontext_t;
