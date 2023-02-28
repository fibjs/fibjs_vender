#pragma once

#include <stddef.h>
#include <ctx/bits.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef ctx_makecontext
int ctx_getcontext(ctx_ucontext_t*);
void ctx_makecontext(ctx_ucontext_t*, void (*)(), int, ...);
int ctx_setcontext(const ctx_ucontext_t*);
int ctx_swapcontext(ctx_ucontext_t*, const ctx_ucontext_t*);
#endif

#ifdef __cplusplus
}
#endif
