#include "gtest/gtest.h"
#include "exlib/include/service.h"
#include "exlib/include/fbStack.h"
#include "exlib/include/fb_api.h"

// Guard pages must turn a stack overflow into a fault at the overflowing store
// instead of silently corrupting whatever follows the stack in memory.
//
// POSIX only: the test forks a child, switches it onto a guarded fiber stack and
// overflows it.  The child installs a SIGSEGV handler that verifies the fault
// address really is inside the low guard page, then exits with a dedicated code
// so the parent can assert on it without depending on signal details.

#ifndef _WIN32

#include <signal.h>
#include <sys/wait.h>
#include <unistd.h>

static const exlib::StackDescriptor* s_guard_desc = NULL;
static volatile int s_fault_in_guard = 0;

static void overflow_proc(void* p)
{
    volatile char* sp = (volatile char*)exlib::stack_pointer_now();

    // Walk downwards far past the stack base: every write below it must land on
    // the guard page and fault.
    for (size_t i = 0; i < 8 * 1024 * 1024; i += 64)
        *(volatile char*)(sp - i) = 1;

    // Reaching here means the overflow was not caught.
    _exit(77);
}

static void guard_probe_handler(int sig, siginfo_t* si, void* uc)
{
    (void)sig;
    (void)uc;

    if (s_guard_desc && si && s_guard_desc->in_guard((uintptr_t)si->si_addr))
        s_fault_in_guard = 1;

    _exit(s_fault_in_guard ? 42 : 43);
}

TEST(exlib_stack, overflow_hits_guard_page)
{
    const size_t stack_size = 64 * 1024;
    exlib::StackDescriptor desc;
    void* ctx = exlib::create_fiber_named(stack_size, overflow_proc, NULL, "overflow", &desc);

    ASSERT_TRUE(ctx != NULL);
    ASSERT_TRUE(desc.valid());
    ASSERT_GT(desc.guard_low_size, (size_t)0);

    pid_t pid = fork();
    ASSERT_GE(pid, 0);

    if (pid == 0) {
        struct sigaction sa;

        s_guard_desc = &desc;

        memset(&sa, 0, sizeof sa);
        sa.sa_sigaction = guard_probe_handler;
        sa.sa_flags = SA_SIGINFO | SA_ONSTACK;
        sigemptyset(&sa.sa_mask);
        sigaction(SIGSEGV, &sa, NULL);
        sigaction(SIGBUS, &sa, NULL);

        // Continue in the child on the guarded stack.
        void* cur = exlib::convert_fiber(NULL);
        exlib::switch_fiber(cur, ctx);

        _exit(78);
    }

    int status = 0;
    ASSERT_EQ(waitpid(pid, &status, 0), pid);

    if (WIFEXITED(status)) {
        int code = WEXITSTATUS(status);

        // 42: fault address was inside our low guard page (the expected result)
        // 43: faulted, but not through the guard (e.g. somewhere else)
        // 77: never faulted - the overflow silently succeeded
        // 78: switch_fiber returned
        EXPECT_EQ(code, 42) << "fiber stack overflow was not caught by the guard page";
    } else if (WIFSIGNALED(status)) {
        EXPECT_TRUE(WTERMSIG(status) == SIGSEGV || WTERMSIG(status) == SIGBUS)
            << "unexpected signal " << WTERMSIG(status);
    }

    exlib::delete_fiber(ctx);
}

TEST(exlib_stack, guard_boundaries_are_exact)
{
    const size_t stack_size = 64 * 1024;
    exlib::StackDescriptor desc;
    void* ctx = exlib::create_fiber_named(stack_size, overflow_proc, NULL, "bounds", &desc);

    ASSERT_TRUE(ctx != NULL);
    ASSERT_TRUE(desc.valid());

    // The last usable byte belongs to the stack, the first one below it to the
    // guard: this is exactly the boundary the overflow test relies on.
    EXPECT_TRUE(desc.contains(desc.stack_base));
    EXPECT_FALSE(desc.contains(desc.stack_base - 1));
    EXPECT_TRUE(desc.in_guard(desc.stack_base - 1));

    // The top of the stack is usable too.
    EXPECT_TRUE(desc.contains(desc.stack_start - 1));
    EXPECT_FALSE(desc.contains(desc.stack_start));

    exlib::delete_fiber(ctx);
}

#endif // !_WIN32
