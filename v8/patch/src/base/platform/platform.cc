#include <exlib/include/fiber.h>
#include "src/base/platform/platform.h"

namespace v8 {
namespace base {
    exlib::fiber_local<void*> thread_stack_start;

    // static
    Stack::StackSlot Stack::GetStackStartUnchecked()
    {
        exlib::Thread_base* _th = exlib::Thread_base::current();
        if (!thread_stack_start)
            thread_stack_start = _th;
        return _th->stack_start();
    }

    // static
    Stack::StackSlot Stack::GetStackStart()
    {
        DCHECK_IMPLIES(thread_stack_start != NULL,
            thread_stack_start == exlib::Thread_base::current());
        return GetStackStartUnchecked();
    }
} // namespace base
} // namespace v8
