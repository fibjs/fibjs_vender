#include "gtest/gtest.h"
#include "exlib/include/service.h"

const int kFiberMax = 10000;

static int s_fiber_noop_cnt = 0;
static void fiber_cnt(void* p)
{
    if (++s_fiber_noop_cnt < kFiberMax) {
        exlib::Service::CreateFiber(fiber_cnt, 0, 128 * 1024);
    }
}

TEST(exlib_fiber, counter_on_fiber)
{
    exlib::Service::CreateFiber(fiber_cnt, 0, 128 * 1024);
    EXPECT_LT(s_fiber_noop_cnt, kFiberMax);
    exlib::Fiber::sleep(10);

    while (s_fiber_noop_cnt < kFiberMax) {
        exlib::Fiber::sleep(1);
    }

    EXPECT_EQ(s_fiber_noop_cnt, kFiberMax);
}

exlib::fiber_local<int> s_tls_value;

TEST(exlib_fiber, tls)
{
    EXPECT_EQ(s_tls_value, 0);
    s_tls_value = 100;
    EXPECT_EQ(s_tls_value, 100);
    int* p = &s_tls_value;
    EXPECT_EQ(*p, 100);
}