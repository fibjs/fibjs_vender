/*
 *  fb_api.h
 *  Created on: Jul 28, 2017
 *
 *  Copyright (c) 2017 by Leo Hoo
 *  lion@9465.net
 */

#include <stdlib.h>
#include <stdint.h>

#pragma once

namespace exlib {

typedef void (*fiber_func)(void*);

void* convert_fiber(void* param);
void* create_fiber(size_t stacksize, fiber_func proc, void* param);
void switch_fiber(void* from, void* to);
void delete_fiber(void* fiber);
}