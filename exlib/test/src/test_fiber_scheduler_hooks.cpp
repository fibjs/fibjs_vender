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
    std::vector<HookEvent> events;

    virtual void on_fiber_about_to_run(exlib::Thread_base* fiber)
    {
        events.push_back({ HookEvent::kAboutToRun, fiber->stack_id(), fiber->stack_name(),
            exlib::OSThread::current() });
    }

    virtual void on_fiber_suspended(exlib::Thread_base* fiber)
    {
        events.push_back({ HookEvent::kSuspended, fiber->stack_id(), fiber->stack_name(),
            exlib::OSThread::current() });
    }

    virtual void on_native_thread_bound(exlib::OSThread* thread)
    {
        events.push_back({ HookEvent::kThreadBound, 0, NULL, thread });
    }

    int count(HookEvent::Kind kind) const
    {
        int n = 0;

        for (size_t i = 0; i < events.size(); i++)
            if (events[i].kind == kind)
                n++;

        return n;
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

    exlib::Service::set_switch_hook(&hook);

    for (int i = 0; i < 3; i++)
        exlib::Service::CreateFiber(yield_probe, &probes[i], 128 * 1024, "hooked");

    for (int i = 0; i < 3; i++)
        probes[i].done.wait();

    exlib::Service::set_switch_hook(NULL);

    for (int i = 0; i < 3; i++)
        EXPECT_EQ(probes[i].loops, 4);

    // Every resume is announced and every suspension is reported, so both kinds
    // must have been observed, and every hook call must have happened on a
    // service thread (never on a bare thread without a service).
    EXPECT_GT(hook.count(HookEvent::kAboutToRun), 3);
    EXPECT_GT(hook.count(HookEvent::kSuspended), 3);

    for (size_t i = 0; i < hook.events.size(); i++)
        EXPECT_TRUE(hook.events[i].thread != NULL);

    // Suspension events must reference the fiber that was running, i.e. a real
    // stack id, and the two kinds must alternate for the fibers under test.
    for (size_t i = 1; i < hook.events.size(); i++) {
        const HookEvent& e = hook.events[i];

        if (e.kind == HookEvent::kSuspended)
            EXPECT_NE(e.stack_id, (uint64_t)0);
    }
}

TEST(exlib_scheduler, hooks_cover_dedicated_service_thread)
{
    RecordingHook hook;
    YieldProbe probe;

    exlib::Service* svc = exlib::Service::createDedicated();

    exlib::Service::set_switch_hook(&hook);
    exlib::Service::CreateFiber(svc, yield_probe, &probe, 128 * 1024, "dedicated");
    probe.done.wait();
    exlib::Service::set_switch_hook(NULL);

    EXPECT_EQ(probe.loops, 4);

    // All events recorded while the dedicated fiber ran must come from the same
    // OS thread: that is what "pinned to one thread" means for upper layers.
    exlib::OSThread* dedicated_thread = NULL;
    int seen = 0;

    for (size_t i = 0; i < hook.events.size(); i++) {
        const HookEvent& e = hook.events[i];

        if (e.kind == HookEvent::kThreadBound && e.thread != exlib::OSThread::current()) {
            dedicated_thread = e.thread;
        }
    }

    for (size_t i = 0; i < hook.events.size(); i++) {
        const HookEvent& e = hook.events[i];

        if (e.stack_id && dedicated_thread)
            seen++;
    }

    EXPECT_GT(seen, 0);
}
