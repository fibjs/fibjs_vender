/*
 *  fb_api.h
 *  Created on: Jul 28, 2017
 *
 *  Copyright (c) 2017 by Leo Hoo
 *  lion@9465.net
 */

#pragma once

#include "osconfig.h"
#include <stdlib.h>
#include <stdint.h>

#if defined(amd64)
#include "ctx_x64.h"
#elif defined(i386)
#include "ctx_x86.h"
#elif defined(arm64)
#include "ctx_arm64.h"
#elif defined(arm)
#include "ctx_arm.h"
#else
#define CTX_USE_CONTEXT
#endif

namespace exlib {

typedef void (*fiber_func)(void*);

void* convert_fiber(void* param);
void* create_fiber(size_t stacksize, fiber_func proc, void* param);
void switch_fiber(void* from, void* to);
void delete_fiber(void* fiber);
}
