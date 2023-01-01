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

exlib::fiber_local<int> s_tls_value(1010);

TEST(exlib_fiber, tls)
{
    EXPECT_EQ(s_tls_value, 1010);
    s_tls_value = 100;
    EXPECT_EQ(s_tls_value, 100);
    int* p = &s_tls_value;
    EXPECT_EQ(*p, 100);

    int v;

    v = s_tls_value++;
    EXPECT_EQ(v, 100);
    EXPECT_EQ(s_tls_value, 101);

    v = ++s_tls_value;
    EXPECT_EQ(v, 102);
    EXPECT_EQ(s_tls_value, 102);

    v = s_tls_value--;
    EXPECT_EQ(v, 102);
    EXPECT_EQ(s_tls_value, 101);

    v = --s_tls_value;
    EXPECT_EQ(v, 100);
    EXPECT_EQ(s_tls_value, 100);
}

struct TestStruct {
    intptr_t a;
    intptr_t b;
};

exlib::fiber_local<TestStruct> s_tls_value1({ 100, 200 });

TEST(exlib_fiber, tls_struct)
{
    TestStruct n = s_tls_value1;
    EXPECT_EQ(n.a, 100);
    EXPECT_EQ(n.b, 200);

    n.a = 101;
    n.b = 201;
    s_tls_value1 = n;

    TestStruct n1 = s_tls_value1;
    EXPECT_EQ(n1.a, 101);
    EXPECT_EQ(n1.b, 201);

    TestStruct* p = &s_tls_value1;
    EXPECT_EQ(p->a, 101);
    EXPECT_EQ(p->b, 201);
}

TestStruct s_ts({ 200, 300 });
exlib::fiber_local<TestStruct*> s_tls_value2(&s_ts);

TEST(exlib_fiber, tls_pointer)
{
    EXPECT_EQ(s_tls_value2->a, 200);
    EXPECT_EQ(s_tls_value2->b, 300);
}
