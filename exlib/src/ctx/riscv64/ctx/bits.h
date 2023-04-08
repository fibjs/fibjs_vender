#pragma once

typedef unsigned long ctx_greg_t;
typedef unsigned long ctx__riscv_mc_gp_state[32];

struct ctx__riscv_mc_f_ext_state {
    unsigned int __f[32];
    unsigned int __fcsr;
};

struct ctx__riscv_mc_d_ext_state {
    unsigned long long __f[32];
    unsigned int __fcsr;
};

struct ctx__riscv_mc_q_ext_state {
    unsigned long long __f[64] __attribute__((aligned(16)));
    unsigned int __fcsr;
    unsigned int __reserved[3];
};

union ctx__riscv_mc_fp_state {
    struct ctx__riscv_mc_f_ext_state __f;
    struct ctx__riscv_mc_d_ext_state __d;
    struct ctx__riscv_mc_q_ext_state __q;
};

typedef struct ctx_mcontext {
    ctx__riscv_mc_gp_state __gregs;
    union ctx__riscv_mc_fp_state __fpregs;
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
    unsigned char __pad[128];
    ctx_mcontext_t uc_mcontext;
} ctx_ucontext_t;
