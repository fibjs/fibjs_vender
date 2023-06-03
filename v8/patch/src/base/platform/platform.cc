#include <exlib/include/fiber.h>
#include "src/base/platform/platform.h"

namespace v8 {
namespace base {
    // static
    Stack::StackSlot Stack::GetStackStart()
    {
        exlib::Thread_base* _th = exlib::Thread_base::current();
        return _th->stack_start();
    }
} // namespace base
} // namespace v8
