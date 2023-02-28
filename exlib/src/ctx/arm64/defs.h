#pragma once

#define REG_SZ (8)
#define MCONTEXT_GREGS (184)

#define R0_OFFSET REG_OFFSET(0)

#define SP_OFFSET 440
#define PC_OFFSET 448
#define PSTATE_OFFSET 456
#define FPSIMD_CONTEXT_OFFSET 472

#ifndef FPSIMD_MAGIC
#define FPSIMD_MAGIC 0x46508001
#endif

#ifndef ESR_MAGIC
#define ESR_MAGIC 0x45535201
#endif

#define FETCH_LINKPTR(dest) \
    asm("mov	%0, x19"       \
        : "=r"((dest)))

#include "common-defs.h"
