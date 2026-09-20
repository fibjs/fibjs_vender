#include "gtest/gtest.h"
#include "exlib/include/service.h"
#include "exlib/include/fbStack.h"

// Stress the fiber lifecycle: high churn of short lived fibers, many
// suspend/resume cycles, TLS isolation between fibers and both service kinds.
// The point is not to be a benchmark but to keep the scheduler, the stack
// registry and the descriptor bookkeeping consistent under load.

static const int kChurnRounds = 20;
static const int kChurnFibers = 64;

static exlib::atomic s_churn_done;
static exlib::atomic s_churn_bad_stack;

static void churn_fiber(void* p)
{
    exlib::Thread_base* fb = exlib::Thread_base::current();
    const exlib::StackDescriptor& desc = fb->stack_desc();
    intptr_t expected = (intptr_t)p;

    if (!desc.valid() || !desc.contains(exlib::stack_pointer_now()))
        s_churn_bad_stack.inc();

    // A little work on the stack, then a few yields.
    volatile char buf[512];

    for (size_t i = 0; i < sizeof buf; i++)
        buf[i] = (char)expected;

    for (int i = 0; i < 3; i++)
        exlib::Fiber::sleep(0);

    for (size_t i = 0; i < sizeof buf; i++)
        if (buf[i] != (char)expected)
            s_churn_bad_stack.inc();

    s_churn_done.inc();
}

TEST(exlib_fiber_stress, churn_on_shared_service)
{
    s_churn_done = 0;
    s_churn_bad_stack = 0;

    for (int round = 0; round < kChurnRounds; round++)
        for (int i = 0; i < kChurnFibers; i++)
            exlib::Service::CreateFiber(churn_fiber, (void*)(intptr_t)(i + 1), 128 * 1024, "churn");

    while (s_churn_done.value() < kChurnRounds * kChurnFibers)
        exlib::Fiber::sleep(1);

    EXPECT_EQ(s_churn_bad_stack.value(), 0);

    // Registry bookkeeping must not leak entries without bounds: after the
    // churn every fiber is gone, so lookups of freed stacks must fail.
    // (Sampled: the registry is diagnostic state, not a hard guarantee.)
    exlib::StackDescriptor found;
    EXPECT_FALSE(exlib::stack_lookup(0x1000, found));
}

struct TlsProbe {
    exlib::Event done;
    int bad = 0;
};

static exlib::fiber_local<int> s_stress_tls(-1);

static void tls_probe(void* p)
{
    TlsProbe* probe = (TlsProbe*)p;
    intptr_t me = (intptr_t)p;

    s_stress_tls = (int)me;

    for (int i = 0; i < 5; i++) {
        exlib::Fiber::sleep(0);

        if (s_stress_tls != (int)me)
            probe->bad++;
    }

    probe->done.set();
}

TEST(exlib_fiber_stress, tls_stays_per_fiber_across_yields)
{
    const int kFibers = 32;
    TlsProbe probes[kFibers];

    for (int i = 0; i < kFibers; i++) {
        probes[i].bad = 0;
        exlib::Service::CreateFiber(tls_probe, &probes[i], 128 * 1024, "tls");
    }

    for (int i = 0; i < kFibers; i++) {
        probes[i].done.wait();
        EXPECT_EQ(probes[i].bad, 0);
    }
}

TEST(exlib_fiber_stress, churn_on_dedicated_service)
{
    const int kFibers = 32;
    s_churn_done = 0;
    s_churn_bad_stack = 0;

    exlib::Service* svc = exlib::Service::createDedicated();

    for (int i = 0; i < kFibers; i++)
        exlib::Service::CreateFiber(svc, churn_fiber, (void*)(intptr_t)(i + 1), 128 * 1024, "dedicated-churn");

    while (s_churn_done.value() < kFibers)
        exlib::Fiber::sleep(1);

    EXPECT_EQ(s_churn_bad_stack.value(), 0);
}

struct UsageProbe {
    exlib::Event done;
    size_t base_used = 0;
    size_t deep_used = 0;
    size_t remaining = 0;
    bool bad = false;
};

static void usage_recurse(int depth, UsageProbe* probe)
{
    volatile char pad[4096];

    for (size_t i = 0; i < sizeof pad; i += 512)
        pad[i] = (char)depth;

    if (depth > 0) {
        usage_recurse(depth - 1, probe);
    } else {
        exlib::Thread_base* fb = exlib::Thread_base::current();

        probe->deep_used = fb->stack_used_estimate();
        probe->remaining = fb->stack_remaining_estimate();
        probe->bad = !fb->stack_desc().contains(exlib::stack_pointer_now());
    }

    (void)pad[0];
}

static void usage_probe(void* p)
{
    UsageProbe* probe = (UsageProbe*)p;
    exlib::Thread_base* fb = exlib::Thread_base::current();

    probe->base_used = fb->stack_used_estimate();
    usage_recurse(16, probe);
    probe->done.set();
}

TEST(exlib_fiber_stress, stack_usage_grows_with_recursion)
{
    UsageProbe probe;

    exlib::Service::CreateFiber(usage_probe, &probe, 256 * 1024, "usage");
    probe.done.wait();

    EXPECT_FALSE(probe.bad);
    EXPECT_GT(probe.base_used, (size_t)0);
    EXPECT_GT(probe.deep_used, probe.base_used);
    EXPECT_LT(probe.deep_used, (size_t)256 * 1024);
    EXPECT_GT(probe.remaining, (size_t)0);
}
