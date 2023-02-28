#pragma once

typedef unsigned long long ctx_greg_t, ctx_gregset_t[32];

typedef struct {
    union {
        double fp_dregs[32];
        struct {
            float _fp_fregs;
            unsigned _fp_pad;
        } fp_fregs[32];
    } fp_r;
} ctx_fpregset_t;

typedef struct {
    ctx_gregset_t gregs;
    ctx_fpregset_t fpregs;
    ctx_greg_t mdhi;
    ctx_greg_t hi1;
    ctx_greg_t hi2;
    ctx_greg_t hi3;
    ctx_greg_t mdlo;
    ctx_greg_t lo1;
    ctx_greg_t lo2;
    ctx_greg_t lo3;
    ctx_greg_t pc;
    unsigned int fpc_csr;
    unsigned int used_math;
    unsigned int dsp;
    unsigned int reserved;
} ctx_mcontext_t;

typedef struct {
    void* ss_sp;
    size_t ss_size;
    int ss_flags;
} ctx_stack_t;

typedef struct ctx_ucontext {
    unsigned long uc_flags;
    struct ctx_ucontext* uc_link;
    ctx_stack_t uc_stack;
    ctx_mcontext_t uc_mcontext;
} ctx_ucontext_t;
