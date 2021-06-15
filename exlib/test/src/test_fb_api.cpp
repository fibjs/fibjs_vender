#include "gtest/gtest.h"
#include "exlib/include/fb_api.h"

#ifdef _WIN32
#include <windows.h>
#endif

void deleteFiberAddress(void* curFiberAddress)
{
#ifndef _WIN32
    exlib::delete_fiber(curFiberAddress);
#endif
}

TEST(exlib_fb_api, convert_fiber)
{
#ifndef _WIN32
    // get current context info by `exlib::convert_fiber`
    void* ctx = exlib::convert_fiber(NULL);
#else
    // but for win32, we have been in one fiber from test context
    void* ctx = GetCurrentFiber();
#endif
    EXPECT_NE(ctx, nullptr);
    deleteFiberAddress(ctx);

    // after deallocation, pointer's still here
    EXPECT_NE(ctx, nullptr);
}

void* convertFiberIfNotInFiber(void* param)
{
#ifndef _WIN32
    return exlib::convert_fiber(param);
#else
    void* fiberAddr = GetCurrentFiber();
    if (fiberAddr == NULL) {
        int err_code = GetLastError();
        printf("GetCurrentFiber error (%d)\n", err_code);
        return exlib::convert_fiber(param);
    }

    return fiberAddr;
#endif
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
    currentCtx = convertFiberIfNotInFiber(NULL);
    ctxToBeTested = exlib::create_fiber(128 * 1024, fiber_plusplus, &a);

    EXPECT_NE(ctxToBeTested, nullptr);

    // ctx haven't been switched to
    EXPECT_EQ(a, 0);
    exlib::switch_fiber(currentCtx, ctxToBeTested);

    // context switched, execution taken
    EXPECT_EQ(a, 1);

    deleteFiberAddress(currentCtx);
    exlib::delete_fiber(ctxToBeTested);

    EXPECT_NE(currentCtx, nullptr);
    EXPECT_NE(ctxToBeTested, nullptr);
}