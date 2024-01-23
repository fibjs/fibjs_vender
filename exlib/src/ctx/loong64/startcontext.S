#define LOCALSZ (4)

#include "defs.h"

FUNC(ctx_trampoline)

	/* call setcontext */
	move	$a0, $s0
	/* we receive our initial ucontext in $s0, so if $s0 is nil, bail */
	beqz	$s0, no_linked_context

	la.got	$t8, ctx_setcontext

	jr	$t8

no_linked_context:
	move	$a0, $zero
	la.global	$t8, exit
	jr	$t8

END(ctx_trampoline)
