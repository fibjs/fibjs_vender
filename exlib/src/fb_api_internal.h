/*
 *  fb_api_internal.h
 *  Created on: Jan 11, 2023
 *
 *  Copyright (c) 2023 by Leo Hoo
 *  lion@9465.net
 */

#pragma once

#include "osconfig.h"
#include <stdlib.h>
#include <stdint.h>

#include "fb_api.h"

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
