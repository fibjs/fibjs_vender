#define	LOCALSZ	(4)

#include "defs.h"

#define A1_OFFSET (FRAMESZ - (1 * REG_SZ))

ALIAS(swapcontext, ctx_swapcontext)

FUNC(ctx_swapcontext)
	/* copy $sp, $fp to temporary registers so we don't clobber them */
	move	$a3, $sp
	move	$a4, $fp

	move	$t5, $a0

	PUSH_FRAME(ctx_swapcontext)

	/* set registers */
	st.d	$a0, $t5, REG_OFFSET(4)
	st.d	$a1, $t5, REG_OFFSET(5)
	st.d	$a2, $t5, REG_OFFSET(6)
	st.d	$a3, $t5, REG_OFFSET(7)
	st.d	$a4, $t5, REG_OFFSET(8)
	st.d	$a5, $t5, REG_OFFSET(9)
	st.d	$a6, $t5, REG_OFFSET(10)
	st.d	$a7, $t5, REG_OFFSET(11)

	st.d	$x, $t5, REG_OFFSET(21)

	st.d	$s0, $t5, REG_OFFSET(23)
	st.d	$s1, $t5, REG_OFFSET(24)
	st.d	$s2, $t5, REG_OFFSET(25)
	st.d	$s3, $t5, REG_OFFSET(26)
	st.d	$s4, $t5, REG_OFFSET(27)
	st.d	$s5, $t5, REG_OFFSET(28)
	st.d	$s6, $t5, REG_OFFSET(29)
	st.d	$s7, $t5, REG_OFFSET(30)
	st.d	$s8, $t5, REG_OFFSET(31)

	st.d	$a3, $t5, REG_OFFSET(3)
	st.d	$a4, $t5, REG_OFFSET(22)
	st.d	$ra, $t5, REG_OFFSET(1)

	st.d	$ra, $t5, (MCONTEXT_PC)

	fst.d	$fs0, $t5, FP_REG_OFFSET(0)
	fst.d	$fs1, $t5, FP_REG_OFFSET(1)
	fst.d	$fs2, $t5, FP_REG_OFFSET(2)
	fst.d	$fs3, $t5, FP_REG_OFFSET(3)
	fst.d	$fs4, $t5, FP_REG_OFFSET(4)
	fst.d	$fs5, $t5, FP_REG_OFFSET(5)
	fst.d	$fs6, $t5, FP_REG_OFFSET(6)
	fst.d	$fs7, $t5, FP_REG_OFFSET(7)

	/* copy new context address in $a1 to stack */
	st.d	$a1, $sp, A1_OFFSET

	/* load new context address into $v0 */
	ld.d	$t4, $sp, A1_OFFSET

	fld.d	$fs0, $t4, FP_REG_OFFSET(0)
	fld.d	$fs1, $t4, FP_REG_OFFSET(1)
	fld.d	$fs2, $t4, FP_REG_OFFSET(2)
	fld.d	$fs3, $t4, FP_REG_OFFSET(3)
	fld.d	$fs4, $t4, FP_REG_OFFSET(4)
	fld.d	$fs5, $t4, FP_REG_OFFSET(5)
	fld.d	$fs6, $t4, FP_REG_OFFSET(6)
	fld.d	$fs7, $t4, FP_REG_OFFSET(7)

	/* load the registers */
	ld.d	$a0, $t4, REG_OFFSET(4)
	ld.d	$a1, $t4, REG_OFFSET(5)
	ld.d	$a2, $t4, REG_OFFSET(6)
	ld.d	$a3, $t4, REG_OFFSET(7)
	ld.d	$a4, $t4, REG_OFFSET(8)
	ld.d	$a5, $t4, REG_OFFSET(9)
	ld.d	$a6, $t4, REG_OFFSET(10)
	ld.d	$a7, $t4, REG_OFFSET(11)

	ld.d	$x, $t4, REG_OFFSET(21)

	ld.d	$s0, $t4, REG_OFFSET(23)
	ld.d	$s1, $t4, REG_OFFSET(24)
	ld.d	$s2, $t4, REG_OFFSET(25)
	ld.d	$s3, $t4, REG_OFFSET(26)
	ld.d	$s4, $t4, REG_OFFSET(27)
	ld.d	$s5, $t4, REG_OFFSET(28)
	ld.d	$s6, $t4, REG_OFFSET(29)
	ld.d	$s7, $t4, REG_OFFSET(30)
	ld.d	$s8, $t4, REG_OFFSET(31)

	ld.d	$sp, $t4, REG_OFFSET(3)
	ld.d	$fp, $t4, REG_OFFSET(22)
	ld.d	$ra, $t4, REG_OFFSET(1)

	ld.d	$t8, $t4, (MCONTEXT_PC)

	jr	$t8
	move	$v0, $zero

fail:
	la.global	$t8, exit

	POP_FRAME(ctx_swapcontext)

	jirl	$ra, $t8, 0
	move	$v0, $zero
END(ctx_swapcontext)
