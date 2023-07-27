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

#ifndef _WIN32
#include <cxxabi.h>
#include <dlfcn.h>
#else
#include <process.h>
#endif

namespace exlib {

#ifdef iPhone
class OSTls {
public:
    OSTls()
    {
        pthread_key_create(&m_index, NULL);
    }

    void* operator=(void* new_value)
    {
        pthread_setspecific(m_index, new_value);
        return new_value;
    }

    operator void*() const
    {
        return pthread_getspecific(m_index);
    }

    template <class T>
    operator T*() const
    {
        return (T*)pthread_getspecific(m_index);
    }

private:
    pthread_key_t m_index;
};

static OSTls th_current;
#else
thread_local void* th_current;
#endif

void* OSThread::Entry(void* arg)
{
    OSThread* thread = reinterpret_cast<OSThread*>(arg);
    thread->save_stack_start();

    th_current = thread;
    thread->Run();
    thread->Unref();

#ifdef _WIN32
    _endthreadex(0);
#endif

    return 0;
}

void OSThread::suspend()
{
    m_sem.Wait();
}

void OSThread::suspend(spinlock& lock)
{
    lock.unlock();
    suspend();
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
    save_stack_start();

    assert(thread_ == 0);

    Ref();
    th_current = this;

#ifdef _WIN32
    thread_ = GetCurrentThread();
    thread_id = GetCurrentThreadId();
#else
    thread_ = pthread_self();
#endif
}

void OSThread::destroy()
{
    Thread_base::destroy();
    delete this;
}

#ifdef _WIN32

OSThread::OSThread()
    : thread_(0)
{
}

void OSThread::start()
{
    assert(thread_ == 0);
    Ref();
    thread_ = (HANDLE)_beginthreadex(NULL, 0, (unsigned(__stdcall*)(void*))Entry,
        this, 0, &thread_id);
}

void OSThread::join()
{
    assert(thread_ != 0);

    WaitForSingleObject(thread_, INFINITE);
}

OSThread::~OSThread()
{
    if (thread_) {
        CloseHandle(thread_);
        thread_ = NULL;
    }
}

#else

OSThread::OSThread()
    : thread_(0)
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
    if (thread_) {
        pthread_detach(thread_);
        thread_ = (pthread_t)NULL;
    }
}

#endif
}
