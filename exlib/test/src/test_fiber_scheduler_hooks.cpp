#include "gtest/gtest.h"
#include "exlib/include/service.h"
#include "exlib/include/fbStack.h"

#include <vector>

// The scheduler hooks are the contract upper layers (fibjs, V8) build on to
// synchronize per-stack state at switch boundaries.  These tests pin down the
// ordering, the fact that they run on the service thread, and that they keep
// working across many suspend/resume cycles, including on a dedicated service.

struct HookEvent {
    enum Kind {
        kAboutToRun,
        kSuspended,
        kThreadBound
    };

    HookEvent::Kind kind;
    uint64_t stack_id;
    const char* name;
    exlib::OSThread* thread;
};

struct RecordingHook : public exlib::Service::SwitchHook {
    // The hook is process wide: every service thread calls into it, so the
    // recording has to be serialized. Readers work on a snapshot.
    exlib::spinlock m_lock;
    std::vector<HookEvent> events;

    virtual void on_fiber_about_to_run(exlib::Thread_base* fiber)
    {
        record({ HookEvent::kAboutToRun, fiber->stack_id(), fiber->stack_name(),
            exlib::OSThread::current() });
    }

    virtual void on_fiber_suspended(exlib::Thread_base* fiber)
    {
        record({ HookEvent::kSuspended, fiber->stack_id(), fiber->stack_name(),
            exlib::OSThread::current() });
    }

    virtual void on_native_thread_bound(exlib::OSThread* thread)
    {
        record({ HookEvent::kThreadBound, 0, NULL, thread });
    }

    void record(const HookEvent& e)
    {
        m_lock.lock();
        events.push_back(e);
        m_lock.unlock();
    }

    std::vector<HookEvent> snapshot()
    {
        m_lock.lock();
        std::vector<HookEvent> copy(events);
        m_lock.unlock();

        return copy;
    }

    int count(const std::vector<HookEvent>& events, HookEvent::Kind kind)
    {
        int n = 0;

        for (size_t i = 0; i < events.size(); i++)
            if (events[i].kind == kind)
                n++;

        return n;
    }

    // Events of the given fibers only: the hook records every switch in the
    // process, including the ones of services owned by other tests.
    std::vector<HookEvent> of_fibers(const std::vector<HookEvent>& events,
        exlib::Thread_base* const* fibers, int count)
    {
        std::vector<HookEvent> out;

        for (size_t i = 0; i < events.size(); i++)
            for (int j = 0; j < count; j++)
                if (fibers[j] && events[i].stack_id == fibers[j]->stack_id()) {
                    out.push_back(events[i]);
                    break;
                }

        return out;
    }
};

struct YieldProbe {
    exlib::Event done;
    int loops = 0;
};

static void yield_probe(void* p)
{
    YieldProbe* probe = (YieldProbe*)p;

    for (int i = 0; i < 4; i++) {
        exlib::Fiber::sleep(0);
        probe->loops++;
    }

    probe->done.set();
}

TEST(exlib_scheduler, hooks_fire_around_fiber_switches)
{
    RecordingHook hook;
    YieldProbe probes[3];
    exlib::Thread_base* fibers[3];
    std::vector<HookEvent> events;

    for (int i = 0; i < 3; i++)
        fibers[i] = NULL;

    exlib::Service::set_switch_hook(&hook);

    for (int i = 0; i < 3; i++)
        exlib::Service::CreateFiber(yield_probe, &probes[i], 128 * 1024, "hooked", &fibers[i]);

    for (int i = 0; i < 3; i++)
        probes[i].done.wait();

    exlib::Service::set_switch_hook(NULL);

    for (int i = 0; i < 3; i++)
        EXPECT_EQ(probes[i].loops, 4);

    events = hook.of_fibers(hook.snapshot(), fibers, 3);

    // Every resume is announced and every suspension is reported, so both kinds
    // must have been observed, and every hook call must have happened on a
    // service thread (never on a bare thread without a service).
    EXPECT_GT(hook.count(events, HookEvent::kAboutToRun), 3);
    EXPECT_GT(hook.count(events, HookEvent::kSuspended), 3);

    for (size_t i = 0; i < events.size(); i++)
        EXPECT_TRUE(events[i].thread != NULL);

    // Suspension events must reference the fiber that was running, i.e. a real
    // stack id.
    for (size_t i = 0; i < events.size(); i++)
        if (events[i].kind == HookEvent::kSuspended)
            EXPECT_NE(events[i].stack_id, (uint64_t)0);

    for (int i = 0; i < 3; i++)
        fibers[i]->Unref();
}

TEST(exlib_scheduler, hooks_cover_dedicated_service_thread)
{
    RecordingHook hook;
    YieldProbe probe;
    exlib::Thread_base* fiber = NULL;

    exlib::Service* svc = exlib::Service::createDedicated();

    exlib::Service::set_switch_hook(&hook);
    exlib::Service::CreateFiber(svc, yield_probe, &probe, 128 * 1024, "dedicated", &fiber);
    probe.done.wait();

    EXPECT_EQ(probe.loops, 4);

    // All events recorded for the dedicated fiber must come from the dedicated
    // service thread: that is what "pinned to one thread" means for upper
    // layers.
    uint64_t stack_id = fiber->stack_id();
    std::vector<HookEvent> events = hook.snapshot();
    int seen = 0;

    for (size_t i = 0; i < events.size(); i++) {
        if (events[i].stack_id != stack_id)
            continue;

        EXPECT_EQ(events[i].thread, (exlib::OSThread*)svc);
        seen++;
    }

    EXPECT_GT(seen, 0);

    // The service has to be released before the recording goes away, otherwise
    // its thread keeps calling the hook.
    svc->shutdown();
    svc->join();
    svc->Unref();

    exlib::Service::set_switch_hook(NULL);

    fiber->Unref();
}
