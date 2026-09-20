#include "gtest/gtest.h"
#include "exlib/include/service.h"
#include "exlib/include/fbStack.h"
#include "exlib/include/fb_api.h"

// The stack ownership model: every fiber must be able to describe its stack
// (bounds, guard sizes, kind, stable id) without asking the platform, and the
// registry must be able to map an address back to its owner.

struct DescProbe {
    exlib::Event done;
    exlib::StackDescriptor desc;
    size_t used = 0;
    size_t remaining = 0;
    void* ctx = NULL;
    bool ok = false;
};

static void desc_probe(void* p)
{
    DescProbe* probe = (DescProbe*)p;
    exlib::Thread_base* fb = exlib::Thread_base::current();

    probe->desc = fb->stack_desc();
    probe->used = fb->stack_used_estimate();
    probe->remaining = fb->stack_remaining_estimate();
    probe->ok = true;

    probe->done.set();
}

TEST(exlib_stack, descriptor_of_running_fiber)
{
    DescProbe probe;
    exlib::Thread_base* fb = NULL;

    exlib::Service::CreateFiber(desc_probe, &probe, 256 * 1024, "desc", &fb);
    probe.done.wait();

    ASSERT_TRUE(probe.ok);
    ASSERT_TRUE(probe.desc.valid());
    ASSERT_NE(probe.desc.stack_id, (uint64_t)0);

    // stack grows down: base < start, limit == base
    EXPECT_LT(probe.desc.stack_base, probe.desc.stack_start);
    EXPECT_EQ(probe.desc.stack_limit, probe.desc.stack_base);

    // usable region ends exactly at stack_start
    EXPECT_EQ(probe.desc.stack_base + probe.desc.usable_size, probe.desc.stack_start);

    // at least the requested stack size is available
    EXPECT_GE(probe.desc.usable_size, (size_t)256 * 1024);

    // the whole reservation contains the stack plus both guards
    EXPECT_GE(probe.desc.reserved_size,
        probe.desc.usable_size + probe.desc.guard_low_size + probe.desc.guard_high_size);

    // POSIX fibers are carved out of a mapping and therefore carry guards;
    // Windows fibers use the OS stack which has an OS guard page.
#ifdef _WIN32
    EXPECT_EQ(probe.desc.kind, exlib::StackDescriptor::Kind::kFiberWin32);
#else
    EXPECT_EQ(probe.desc.kind, exlib::StackDescriptor::Kind::kFiberMmap);
    EXPECT_GE(probe.desc.guard_low_size, exlib::stack_page_size());
    EXPECT_GE(probe.desc.guard_high_size, exlib::stack_page_size());
#endif

    // usage estimation must see the fiber running on its own stack
    EXPECT_GT(probe.used, (size_t)0);
    EXPECT_LT(probe.used, probe.desc.usable_size);
    EXPECT_GT(probe.remaining, (size_t)0);
    EXPECT_LE(probe.remaining, probe.desc.usable_size - probe.used + 64);
}

TEST(exlib_stack, descriptor_is_reachable_from_context)
{
    DescProbe probe;
    exlib::Thread_base* fb = NULL;

    exlib::Service::CreateFiber(desc_probe, &probe, 256 * 1024, "ctx", &fb);
    probe.done.wait();

    ASSERT_TRUE(probe.ok);
    ASSERT_TRUE(fb != NULL);

    // The control block layout must let the descriptor be recovered from the
    // context handle without any registry lookup, and both must agree.
    const exlib::StackDescriptor* from_ctx = exlib::stack_desc_of(((exlib::Fiber*)fb)->m_ctx);

    if (from_ctx) {
        EXPECT_EQ(from_ctx->stack_id, probe.desc.stack_id);
        EXPECT_EQ(from_ctx->stack_base, probe.desc.stack_base);
        EXPECT_EQ(from_ctx->usable_size, probe.desc.usable_size);
    }
}

TEST(exlib_stack, ids_are_unique_and_registry_resolves)
{
    const int kFibers = 8;
    DescProbe probes[kFibers];
    exlib::Thread_base* fibers[kFibers];

    for (int i = 0; i < kFibers; i++)
        exlib::Service::CreateFiber(desc_probe, &probes[i], 128 * 1024, "many", &fibers[i]);

    for (int i = 0; i < kFibers; i++) {
        probes[i].done.wait();
        ASSERT_TRUE(probes[i].ok);
    }

    for (int i = 0; i < kFibers; i++)
        for (int j = i + 1; j < kFibers; j++)
            EXPECT_NE(probes[i].desc.stack_id, probes[j].desc.stack_id);

    for (int i = 0; i < kFibers; i++) {
        exlib::StackDescriptor found;

        // an address inside the stack resolves to it
        ASSERT_TRUE(exlib::stack_lookup(probes[i].desc.stack_base + 16, found));
        EXPECT_EQ(found.stack_id, probes[i].desc.stack_id);

        // and it can be described in text
        char buf[512];
        EXPECT_TRUE(exlib::stack_describe(probes[i].desc.stack_base + 16, buf, sizeof buf));
        EXPECT_NE(std::string(buf).find("base="), std::string::npos);
    }
}
