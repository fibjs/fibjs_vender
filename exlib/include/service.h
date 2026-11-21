/*
 *  fiber.h
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#pragma once

#include "fiber.h"
#include "thread.h"
#include "fb_api.h"

namespace exlib {

class Service : public OSThread {
private:
    Service();
    Service(int32_t workers);
    Service(bool dedicated);

public:
    // A dedicated service is deleted by the framework once its thread returned
    // from Run(); free the main fiber context it owns before that.
    virtual ~Service();

public:
    static void dispatch();

    virtual void Run()
    {
        m_main.save_stack_start();
        m_main.m_ctx = convert_fiber(NULL);
        bind_main_stack();

        // Only pool workers report back to the master service. A dedicated
        // service has no master.
        if (m_master)
            m_master->m_idleWorkers.dec();
        dispatch_loop();

#ifdef _WIN32
        if (m_dedicated && m_main.m_ctx) {
            release_converted_fiber(m_main.m_ctx);
            m_main.m_ctx = NULL;
        }
#endif
    }

private:
    void dispatch_loop();

public:
    static void init(int32_t workers);
    static void init();

    // Create a service that owns its run queue and exactly one OS thread, so a
    // fiber posted to it always runs on that thread until shutdown().
    static Service* createDedicated();

    // Same as createDedicated(), but without starting an OS thread. The owner
    // must bind it to the thread that will run it with attachCurrentThread()
    // and then drive it with runPending(). This is the "guest" mode used when
    // the process main thread owns a native event loop (GUI) and therefore
    // cannot enter dispatch_loop().
    static Service* createDedicatedUnstarted();

    // Bind this (not yet started) dedicated service to the calling thread and
    // turn the caller into the service's main fiber. Must be called before any
    // runPending(), on the thread that will call it, after the platform wakeup
    // source used by the WaitHook exists. start() must not have been called.
    void attachCurrentThread();

    // Runs at most `budget` resumable fibers without blocking.
    bool runPending(int32_t budget = 64)
    {
        ex_assert(m_guest);
        ex_assert(m_dedicated);
        ex_assert(OSThread::current() == this);

        // A nested native loop (modal dialog, window tracking, an addon pumping
        // its own loop) can call back into the host while a drain is already
        // running. The outer drain still owns the run queue and will finish it,
        // so report "nothing claimed": returning true here would make the host
        // re-arm its wakeup source and spin at 100% CPU for the whole modal.
        if (m_draining != 0)
            return false;

        ex_assert(m_running == &m_main);
        m_draining = 1;

        int32_t n = 0;

        while (true) {
            before_next(m_last);
            m_last = NULL;

            // The budget is checked before dequeuing: getHead() removes the
            // fiber from the queue, so returning after the dequeue would drop
            // it forever.
            if (n >= budget) {
                m_draining = 0;
                return true;
            }

            Fiber* fb = m_resumeList.getHead();
            if (!fb) {
                m_draining = 0;

                // A producer that posted between getHead() and the flag store
                // saw m_draining == 1 and skipped its wakeup. Re-check with the
                // flag down: if work arrived, keep draining; otherwise post()
                // races against a flag of 0 and will wake us itself.
                if (!m_resumeList.empty()) {
                    m_draining = 1;
                    continue;
                }

                return false;
            }

            n++;
            run_fiber(fb);
            m_last = fb;
        }
    }

    // True while runPending() is executing on the attached thread. Host
    // callbacks use it to avoid dispatching GUI events from the JS stack when a
    // nested native loop re-enters the host.
    bool is_guest_draining() const
    {
        return m_guest && m_draining != 0;
    }

    static void CreateFiber(fiber_func func, void* data, int32_t stacksize,
        const char* name = NULL, Thread_base** retVal = NULL);

    // Create a fiber on a specific service instead of the shared pool.
    static void CreateFiber(Service* svc, fiber_func func, void* data,
        int32_t stacksize, const char* name = NULL,
        Thread_base** retVal = NULL);

    bool is_dedicated() const
    {
        return m_dedicated;
    }

    bool is_shutting_down() const
    {
        return m_shutting_down != 0;
    }

    // ---- scheduler hooks ------------------------------------------------
    // Optional observer, called on the service thread around every fiber switch
    // and when a service thread starts running.  It exists so that upper layers
    // (fibjs, V8) can synchronize their own per-stack state -- most importantly
    // the stack limit used for stack overflow detection -- when execution moves
    // to another stack.  Implementations must be cheap and must not block.
    class SwitchHook {
    public:
        virtual ~SwitchHook()
        {
        }

        // Called right before `fiber` starts running on this thread.
        virtual void on_fiber_about_to_run(Thread_base* fiber)
        {
        }

        // Called after `fiber` suspended (yielded, blocked or finished) and
        // before the next execution unit is picked.
        virtual void on_fiber_suspended(Thread_base* fiber)
        {
        }

        // Called when a service thread begins to run (native thread bound).
        virtual void on_native_thread_bound(OSThread* thread)
        {
        }
    };

    static void set_switch_hook(SwitchHook* hook);

    static SwitchHook* switch_hook()
    {
        return (SwitchHook*)s_switch_hook;
    }

    // Hook helpers used by the dispatcher (cheap no-ops without a hook).
    static void notify_about_to_run(Thread_base* fiber)
    {
        SwitchHook* hook = switch_hook();

        if (hook)
            hook->on_fiber_about_to_run(fiber);
    }

    // Optional wakeup source for a guest service (see attachCurrentThread).
    // Service::post() calls wake() instead of posting the service semaphore,
    // so a native event loop can be woken. The hook must be in place before
    // fibers are posted, and the primitive it uses must already exist.
    class WaitHook {
    public:
        virtual ~WaitHook()
        {
        }

        virtual void wake(Service* svc) = 0;
    };

    void setWaitHook(WaitHook* hook);

    static void notify_suspended(Thread_base* fiber)
    {
        SwitchHook* hook = switch_hook();

        if (hook && fiber)
            hook->on_fiber_suspended(fiber);
    }

    static void notify_native_thread_bound(OSThread* thread)
    {
        SwitchHook* hook = switch_hook();

        if (hook)
            hook->on_native_thread_bound(thread);
    }

    // Ask a dedicated service to exit. The thread keeps draining its run queue
    // and returns from dispatch_loop() once the queue is empty. No-op on pool
    // workers and on the master service.
    void shutdown();

    void post(Fiber* fiber)
    {
        if (m_master) {
            m_master->post(fiber);
            return;
        }

        // A dedicated service that was asked to shut down still drains what is
        // already queued, so a fiber waking up on the timer while the queue is
        // drained is expected. Only a post arriving after the thread returned
        // from dispatch_loop() would strand the fiber forever. The owner is
        // responsible for quiescing its own producers before dropping the
        // service; report the violation instead of hiding it.
        if (m_dedicated && m_stopped != 0)
            on_post_after_shutdown(fiber);

        m_resumeList.putTail(fiber);

        // A drain already owns the scheduler and will pick a fiber posted here
        // up before it returns; waking the host would only add a redundant
        // native dispatch. runPending() clears m_draining and re-checks the
        // queue, so a post landing in this window cannot lose its wakeup.
        if (m_draining != 0)
            return;

        WaitHook* hook = m_wait_hook;
        if (hook)
            hook->wake(this);
        else
            m_sem.Post();
    }

    Fiber* next()
    {
        if (m_master)
            return m_master->next();

        Fiber* fb;

        m_idleWorkers.inc();

        m_sem.Wait();
        fb = m_resumeList.getHead();

        // A dedicated service exits once it was asked to shut down and every
        // queued fiber has been drained. The shared pool never stops.
        if (!fb && m_dedicated && m_shutting_down != 0) {
            m_idleWorkers.dec();
            return NULL;
        }

        if (m_idleWorkers.dec() == 0 && m_workers > 0) {
            if (m_workers.dec() < 0)
                m_workers.inc();
            else {
                m_idleWorkers.inc();
                Service* worker = new Service();
                worker->start();
            }
        }

        return fb;
    }

    Fiber* running()
    {
        return m_running;
    }

public:
    class switchConextCallback {
    public:
        virtual ~switchConextCallback()
        {
        }

    public:
        virtual void invoke() = 0;
    };

public:
    void switchConext()
    {
        // The GUI host context is the service main fiber: a fiber-level wait
        // there can never suspend (there is no other fiber to switch to), and
        // the old code only hid it behind a debug assert. Report it loudly in
        // every build instead of switching a fiber onto itself.
        if (m_guest && m_running == &m_main)
            on_host_context_block();

        ex_assert(m_running != &m_main);
        ex_assert(current() == this);

        switch_fiber(m_running->m_ctx, m_main.m_ctx);
    }

    void switchConext(switchConextCallback* cb)
    {
        m_cb = cb;
        switchConext();
    }

public:
    static bool use_thread;

    // Optional global switch observer (see SwitchHook).  Set once at start up,
    // read on every switch, never owned by the service.
    static atomic_ptr<SwitchHook> s_switch_hook;

private:
    static void fiber_proc(fiber_func func, Fiber* fb);

    // Capture the stack this service thread is running on (the main fiber keeps
    // using the native stack) and announce the bound thread to the switch hook.
    void bind_main_stack();

    void on_post_after_shutdown(Fiber* fiber);

    // Shared by dispatch_loop() and runPending(): finish the previous
    // suspension and run one fiber, without deciding where the fiber came from.
    void before_next(Fiber* last);
    void run_fiber(Fiber* fb);

    void on_host_context_block();

private:
    Service* m_master;

    Fiber m_main;

    Fiber* m_running;
    switchConextCallback* m_cb;

    exlib::atomic m_workers;
    exlib::atomic m_idleWorkers;
    // m_dedicated is immutable after construction; m_shutting_down is set by
    // whoever asks a dedicated service to exit, m_stopped once the thread left
    // dispatch_loop() and will not run another fiber.
    bool m_dedicated = false;
    exlib::atomic m_shutting_down;
    exlib::atomic m_stopped;
    LockedList<Fiber> m_resumeList;
    OSSemaphore m_sem;

    // Guest mode (attachCurrentThread): the main fiber is the native host
    // context, fibers are drained by runPending() from the host event loop.
    bool m_guest = false;
    exlib::atomic m_draining;
    // Last fiber that ran, so notify_suspended() survives a return to the host.
    Fiber* m_last = NULL;
    atomic_ptr<WaitHook> m_wait_hook;
};
}
