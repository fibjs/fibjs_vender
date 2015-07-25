/*
 *  thread.cpp
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include "thread.h"
#include "fiber.h"

#ifndef WIN32
#include <cxxabi.h>
#include <dlfcn.h>
#endif

namespace exlib
{

static void *ThreadEntry(void *arg)
{
    mem_savestack();

    OSThread *thread = reinterpret_cast<OSThread *>(arg);
    thread->Run();
    delete thread;
void OSThread::yield()
{
    Sleep(0);
}


    return NULL;
}

#ifdef _WIN32

OSThread::OSThread() : thread_(0), threadid(0)
{
}

void OSThread::start()
{
    trace_assert(thread_ == 0);
    trace_assert(threadid == 0);
    thread_ = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)ThreadEntry, this, 0, &threadid);
}

void OSThread::join()
{
    trace_assert(thread_ != 0);
    trace_assert(threadid != 0);

    WaitForSingleObject(thread_, INFINITE);
}

OSThread::~OSThread()
{
    if (thread_)
    {
        CloseHandle(thread_);
        thread_ = NULL;
        threadid = 0;
    }
}

#else

OSThread::OSThread() : thread_(0)
{
}

void OSThread::start()
{
    trace_assert(thread_ == 0);

    pthread_create(&thread_, NULL, ThreadEntry, this);
}

void OSThread::join()
{
    trace_assert(thread_ != 0);

    pthread_join(thread_, NULL);
}

OSThread::~OSThread()
{
    if (thread_)
    {
        pthread_detach(thread_);
        thread_ = (pthread_t)NULL;
    }
}

#endif

void OSThread::suspend()
{

}

void OSThread::resume()
{

}

void OSThread::destroy()
{
    delete this;
}

}

