/*
 *  win_lock.cpp
 *  Created on: Jul 23, 2015
 *
 *  Copyright (c) 2015 by Leo Hoo
 *  lion@9465.net
 */

#ifdef _WIN32

#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include "thread.h"
#include "fiber.h"

namespace exlib {

OSSemaphore::OSSemaphore(int32_t start_val)
{
    m_sem = ::CreateSemaphore(NULL, start_val, LONG_MAX, NULL);
}

}


#endif
