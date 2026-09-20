#include "gtest/gtest.h"
#include "exlib/include/service.h"
#include "exlib/include/fbStack.h"

// A dedicated service drains its run queue before exiting.  These tests cover
// the shutdown edge: fibers that are queued but not yet started, fibers that are
// suspending while the owner asks the service to stop, and the descriptor of the
// service thread itself.

struct ShutdownProbe {
    exlib::Event done;
    exlib::atomic ran;
    exlib::atomic suspended;
};

static void shutdown_fiber(void* p)
{
    ShutdownProbe* probe = (ShutdownProbe*)p;

    for (int i = 0; i < 4; i++) {
        exlib::Fiber::sleep(0);
        probe->suspended.inc();
    }

    probe->ran.inc();
    probe->done.set();
}

TEST(exlib_service_shutdown, drains_fibers_queued_before_shutdown)
{
    const int kFibers = 8;
    ShutdownProbe probe;

    probe.ran = 0;
    probe.suspended = 0;

    exlib::Service* svc = exlib::Service::createDedicated();

    for (int i = 0; i < kFibers; i++)
        exlib::Service::CreateFiber(svc, shutdown_fiber, &probe, 128 * 1024, "drain");

    // Ask for shutdown while the fibers are still queued/running: they must all
    // complete, the service exits once the queue is empty.
    svc->shutdown();

    while (probe.ran.value() < kFibers)
        exlib::Fiber::sleep(1);

    EXPECT_EQ(probe.ran.value(), kFibers);
    EXPECT_GT(probe.suspended.value(), 0);

    // Everything is drained, so the service can be released instead of left
    // running for the rest of the process.
    svc->join();
    svc->Unref();
}

struct DescProbe {
    exlib::Event done;
    exlib::StackDescriptor desc;
    bool ok = false;
};

static void dedicated_desc_fiber(void* p)
{
    DescProbe* probe = (DescProbe*)p;

    probe->desc = exlib::Thread_base::current()->stack_desc();
    probe->ok = true;
    probe->done.set();
}

TEST(exlib_service_shutdown, service_thread_has_descriptor)
{
    exlib::Service* svc = exlib::Service::createDedicated();
    DescProbe probe;

    exlib::Service::CreateFiber(svc, dedicated_desc_fiber, &probe, 128 * 1024, "desc");

    probe.done.wait();

    ASSERT_TRUE(probe.ok);
    EXPECT_TRUE(probe.desc.valid());
    EXPECT_GT(probe.desc.usable_size, (size_t)0);
    EXPECT_NE(probe.desc.stack_id, (uint64_t)0);

    svc->shutdown();
    svc->join();
    svc->Unref();
}
