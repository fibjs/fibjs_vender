#pragma once

#include <ucontext.h>

typedef ucontext_t ctx_ucontext_t;
#define ctx_getcontext getcontext
#define ctx_makecontext makecontext
#define ctx_setcontext setcontext
#define ctx_swapcontext swapcontext
