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

// Same as create_fiber(), but records the owner name and, when desc is not NULL,
// the resulting stack layout (bounds, guard sizes, kind, id).
void* create_fiber_named(size_t stacksize, fiber_func proc, void* param,
    const char* name, struct StackDescriptor* desc);

void switch_fiber(void* from, void* to);
void delete_fiber(void* fiber);

// Release the current thread's converted-fiber context. On Windows this must
// run on the thread that called convert_fiber(); on POSIX it is equivalent to
// delete_fiber().
void release_converted_fiber(void* fiber);
}