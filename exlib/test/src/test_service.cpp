#include "gtest/gtest.h"
#include "exlib/include/service.h"

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
