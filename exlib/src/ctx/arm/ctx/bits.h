#pragma once

typedef int ctx_greg_t, ctx_gregset_t[18];

typedef struct {
    unsigned long trap_no, error_code, oldmask;
    unsigned long arm_r0, arm_r1, arm_r2, arm_r3;
    unsigned long arm_r4, arm_r5, arm_r6, arm_r7;
    unsigned long arm_r8, arm_r9, arm_r10, arm_fp;
    unsigned long arm_ip, arm_sp, arm_lr, arm_pc;
    unsigned long arm_cpsr, fault_address;
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
    ctx_mcontext_t uc_mcontext;
    unsigned long uc_sigmask[128 / sizeof(long)];
    unsigned long long uc_regspace[64];
} ctx_ucontext_t;
