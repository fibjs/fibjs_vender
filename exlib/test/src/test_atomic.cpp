#include "gtest/gtest.h"
#include <atomic>

TEST(exlib_atomic, load)
{
    std::atomic<int32_t> a2(1000);
    int32_t b2 = std::atomic_load(&a2);
    GTEST_ASSERT_EQ(b2, 1000);

    std::atomic<double> a(0);
    double b = std::atomic_load(&a);
    GTEST_ASSERT_EQ(b, 0);

    std::atomic<double> a1(100000);
    double b1 = std::atomic_load(&a1);
    GTEST_ASSERT_EQ(b1, 100000);
}

TEST(exlib_atomic, compare_exchange)
{
    std::atomic<double> a(0);
    double n = 0;
    bool t = a.compare_exchange_weak(n, 100, std::memory_order_relaxed);
    GTEST_ASSERT_EQ(t, true);

    double b = std::atomic_load(&a);
    GTEST_ASSERT_EQ(b, 100);

    bool t1 = a.compare_exchange_weak(n, 1000, std::memory_order_relaxed);
    GTEST_ASSERT_EQ(t1, false);

    double b1 = std::atomic_load(&a);
    GTEST_ASSERT_EQ(b1, 100);
}
