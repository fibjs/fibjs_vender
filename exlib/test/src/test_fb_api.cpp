#include "gtest/gtest.h"
#include "exlib/include/fb_api.h"

TEST(exlib_fb_api, convert_fiber)
{
    // get current context info by `exlib::convert_fiber`
    void* ctx = exlib::convert_fiber(NULL);
    EXPECT_NE(ctx, nullptr);

    exlib::delete_fiber(ctx);

    // after deallocation, pointer's still here
    EXPECT_NE(ctx, nullptr);
}

static void* currentCtx = nullptr;
static void* ctxToBeTested = nullptr;

static void fiber_plusplus(void* p)
{
    int* cnt = (int*)p;
    (*cnt)++;
    // you MUST switch fiber back to where this proc switched from
    exlib::switch_fiber(ctxToBeTested, currentCtx);
};
TEST(exlib_fb_api, use_fiber)
{
    int a = 0;
    currentCtx = exlib::convert_fiber(NULL);
    ctxToBeTested = exlib::create_fiber(128 * 1024, fiber_plusplus, &a);

    EXPECT_NE(ctxToBeTested, nullptr);

    // ctx haven't been switched to
    EXPECT_EQ(a, 0);
    exlib::switch_fiber(currentCtx, ctxToBeTested);

    // context switched, execution taken
    EXPECT_EQ(a, 1);

    exlib::delete_fiber(currentCtx);
    exlib::delete_fiber(ctxToBeTested);

    EXPECT_NE(currentCtx, nullptr);
    EXPECT_NE(ctxToBeTested, nullptr);
}