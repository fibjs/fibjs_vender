/*
 *  fb_api_win.cpp
 *  Created on: Apr 28, 2021
 *      Author: lion
 */

#include "fb_api.h"

#ifdef Windows
#include <string.h>
#include <stdio.h>

#include <windows.h>

namespace exlib {

void* convert_fiber(void* param)
{
    return ConvertThreadToFiber(param);
}

void* create_fiber(size_t stacksize, fiber_func proc, void* param)
{
    return CreateFiber(stacksize, (LPFIBER_START_ROUTINE)proc, param);
}

void switch_fiber(void* from, void* to)
{
    SwitchToFiber(to);
}

void delete_fiber(void* fiber)
{
    DeleteFiber(fiber);
}
}
#endif
