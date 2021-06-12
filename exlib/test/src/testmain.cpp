#include "gtest/gtest.h"
#include "exlib/include/service.h"

void test_proc(void* p)
{
    _exit(RUN_ALL_TESTS());
}

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);

    exlib::Service::init(3);
    exlib::Service::CreateFiber(test_proc, 0, 128 * 1024);
    exlib::Service::dispatch();

    return 0;
}