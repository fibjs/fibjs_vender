/*
 *  fb_api_win.cpp
 *  Created on: Apr 28, 2021
 *      Author: lion
 *
 *  Windows fiber stacks keep using the OS fiber API: CreateFiber() allocates a
 *  stack that already comes with an OS guard page, so the protection model is
 *  provided by the kernel.  What the OS does not tell us at creation time is
 *  where that stack starts, so the descriptor is captured when the fiber begins
 *  running: GetCurrentThreadStackLimits() reports the limits of the stack the
 *  current fiber is using.
 */

#ifdef _WIN32
#include <string.h>
#include <stdio.h>

#include <windows.h>

#include "fb_api.h"
#include "fbStack.h"

namespace exlib {

void* convert_fiber(void* param)
{
    return ConvertThreadToFiber(param);
}

void* create_fiber_named(size_t stacksize, fiber_func proc, void* param,
    const char* name, StackDescriptor* desc)
{
    void* fiber;

    if (desc) {
        memset(desc, 0, sizeof(*desc));
        desc->kind = StackDescriptor::Kind::kFiberWin32;
        desc->stack_id = stack_next_id();
        desc->debug_name = name;
    }

    fiber = CreateFiber(stacksize, (LPFIBER_START_ROUTINE)proc, param);

    if (desc) {
        // Bounds are filled in by stack_capture_current() once the fiber runs.
        desc->control_block = fiber;
        stack_register(*desc);
    }

    return fiber;
}

void* create_fiber(size_t stacksize, fiber_func proc, void* param)
{
    return create_fiber_named(stacksize, proc, param, NULL, NULL);
}

void switch_fiber(void* from, void* to)
{
    SwitchToFiber(to);
}

void delete_fiber(void* fiber)
{
    if (!fiber)
        return;

    stack_unregister(fiber);
    DeleteFiber(fiber);
}

void release_converted_fiber(void* fiber)
{
    if (!fiber)
        return;

    stack_unregister(fiber);
    ConvertFiberToThread();
}
}
#endif
