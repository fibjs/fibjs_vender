#include "gtest/gtest.h"
#include "exlib/include/service.h"
#include "jssdk.h"

void *fiber_proc(void *p)
{
	_exit(RUN_ALL_TESTS());
	return 0;
}

int main(int argc, char* argv[])
{
	testing::InitGoogleTest(&argc, argv);

	js::setup_v8();
	js::setup_SpiderMonkey();

	exlib::Service::init(3);
	exlib::Service::Create(fiber_proc, 0, 128 * 1024);
	exlib::Service::dispatch();
	return 0;
}