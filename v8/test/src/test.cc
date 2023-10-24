

#define main _main
#include "src/init/setup-isolate-full.cc"
#include "src/snapshot/snapshot-empty.cc"
#include "src/snapshot/mksnapshot.cc"
#undef main

#include "exlib/include/service.h"
#include "exlib/include/qstring.h"
#include "include/v8-version.h"

static exlib::Thread_base* proc;

void fiber_proc(void* p)
{
    exlib::string fname;

#if V8_TARGET_ARCH_X64
    fname = "x64";
#elif V8_TARGET_ARCH_IA32
    fname = "ia32";
#elif V8_TARGET_ARCH_ARM64
    fname = "arm64";
#elif V8_TARGET_ARCH_ARM
    fname = "arm";
#elif V8_TARGET_ARCH_MIPS64
    fname = "mips64";
#elif V8_TARGET_ARCH_PPC64
    fname = "ppc64";
#elif V8_TARGET_ARCH_RISCV64
    fname = "riscv64";
#elif V8_TARGET_ARCH_S390
    fname = "s390";
#elif V8_TARGET_ARCH_LOONG64
    fname = "loong64";
#endif

#ifdef Windows
    fname += "-Windows";
#elif defined(Linux)
    fname += "-Linux";
#elif defined(FreeBSD)
    fname += "-FreeBSD";
#elif defined(Darwin)
    fname += "-Darwin";
#endif

#ifdef Windows
    exlib::string embedded_fname = "embedded-" + fname + ".asm";
#else
    exlib::string embedded_fname = "embedded-" + fname + ".S";
#endif

    exlib::string snapshot_fname = "snapshot-" + fname + ".cc";
    exlib::string arg1 = "--startup_src=" + snapshot_fname;
    exlib::string arg2 = "--embedded-src=" + embedded_fname;

    char* args[3] = {
        (char*)p, arg1.c_buffer(), arg2.c_buffer()
    };

    _main(3, args);

    printf("embedded file '%s' generated! \n", embedded_fname.c_str());
    printf("snapshot file '%s' generated! \n", snapshot_fname.c_str());
    _exit(0);
}

int main(int argc, char** argv)
{
    exlib::Service::use_thread = true;

    exlib::Service::init(3);
    exlib::Service::CreateFiber(fiber_proc, argv[0], 128 * 1024, NULL, &proc);
    exlib::Service::dispatch();

    return 0;
}