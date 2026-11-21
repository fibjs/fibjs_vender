#include "gtest/gtest.h"
#include "exlib/include/service.h"

#include <string.h>

// A dedicated service owns its run queue and exactly one OS thread. It is the
// building block used to pin all JS execution of one isolate to a single
// thread, so that N-API addons keeping state in OS thread-local storage see a
// stable thread.
//
// These tests pin down the two properties the isolate relies on:
//   1. a fiber posted to a dedicated service keeps running on that same thread
//      across suspensions,
//   2. shutdown() lets the thread drain what is already queued and exit.

static const int kProbeFibers = 4;
static const int kProbeLoops = 8;

struct DedicatedProbe {
    exlib::OSThread* first = NULL;
    int runs = 0;
    bool same_thread = true;
    // Set once the probe left the loop, so it is no longer parked in
    // Fiber::sleep(). The owner has to wait for this before shutting the
    // service down: a sleeping fiber is not queued on the service, shutdown()
    // cannot drain it, and its timer wakeup would be posted to a service that
    // is already gone.
    bool exited = false;
};

static void dedicated_probe(void* p)
{
    DedicatedProbe* probe = (DedicatedProbe*)p;

    for (int i = 0; i < kProbeLoops; i++) {
        exlib::OSThread* now = exlib::OSThread::current();

        if (probe->first == NULL)
            probe->first = now;
        else if (probe->first != now)
            probe->same_thread = false;

        probe->runs++;

        // Suspend and get resumed later by the service. On a single-threaded
        // service this must always be the very same thread.
        exlib::Fiber::sleep(1);
        if (exlib::OSThread::current() != now)
            probe->same_thread = false;
    }

    probe->exited = true;
}

TEST(exlib_service, dedicated_keeps_fibers_on_one_thread)
{
    DedicatedProbe probes[kProbeFibers];

    exlib::Service* svc = exlib::Service::createDedicated();

    for (int i = 0; i < kProbeFibers; i++)
        exlib::Service::CreateFiber(svc, dedicated_probe, &probes[i], 128 * 1024);

    // All probe fibers run on the dedicated thread, so they are only scheduled
    // cooperatively against each other; poll from the master service until they
    // are all done. Waiting for the last sleep to finish before shutdown()
    // keeps the timer thread from waking a fiber of a service that is gone.
    for (;;) {
        int done = 0;

        for (int i = 0; i < kProbeFibers; i++) {
            if (probes[i].exited)
                done++;
        }

        if (done == kProbeFibers)
            break;

        exlib::Fiber::sleep(1);
    }

    for (int i = 0; i < kProbeFibers; i++) {
        EXPECT_TRUE(probes[i].same_thread);
        EXPECT_EQ(probes[i].runs, kProbeLoops);
        // The fibers ran on the dedicated service's own thread.
        EXPECT_EQ(probes[i].first, (exlib::OSThread*)svc);
    }

    svc->shutdown();
    svc->join();
    svc->Unref();
}

static volatile int s_shutdown_probe_runs = 0;

static void shutdown_probe(void* p)
{
    s_shutdown_probe_runs++;
}

// shutdown() must not drop work that is already queued: the thread drains its
// run queue first, then returns from dispatch_loop().
TEST(exlib_service, dedicated_shutdown_drains_and_exits)
{
    s_shutdown_probe_runs = 0;

    exlib::Service* svc = exlib::Service::createDedicated();

    exlib::Service::CreateFiber(svc, shutdown_probe, NULL, 128 * 1024);
    svc->shutdown();

    // join() only returns once the thread left dispatch_loop(), which can only
    // happen after the queued fiber was drained.
    svc->join();

    EXPECT_EQ(s_shutdown_probe_runs, 1);

    svc->Unref();
}

// Repeated shutdown() must be harmless, and is_shutting_down() must report the
// state the service exposes to its owner.
TEST(exlib_service, dedicated_shutdown_is_idempotent)
{
    exlib::Service* svc = exlib::Service::createDedicated();

    EXPECT_TRUE(svc->is_dedicated());
    EXPECT_FALSE(svc->is_shutting_down());

    svc->shutdown();
    EXPECT_TRUE(svc->is_shutting_down());

    svc->shutdown();
    svc->join();
    svc->Unref();
}

// A dedicated service must leave the shared pool alone: fibers created through
// the default path keep working after one came and went.
TEST(exlib_service, dedicated_service_does_not_affect_the_pool)
{
    exlib::Service* svc = exlib::Service::createDedicated();

    svc->shutdown();
    svc->join();
    svc->Unref();

    // Still schedulable on the shared pool.
    exlib::Fiber::sleep(1);
}

// ---- guest mode: the native host thread drives the scheduler ---------------

struct GuestProbe {
    struct Hook : public exlib::Service::WaitHook {
        explicit Hook(GuestProbe* p)
            : owner(p)
        {
        }

        virtual void wake(exlib::Service*)
        {
            owner->wakes++;

            if (owner->sem)
                owner->sem->Post();
        }

        GuestProbe* owner;
    };

    explicit GuestProbe(int n)
        : fibers(n)
        , hook(this)
    {
    }

    exlib::Service* svc = NULL;
    // Posted by the hook so a test can behave like a host waiting in its native
    // loop for the next wakeup.
    exlib::OSSemaphore* sem = NULL;
    int fibers;
    int runs = 0;
    int wakes = 0;
    bool same_thread = true;
    bool draining_in_fiber = false;
    bool reenter_called = false;
    bool reenter_result = false;
    Hook hook;
};

static void guest_fiber(void* p)
{
    GuestProbe* probe = (GuestProbe*)p;

    if (exlib::OSThread::current() != (exlib::OSThread*)probe->svc)
        probe->same_thread = false;

    probe->runs++;
}

static void guest_reenter_fiber(void* p)
{
    GuestProbe* probe = (GuestProbe*)p;

    probe->runs++;
    probe->reenter_called = true;
    // A drain already owns the scheduler: a nested call reports "nothing
    // claimed" so the host does not re-arm its wakeup source.
    probe->reenter_result = probe->svc->runPending(1);
}

class GuestThread : public exlib::OSThread {
public:
    enum Mode {
        kPostAfterAttach,
        kPostBeforeAttach
    };

    GuestThread(GuestProbe* p, Mode mode)
        : m_p(p)
        , m_mode(mode)
    {
    }

    virtual void Run()
    {
        m_p->svc = exlib::Service::createDedicatedUnstarted();

        if (m_mode == kPostBeforeAttach)
            post_all();

        m_p->svc->attachCurrentThread();
        m_p->svc->setWaitHook(&m_p->hook);

        if (m_mode == kPostAfterAttach)
            post_all();

        // A small budget forces several drains; no fiber may be lost at a
        // budget boundary.
        while (m_p->svc->runPending(1))
            ;
    }

private:
    void post_all()
    {
        for (int i = 0; i < m_p->fibers; i++)
            exlib::Service::CreateFiber(m_p->svc, guest_fiber, m_p, 128 * 1024);
    }

    GuestProbe* m_p;
    Mode m_mode;
};

// Fibers run on the attached host thread, and every resumable fiber is drained
// exactly once even with budget == 1.
TEST(exlib_service, guest_run_pending_drains_on_host_thread)
{
    GuestProbe probe(5);

    GuestThread* t = new GuestThread(&probe, GuestThread::kPostAfterAttach);
    t->Ref(); // owner reference: the runner deletes itself when its thread exits
    t->start();
    t->join();
    t->Unref();

    EXPECT_EQ(probe.runs, 5);
    EXPECT_TRUE(probe.same_thread);
    // One wake per CreateFiber(), all through the hook (the semaphore is unused
    // in guest mode).
    EXPECT_EQ(probe.wakes, 5);
}

// A fiber posted before attachCurrentThread() has no hook yet: it parks in the
// run queue and the first unconditional runPending() must pick it up.
TEST(exlib_service, guest_first_drain_picks_up_pre_attach_fibers)
{
    GuestProbe probe(3);

    GuestThread* t = new GuestThread(&probe, GuestThread::kPostBeforeAttach);
    t->Ref();
    t->start();
    t->join();
    t->Unref();

    EXPECT_EQ(probe.runs, 3);
    EXPECT_TRUE(probe.same_thread);
    EXPECT_EQ(probe.wakes, 0);
}

// runPending() scheduled from inside a fiber (a nested native loop in the real
// host) must be refused without touching the scheduler state.
TEST(exlib_service, guest_run_pending_refuses_reentry)
{
    GuestProbe probe(0);

    class ReenterThread : public exlib::OSThread {
    public:
        explicit ReenterThread(GuestProbe* p)
            : m_p(p)
        {
        }

        virtual void Run()
        {
            m_p->svc = exlib::Service::createDedicatedUnstarted();
            m_p->svc->attachCurrentThread();
            m_p->svc->setWaitHook(&m_p->hook);

            exlib::Service::CreateFiber(m_p->svc, guest_reenter_fiber, m_p, 128 * 1024);

            while (m_p->svc->runPending(64))
                ;
        }

    private:
        GuestProbe* m_p;
    };

    ReenterThread* t = new ReenterThread(&probe);
    t->Ref();
    t->start();
    t->join();
    t->Unref();

    EXPECT_TRUE(probe.reenter_called);
    EXPECT_FALSE(probe.reenter_result);
    EXPECT_EQ(probe.runs, 1);
}

static void guest_nested_post(void* p)
{
    GuestProbe* probe = (GuestProbe*)p;

    probe->runs++;

    // Posted while the drain owns the scheduler: no host wakeup is needed, the
    // running drain must still execute it.
    exlib::Service::CreateFiber(probe->svc, guest_fiber, probe, 128 * 1024);
}

// Fibers posted from inside a drain are picked up by the same drain without an
// extra host wakeup (the host only sees the initial post).
TEST(exlib_service, guest_post_during_drain_runs_without_wake)
{
    GuestProbe probe(0);

    class NestedThread : public exlib::OSThread {
    public:
        explicit NestedThread(GuestProbe* p)
            : m_p(p)
        {
        }

        virtual void Run()
        {
            m_p->svc = exlib::Service::createDedicatedUnstarted();
            m_p->svc->attachCurrentThread();
            m_p->svc->setWaitHook(&m_p->hook);

            exlib::Service::CreateFiber(m_p->svc, guest_nested_post, m_p, 128 * 1024);

            while (m_p->svc->runPending(1))
                ;
        }

    private:
        GuestProbe* m_p;
    };

    NestedThread* t = new NestedThread(&probe);
    t->Ref();
    t->start();
    t->join();
    t->Unref();

    EXPECT_EQ(probe.runs, 2);
    EXPECT_TRUE(probe.same_thread);
    EXPECT_EQ(probe.wakes, 1);
}

// ---- concurrent producers: no lost wakeups --------------------------------

static const int kStressProducers = 4;
static const int kStressPerProducer = 100;
static const int kStressTotal = kStressProducers * kStressPerProducer;

struct GuestStress {
    struct Hook : public exlib::Service::WaitHook {
        GuestStress* owner = NULL;

        virtual void wake(exlib::Service*)
        {
            owner->sem->Post();
        }
    };

    exlib::Service* svc = NULL;
    exlib::OSSemaphore* sem = NULL;
    int runs = 0;
    Hook hook;
};

static void guest_stress_fiber(void* p)
{
    // All guest fibers run on the attached host thread, so a plain counter is
    // enough; producers never touch it.
    ((GuestStress*)p)->runs++;
}

class GuestStressProducer : public exlib::OSThread {
public:
    GuestStressProducer(GuestStress* s, int count)
        : m_s(s)
        , m_count(count)
    {
    }

    virtual void Run()
    {
        for (int i = 0; i < m_count; i++)
            exlib::Service::CreateFiber(m_s->svc, guest_stress_fiber, m_s, 128 * 1024);
    }

private:
    GuestStress* m_s;
    int m_count;
};

class GuestStressHost : public exlib::OSThread {
public:
    explicit GuestStressHost(exlib::OSSemaphore* sem)
        : m_sem(sem)
    {
    }

    virtual void Run()
    {
        m_svc = exlib::Service::createDedicatedUnstarted();
        m_probe.svc = m_svc;
        m_probe.sem = m_sem;
        m_probe.hook.owner = &m_probe;

        m_svc->attachCurrentThread();
        m_svc->setWaitHook(&m_probe.hook);

        GuestStressProducer* producers[kStressProducers];
        for (int i = 0; i < kStressProducers; i++) {
            producers[i] = new GuestStressProducer(&m_probe, kStressPerProducer);
            producers[i]->Ref();
            producers[i]->start();
        }

        while (m_probe.runs < kStressTotal) {
            while (m_svc->runPending(64))
                ;

            if (m_probe.runs >= kStressTotal)
                break;

            // The queue is empty but producers may still be posting. A lost
            // wakeup shows up as a timeout instead of a hung test.
            if (!m_sem->TimedWait(5000))
                break;
        }

        for (int i = 0; i < kStressProducers; i++) {
            producers[i]->join();
            producers[i]->Unref();
        }

        while (m_svc->runPending(64))
            ;
    }

    int runs() const
    {
        return m_probe.runs;
    }

private:
    exlib::OSSemaphore* m_sem;
    exlib::Service* m_svc = NULL;
    GuestStress m_probe;
};

TEST(exlib_service, guest_concurrent_posts_never_lose_a_wakeup)
{
    exlib::OSSemaphore sem;
    GuestStressHost* t = new GuestStressHost(&sem);

    t->Ref();
    t->start();
    t->join();

    int runs = t->runs();
    t->Unref();

    EXPECT_EQ(runs, kStressTotal);
}

static void guest_quick_fiber(void* p)
{
    GuestProbe* probe = (GuestProbe*)p;

    if (exlib::OSThread::current() != (exlib::OSThread*)probe->svc)
        probe->same_thread = false;

    probe->runs++;
}

static void guest_drain_flag_fiber(void* p)
{
    GuestProbe* probe = (GuestProbe*)p;

    probe->draining_in_fiber = probe->svc->is_guest_draining();
    probe->runs++;
}

static void guest_switch_fiber(void* p)
{
    GuestProbe* probe = (GuestProbe*)p;

    if (exlib::OSThread::current() != (exlib::OSThread*)probe->svc)
        probe->same_thread = false;

    probe->runs++;
}

// Yields three times (the resume is queued on the same drain) and then sleeps
// (the resume is posted from the timer thread through the wake hook).
static void guest_yield_current()
{
    ((exlib::Fiber*)exlib::Thread_base::current())->yield();
}

static void guest_yield_sleep_fiber(void* p)
{
    GuestProbe* probe = (GuestProbe*)p;

    if (exlib::OSThread::current() != (exlib::OSThread*)probe->svc)
        probe->same_thread = false;

    probe->draining_in_fiber = probe->svc->is_guest_draining();

    for (int i = 0; i < 3; i++) {
        guest_yield_current();

        if (exlib::OSThread::current() != (exlib::OSThread*)probe->svc)
            probe->same_thread = false;
    }

    exlib::Fiber::sleep(1);

    if (exlib::OSThread::current() != (exlib::OSThread*)probe->svc)
        probe->same_thread = false;

    probe->runs++;
}

// budget == 0 must report "more work" without dequeuing (and therefore without
// dropping) anything.
TEST(exlib_service, guest_budget_zero_keeps_the_queue)
{
    GuestProbe probe(2);

    class T : public exlib::OSThread {
    public:
        explicit T(GuestProbe* p)
            : m_p(p)
        {
        }

        virtual void Run()
        {
            m_p->svc = exlib::Service::createDedicatedUnstarted();
            m_p->svc->attachCurrentThread();
            m_p->svc->setWaitHook(&m_p->hook);

            exlib::Service::CreateFiber(m_p->svc, guest_quick_fiber, m_p, 128 * 1024, "guest-quick");
            exlib::Service::CreateFiber(m_p->svc, guest_quick_fiber, m_p, 128 * 1024, "guest-quick");

            m_more = m_p->svc->runPending(0);
            m_after_zero = m_p->runs;

            while (m_p->svc->runPending(64))
                ;
        }

        bool more() const { return m_more; }
        int after_zero() const { return m_after_zero; }

    private:
        GuestProbe* m_p;
        bool m_more = false;
        int m_after_zero = -1;
    };

    T* t = new T(&probe);
    t->Ref();
    t->start();
    t->join();

    bool more = t->more();
    int after_zero = t->after_zero();
    t->Unref();

    EXPECT_TRUE(more);
    EXPECT_EQ(after_zero, 0);
    EXPECT_EQ(probe.runs, 2);
}

// Each drain runs at most `budget` fibers and leaves the rest queued.
TEST(exlib_service, guest_budget_limits_each_drain)
{
    GuestProbe probe(5);

    class T : public exlib::OSThread {
    public:
        explicit T(GuestProbe* p)
            : m_p(p)
        {
        }

        virtual void Run()
        {
            m_p->svc = exlib::Service::createDedicatedUnstarted();
            m_p->svc->attachCurrentThread();
            m_p->svc->setWaitHook(&m_p->hook);

            for (int i = 0; i < m_p->fibers; i++)
                exlib::Service::CreateFiber(m_p->svc, guest_quick_fiber, m_p, 128 * 1024, "guest-quick");

            while (m_p->svc->runPending(2)) {
                note_delta();
                m_last = m_p->runs;
            }
            note_delta();
        }

        int max_delta() const { return m_max_delta; }

    private:
        void note_delta()
        {
            int delta = m_p->runs - m_last;

            if (delta > m_max_delta)
                m_max_delta = delta;
        }

        GuestProbe* m_p;
        int m_last = 0;
        int m_max_delta = 0;
    };

    T* t = new T(&probe);
    t->Ref();
    t->start();
    t->join();

    int max_delta = t->max_delta();
    t->Unref();

    EXPECT_EQ(probe.runs, 5);
    EXPECT_EQ(max_delta, 2);
}

// A yield re-queues on the same drain; a sleep is resumed from the timer thread
// with no drain running and must arrive through the wake hook.
TEST(exlib_service, guest_yield_and_sleep_wake_through_hook)
{
    GuestProbe probe(1);
    exlib::OSSemaphore sem;
    probe.sem = &sem;

    class T : public exlib::OSThread {
    public:
        T(GuestProbe* p, exlib::OSSemaphore* sem)
            : m_p(p)
            , m_sem(sem)
        {
        }

        virtual void Run()
        {
            m_p->svc = exlib::Service::createDedicatedUnstarted();
            m_p->svc->attachCurrentThread();
            m_p->svc->setWaitHook(&m_p->hook);

            exlib::Service::CreateFiber(m_p->svc, guest_yield_sleep_fiber, m_p, 128 * 1024, "guest-sleepy");

            while (m_p->runs == 0) {
                while (m_p->svc->runPending(64))
                    ;

                if (m_p->runs)
                    break;

                // Like a host blocked in its native loop; a lost wakeup is a
                // timeout instead of a hang.
                if (!m_sem->TimedWait(2000))
                    break;
            }

            while (m_p->svc->runPending(64))
                ;
        }

    private:
        GuestProbe* m_p;
        exlib::OSSemaphore* m_sem;
    };

    T* t = new T(&probe, &sem);
    t->Ref();
    t->start();
    t->join();
    t->Unref();

    EXPECT_EQ(probe.runs, 1);
    EXPECT_TRUE(probe.same_thread);
    EXPECT_TRUE(probe.draining_in_fiber);
    EXPECT_GE(probe.wakes, 1);
}

// is_guest_draining() is true inside the drain (from a JS fiber) and false on
// the host between drains; the host uses it to refuse GUI dispatch on a nested
// native loop.
TEST(exlib_service, guest_is_draining_flag)
{
    GuestProbe probe(1);

    class T : public exlib::OSThread {
    public:
        explicit T(GuestProbe* p)
            : m_p(p)
        {
        }

        virtual void Run()
        {
            m_p->svc = exlib::Service::createDedicatedUnstarted();
            m_p->svc->attachCurrentThread();
            m_p->svc->setWaitHook(&m_p->hook);

            exlib::Service::CreateFiber(m_p->svc, guest_drain_flag_fiber, m_p, 128 * 1024, "guest-drain");

            m_before = m_p->svc->is_guest_draining();
            while (m_p->svc->runPending(64))
                ;
            m_after = m_p->svc->is_guest_draining();
        }

        bool before() const { return m_before; }
        bool after() const { return m_after; }

    private:
        GuestProbe* m_p;
        bool m_before = true;
        bool m_after = true;
    };

    T* t = new T(&probe);
    t->Ref();
    t->start();
    t->join();

    bool before = t->before();
    bool after = t->after();
    t->Unref();

    EXPECT_FALSE(before);
    EXPECT_FALSE(after);
    EXPECT_TRUE(probe.draining_in_fiber);
    EXPECT_EQ(probe.runs, 1);
}

// ---- switch hooks see guest fibers -----------------------------------------

struct CountingSwitchHook : public exlib::Service::SwitchHook {
    int about = 0;
    int suspended = 0;
    int bound = 0;
    exlib::OSThread* bound_thread = NULL;

    void reset()
    {
        about = 0;
        suspended = 0;
        bound = 0;
        bound_thread = NULL;
    }

    static bool is_probe(exlib::Thread_base* fb)
    {
        // Fiber names are truncated to 15 characters by Fiber::set_name().
        return fb && fb->stack_desc().debug_name
            && !strcmp(fb->stack_desc().debug_name, "guest-sw");
    }

    virtual void on_fiber_about_to_run(exlib::Thread_base* fiber)
    {
        if (is_probe(fiber))
            about++;
    }

    virtual void on_fiber_suspended(exlib::Thread_base* fiber)
    {
        if (is_probe(fiber))
            suspended++;
    }

    virtual void on_native_thread_bound(exlib::OSThread* thread)
    {
        bound++;
        bound_thread = thread;
    }
};

// Static storage: the hook can be read by pool workers after the test resets
// it, so it must never be destroyed.
static CountingSwitchHook s_switch_counters;

TEST(exlib_service, guest_switch_hooks_see_every_guest_fiber)
{
    GuestProbe probe(3);
    s_switch_counters.reset();

    exlib::Service::set_switch_hook(&s_switch_counters);

    class T : public exlib::OSThread {
    public:
        explicit T(GuestProbe* p)
            : m_p(p)
        {
        }

        virtual void Run()
        {
            m_p->svc = exlib::Service::createDedicatedUnstarted();
            m_p->svc->attachCurrentThread();
            m_p->svc->setWaitHook(&m_p->hook);

            for (int i = 0; i < m_p->fibers; i++)
                exlib::Service::CreateFiber(m_p->svc, guest_switch_fiber, m_p, 128 * 1024, "guest-sw");

            while (m_p->svc->runPending(64))
                ;
        }

        exlib::Service* svc() const { return m_p->svc; }

    private:
        GuestProbe* m_p;
    };

    T* t = new T(&probe);
    t->Ref();
    t->start();
    t->join();

    exlib::Service* svc = t->svc();
    t->Unref();

    exlib::Service::set_switch_hook(NULL);

    EXPECT_EQ(probe.runs, 3);
    EXPECT_EQ(s_switch_counters.about, 3);
    EXPECT_EQ(s_switch_counters.suspended, 3);
    EXPECT_GE(s_switch_counters.bound, 1);
    EXPECT_EQ(s_switch_counters.bound_thread, (exlib::OSThread*)svc);
}

// Two guest services on two different threads must not interfere: each hook
// gets its own wakeups and each fiber stays on its own thread.
TEST(exlib_service, guest_two_services_are_independent)
{
    GuestProbe p1(2), p2(2);
    exlib::OSSemaphore s1, s2;
    p1.sem = &s1;
    p2.sem = &s2;

    class T : public exlib::OSThread {
    public:
        T(GuestProbe* p, exlib::OSSemaphore* sem)
            : m_p(p)
            , m_sem(sem)
        {
        }

        virtual void Run()
        {
            m_p->svc = exlib::Service::createDedicatedUnstarted();
            m_p->svc->attachCurrentThread();
            m_p->svc->setWaitHook(&m_p->hook);

            for (int i = 0; i < m_p->fibers; i++)
                exlib::Service::CreateFiber(m_p->svc, guest_quick_fiber, m_p, 128 * 1024, "guest-two");

            while (m_p->runs < m_p->fibers) {
                while (m_p->svc->runPending(64))
                    ;

                if (m_p->runs >= m_p->fibers)
                    break;

                if (!m_sem->TimedWait(2000))
                    break;
            }
        }

    private:
        GuestProbe* m_p;
        exlib::OSSemaphore* m_sem;
    };

    T* t1 = new T(&p1, &s1);
    T* t2 = new T(&p2, &s2);

    t1->Ref();
    t2->Ref();
    t1->start();
    t2->start();
    t1->join();
    t2->join();
    t1->Unref();
    t2->Unref();

    EXPECT_EQ(p1.runs, 2);
    EXPECT_EQ(p2.runs, 2);
    EXPECT_TRUE(p1.same_thread);
    EXPECT_TRUE(p2.same_thread);
    EXPECT_NE(p1.svc, p2.svc);
}

// setWaitHook() can be replaced at runtime; only the hook in place at post time
// is called.
TEST(exlib_service, guest_wait_hook_can_be_replaced)
{
    GuestProbe a(0), b(0);

    class T : public exlib::OSThread {
    public:
        T(GuestProbe* a, GuestProbe* b)
            : m_a(a)
            , m_b(b)
        {
        }

        virtual void Run()
        {
            m_a->svc = exlib::Service::createDedicatedUnstarted();
            m_a->svc->attachCurrentThread();

            m_a->svc->setWaitHook(&m_a->hook);
            exlib::Service::CreateFiber(m_a->svc, guest_quick_fiber, m_a, 128 * 1024, "guest-hook");
            m_wakes_a = m_a->wakes;

            m_a->svc->setWaitHook(&m_b->hook);
            exlib::Service::CreateFiber(m_a->svc, guest_quick_fiber, m_a, 128 * 1024, "guest-hook");
            m_wakes_b = m_b->wakes;

            while (m_a->svc->runPending(64))
                ;
        }

        int wakes_a() const { return m_wakes_a; }
        int wakes_b() const { return m_wakes_b; }

    private:
        GuestProbe* m_a;
        GuestProbe* m_b;
        int m_wakes_a = 0;
        int m_wakes_b = 0;
    };

    T* t = new T(&a, &b);
    t->Ref();
    t->start();
    t->join();

    int wakes_a = t->wakes_a();
    int wakes_b = t->wakes_b();
    t->Unref();

    EXPECT_EQ(a.runs, 2);
    EXPECT_EQ(wakes_a, 1);
    EXPECT_EQ(wakes_b, 1);
}

// A fiber-level wait on the guest main fiber (the native host context) cannot
// suspend: it must abort with a readable diagnostic instead of switching a
// fiber onto itself.
TEST(exlib_service, guest_host_context_rejects_fiber_waits)
{
    EXPECT_DEATH(
        {
            exlib::Service* svc = exlib::Service::createDedicatedUnstarted();
            svc->attachCurrentThread();

            exlib::Event ev;
            ev.wait();
        },
        "BLOCKING WAIT ON THE SERVICE HOST CONTEXT");
}
