#include "exlib/include/osconfig.h"
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

#if defined(i386) && defined(Linux)

extern "C" void _atomic_load(int size, const void* ptr, void* ret, int memorder);

TEST(exlib_atomic, atomic_load)
{
    uint64_t a = 0xc0c0c0c0c0c0c0c0;
    uint64_t b;

    b = 0xffffffffffffffff;
    _atomic_load(sizeof(int8_t), &a, &b, __ATOMIC_RELAXED);
    GTEST_ASSERT_EQ(b, 0xffffffffffffffc0);

    b = 0xffffffffffffffff;
    _atomic_load(sizeof(int16_t), &a, &b, __ATOMIC_RELAXED);
    GTEST_ASSERT_EQ(b, 0xffffffffffffc0c0);

    b = 0xffffffffffffffff;
    _atomic_load(sizeof(int32_t), &a, &b, __ATOMIC_RELAXED);
    GTEST_ASSERT_EQ(b, 0xffffffffc0c0c0c0);

    b = 0xffffffffffffffff;
    _atomic_load(sizeof(int64_t), &a, &b, __ATOMIC_RELAXED);
    GTEST_ASSERT_EQ(b, 0xc0c0c0c0c0c0c0c0);
}

extern "C" void _atomic_store(size_t size, void* ptr, void* val, int memmodel);

TEST(exlib_atomic, atomic_save)
{
    uint64_t a = 0xc0c0c0c0c0c0c0c0;
    uint64_t b;

    b = 0xffffffffffffffff;
    _atomic_store(sizeof(int8_t), &b, &a, __ATOMIC_RELAXED);
    GTEST_ASSERT_EQ(b, 0xffffffffffffffc0);

    b = 0xffffffffffffffff;
    _atomic_store(sizeof(int16_t), &b, &a, __ATOMIC_RELAXED);
    GTEST_ASSERT_EQ(b, 0xffffffffffffc0c0);

    b = 0xffffffffffffffff;
    _atomic_store(sizeof(int32_t), &b, &a, __ATOMIC_RELAXED);
    GTEST_ASSERT_EQ(b, 0xffffffffc0c0c0c0);

    b = 0xffffffffffffffff;
    _atomic_store(sizeof(int64_t), &b, &a, __ATOMIC_RELAXED);
    GTEST_ASSERT_EQ(b, 0xc0c0c0c0c0c0c0c0);
}

#endif
