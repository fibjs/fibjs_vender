/*
 *  thread.h
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#pragma once

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

class OSMutex {
public:
    OSMutex()
    {
        InitializeCriticalSection(&cs_);
    }

    ~OSMutex()
    {
        DeleteCriticalSection(&cs_);
    }

    void Lock()
    {
        EnterCriticalSection(&cs_);
    }

    void Unlock()
    {
        LeaveCriticalSection(&cs_);
    }

    bool TryLock()
    {
        return !!TryEnterCriticalSection(&cs_);
    }

    void AssertHeld() { }

public:
    CRITICAL_SECTION cs_;
};

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

class OSCondVar {
public:
    OSCondVar(OSMutex* mu);
    ~OSCondVar();
    void Wait();
    void Signal();
    void SignalAll();

private:
    CONDITION_VARIABLE _cv;
    OSMutex* _mu;
};

#else

class OSMutex {
public:
    OSMutex()
    {
        pthread_mutexattr_t attrs;
        pthread_mutexattr_init(&attrs);
        pthread_mutexattr_settype(&attrs, PTHREAD_MUTEX_RECURSIVE);
        pthread_mutex_init(&mutex_, &attrs);
    }

    ~OSMutex()
    {
        pthread_mutex_destroy(&mutex_);
    }

    void Lock()
    {
        pthread_mutex_lock(&mutex_);
    }

    void Unlock()
    {
        pthread_mutex_unlock(&mutex_);
    }

    bool TryLock()
    {
        return !pthread_mutex_trylock(&mutex_);
    }

    void AssertHeld() { }

public:
    pthread_mutex_t mutex_;
};

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

class OSCondVar {
public:
    OSCondVar(OSMutex* mu)
        : mu_(mu)
    {
        pthread_cond_init(&cv_, NULL);
    }

    ~OSCondVar()
    {
        pthread_cond_destroy(&cv_);
    }

    void Wait()
    {
        pthread_cond_wait(&cv_, &mu_->mutex_);
    }

    void Signal()
    {
        pthread_cond_signal(&cv_);
    }

    void SignalAll()
    {
        pthread_cond_broadcast(&cv_);
    }

private:
    pthread_cond_t cv_;
    OSMutex* mu_;
};

#endif

class AutoLock {
public:
    AutoLock(OSMutex& mu)
        : _mu(mu)
    {
        _mu.Lock();
    }
    ~AutoLock()
    {
        _mu.Unlock();
    }

private:
    OSMutex& _mu;
};

class AutoUnlock {
public:
    AutoUnlock(OSMutex& mu)
        : _mu(mu)
    {
        _mu.Unlock();
    }
    ~AutoUnlock()
    {
        _mu.Lock();
    }

private:
    OSMutex& _mu;
};

class OSThread : public Thread_base {
public:
    OSThread();
    virtual ~OSThread();

public:
    static const int32_t type = kTTOSThread;
    virtual bool is(int32_t t)
    {
        return t == type;
    }

    virtual void suspend();
    virtual void suspend(spinlock& lock);
    virtual void resume();

    virtual void join();
    void yield();

    virtual void Run() {};

public:
    static void Create(fiber_func func, void* data, Thread_base** retVal = NULL)
    {
        class _thread : public OSThread {
        public:
            typedef void (*thread_func)(void*);

        public:
            _thread(thread_func proc, void* arg)
                : m_proc(proc)
                , m_arg(arg)
            {
            }

        public:
            virtual void Run()
            {
                m_proc(m_arg);
            }

        private:
            thread_func m_proc;
            void* m_arg;
        };

        _thread* pth;

        pth = new _thread(func, data);
        if (retVal) {
            *retVal = pth;
            pth->Ref();
        }

        pth->start();
    }

private:
    virtual void destroy();

public:
    void start();
    static OSThread* current();
    void bindCurrent();

    static void sleep(int32_t ms)
    {
#ifdef _WIN32
        ::Sleep(ms);
#else
        ::usleep(1000 * ms);
#endif
    }

private:
    static void* Entry(void* arg);

public:
#ifdef _WIN32
    HANDLE thread_;
    uint32_t thread_id;
#else
    pthread_t thread_;
#endif
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
