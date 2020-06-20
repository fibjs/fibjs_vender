#include "gtest/gtest.h"
#include "exlib/include/service.h"
#include "jssdk.h"

void fiber_proc(void* p)
{
    _exit(RUN_ALL_TESTS());
}

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);

    js::setup_v8();
    // js::setup_spider();

    exlib::Service::init(3);
    exlib::Service::CreateFiber(fiber_proc, 0, 128 * 1024);
    exlib::Service::dispatch();
    return 0;
}