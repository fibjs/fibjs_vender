#define LOCALSZ (1)

#include "defs.h"

ALIAS(getcontext, ctx_getcontext)

FUNC(ctx_getcontext)
	/* copy $sp, $fp to temporary registers so we don't clobber them */
	move	$a2, $sp
	move	$a3, $fp

	PUSH_FRAME(ctx_getcontext)

	/* set registers */
	st.d	$s0, $a0, REG_OFFSET(23)
	st.d	$s1, $a0, REG_OFFSET(24)
	st.d	$s2, $a0, REG_OFFSET(25)
	st.d	$s3, $a0, REG_OFFSET(26)
	st.d	$s4, $a0, REG_OFFSET(27)
	st.d	$s5, $a0, REG_OFFSET(28)
	st.d	$s6, $a0, REG_OFFSET(29)
	st.d	$s7, $a0, REG_OFFSET(30)
	st.d	$s8, $a0, REG_OFFSET(31)

	st.d	$a2, $a0, REG_OFFSET(3)
	st.d	$a3, $a0, REG_OFFSET(22)
	st.d	$ra, $a0, REG_OFFSET(1)

	st.d	$ra, $a0, (MCONTEXT_PC)

	fst.d	$fs0, $a0, FP_REG_OFFSET(0)
	fst.d	$fs1, $a0, FP_REG_OFFSET(1)
	fst.d	$fs2, $a0, FP_REG_OFFSET(2)
	fst.d	$fs3, $a0, FP_REG_OFFSET(3)
	fst.d	$fs4, $a0, FP_REG_OFFSET(4)
	fst.d	$fs5, $a0, FP_REG_OFFSET(5)
	fst.d	$fs6, $a0, FP_REG_OFFSET(6)
	fst.d	$fs7, $a0, FP_REG_OFFSET(7)

	POP_FRAME(ctx_getcontext)

	jr	$ra
END(ctx_getcontext)
