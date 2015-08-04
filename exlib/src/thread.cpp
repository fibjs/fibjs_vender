/*
 *  thread.cpp
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stack>

#include "thread.h"
#include "fiber.h"

#ifndef WIN32
#include <cxxabi.h>
#include <dlfcn.h>
#endif

namespace exlib
{

OSTls th_current;

void *OSThread::Entry(void *arg)
{
    OSThread *thread = reinterpret_cast<OSThread *>(arg);

    th_current = thread;
    thread->Run();
    thread->Unref();

    return 0;
}

void OSThread::suspend()
{
    m_sem.Wait();
}

void OSThread::resume()
{
    m_sem.Post();
}

void OSThread::yield()
{
    sleep(0);
}

OSThread* OSThread::current()
{
    return (OSThread*)th_current;
}

void OSThread::bindCurrent()
{
    assert(thread_ == 0);
    assert(th_current == 0);

    Ref();
    th_current = this;

#ifdef _WIN32
    threadid = GetCurrentThreadId();
    thread_ = GetCurrentThread();
#else
    thread_ = pthread_self();
#endif
}

void OSThread::destroy()
{
    delete this;
}

#ifdef _WIN32

OSThread::OSThread() : thread_(0), threadid(0)
{
}

void OSThread::start()
{
    assert(thread_ == 0);
    assert(threadid == 0);
    Ref();
    thread_ = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Entry, this, 0, &threadid);
}

void OSThread::join()
{
    assert(thread_ != 0);
    assert(threadid != 0);

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
    assert(thread_ == 0);
    Ref();
    pthread_create(&thread_, NULL, Entry, this);
}

void OSThread::join()
{
    assert(thread_ != 0);

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

}

