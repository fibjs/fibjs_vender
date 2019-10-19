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

OSCondVar::OSCondVar(OSMutex* mu)
    : _mu(mu)
{
    InitializeConditionVariable(&_cv);
}

OSCondVar::~OSCondVar()
{
    WakeAllConditionVariable(&_cv);
}

void OSCondVar::Wait()
{
    SleepConditionVariableCS(&_cv, &_mu->cs_, INFINITE);
}

void OSCondVar::Signal()
{
    WakeConditionVariable(&_cv);
}

void OSCondVar::SignalAll()
{
    WakeAllConditionVariable(&_cv);
}
}

#endif
