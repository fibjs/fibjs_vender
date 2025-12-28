/*
 *  thread.h
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#pragma once

// Include standard library headers first to avoid macro conflicts
#include <thread>
#include <chrono>
#include <functional>

#include "osconfig.h"

#ifdef _WIN32
#include <windows.h>
#else
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
#ifdef Darwin
#include <mach/mach_init.h>
#include <mach/task.h>
#include <mach/semaphore.h>
#include <dispatch/dispatch.h>
#endif
#endif

#include <stdint.h>
#include "utils.h"
#include "fiber.h"

namespace exlib {

#ifdef _WIN32

class OSSemaphore {
public:
    OSSemaphore(int32_t start_val = 0);

    ~OSSemaphore()
    {
        CloseHandle(m_sem);
    }

    void Post()
    {
        ReleaseSemaphore(m_sem, 1, NULL);
    }

    void Wait()
    {
        TimedWait(INFINITE);
    }

    bool TimedWait(int32_t ms)
    {
        return WaitForSingleObject(m_sem, ms) == WAIT_OBJECT_0;
    }

    bool TryWait()
    {
        return TimedWait(0);
    }

public:
    HANDLE m_sem;
};

#else

#ifdef Darwin
class OSSemaphore {
public:
    OSSemaphore(int32_t start_val = 0)
    {
        m_sem = dispatch_semaphore_create(start_val);
    }

    ~OSSemaphore()
    {
        dispatch_release(m_sem);
    }

    void Post()
    {
        dispatch_semaphore_signal(m_sem);
    }

    void Wait()
    {
        dispatch_semaphore_wait(m_sem, DISPATCH_TIME_FOREVER);
    }

    bool TimedWait(int32_t ms)
    {
        double ns = dispatch_time(DISPATCH_TIME_NOW, (double)ms * NSEC_PER_SEC / 1000);
        return dispatch_semaphore_wait(m_sem, ns) == 0;
    }

    bool TryWait()
    {
        return dispatch_semaphore_wait(m_sem, DISPATCH_TIME_NOW) == 0;
    }

public:
    dispatch_semaphore_t m_sem;
};
#else
class OSSemaphore {
public:
    OSSemaphore(int32_t start_val = 0)
    {
        sem_init(&m_sem, 0, start_val);
    }

    ~OSSemaphore()
    {
        sem_destroy(&m_sem);
    }

    void Post()
    {
        sem_post(&m_sem);
    }

    void Wait()
    {
        while (sem_wait(&m_sem))
            ;
    }

    bool TryWait()
    {
        return sem_trywait(&m_sem) == 0;
    }

    bool TimedWait(int32_t ms)
    {
        struct timespec ts;
        clock_gettime(CLOCK_REALTIME, &ts);
        long secs = ms / 1000;
        ms = ms % 1000;

        long add = 0;
        ms = ms * 1000 * 1000 + ts.tv_nsec;
        add = ms / (1000 * 1000 * 1000);
        ts.tv_sec += (add + secs);
        ts.tv_nsec = ms % (1000 * 1000 * 1000);

        return sem_timedwait(&m_sem, &ts) == 0;
    }

public:
    sem_t m_sem;
};
#endif

#endif

class OSThread : public Thread_base {
public:
    OSThread()
        : m_sem(0)
    {
    }

    explicit OSThread(std::function<void()> func)
        : m_func(std::move(func))
        , m_sem(0)
    {
    }

    virtual ~OSThread();

public:
    virtual void suspend();
    virtual void suspend(spinlock& lock);
    virtual void resume();

    virtual void join();

    void yield()
    {
        std::this_thread::yield();
    }

    virtual void Run()
    {
        if (m_func)
            m_func();
    }

public:
    void start();

    static OSThread* current();

    void bindCurrent();

    static void sleep(int32_t ms)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(ms));
    }

    static OSThread* Create(std::function<void()> func)
    {
        OSThread* th = new OSThread(std::move(func));
        th->start();
        return th;
    }

private:
    virtual void destroy();

private:
    std::function<void()> m_func;
    std::thread m_thread;
    OSSemaphore m_sem;
};

inline void InitOnce(atomic& once, void (*initializer)())
{
    intptr_t state = once.CompareAndSwap(0, 1);
    if (state == 0) {
        initializer();
        once = 2;
    } else if (state == 1) {
        while (once != 2)
            OSThread::sleep(0);
    }
}
}
