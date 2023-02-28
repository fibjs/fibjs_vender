/*
 * Copyright (c) 2018, 2020 Ariadne Conill <ariadne@dereferenced.org>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * This software is provided 'as is' and without any warranty, express or
 * implied.  In no event shall the authors be liable for any damages arising
 * from the use of this software.
 */

#include "defs.h"

ALIAS(setcontext, ctx_setcontext)
ALIAS(__setcontext, ctx_setcontext)

	.global PROC_NAME(ctx_setcontext);
	.align  2;
	TYPE(ctx_setcontext)
	ENT(ctx_setcontext)
PROC_NAME(ctx_setcontext):
	/* restore GPRs */

#ifdef __APPLE__
    mov x8, #68719411200
    movk x8, #49420
    ldrb w9, [x8]

    cmp w9, #1
    b.ne l1

    ldr x8, [x0, #REG_OFFSET(31)]
    msr s3_4_c15_c2_7, x8
    isb

    b l2
l1:
    cmp w9, #0
    b.eq l2
    cmp w9, #3
    b.gt l2

    ldr x8, [x0, #REG_OFFSET(31)]
    msr s3_6_c15_c1_5, x8
    isb
l2:
#endif

	ldp	x18, x19, [x0, #REG_OFFSET(18)]
	ldp	x20, x21, [x0, #REG_OFFSET(20)]
	ldp	x22, x23, [x0, #REG_OFFSET(22)]
	ldp	x24, x25, [x0, #REG_OFFSET(24)]
	ldp	x26, x27, [x0, #REG_OFFSET(26)]
	ldp	x28, x29, [x0, #REG_OFFSET(28)]
	ldr	x30,      [x0, #REG_OFFSET(30)]

	/* save current stack pointer */
	ldr	x2, [x0, #SP_OFFSET]
	mov	sp, x2

	add x2, x0, #FPSIMD_CONTEXT_OFFSET
	ldp q8, q9,   [x2, #144]
	ldp q10, q11, [x2, #176]
	ldp q12, q13, [x2, #208]
	ldp q14, q15, [x2, #240]

	/* save current program counter in link register */
	ldr	x16, [x0, #PC_OFFSET]

	/* restore args */
	ldp	x2, x3, [x0, #REG_OFFSET(2)]
	ldp	x4, x5, [x0, #REG_OFFSET(4)]
	ldp	x6, x7, [x0, #REG_OFFSET(6)]
	ldp	x0, x1, [x0, #REG_OFFSET(0)]

	/* jump to new PC */
	br	x16
END(ctx_setcontext)
