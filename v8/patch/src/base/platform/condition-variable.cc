
#include "src/base/platform/condition-variable.h"
#include "src/base/platform/time.h"
#include <exlib/include/fiber.h>

namespace v8 {
namespace base {

// Use reinterpret_cast to replace absl::CondVar with exlib::CondVar
#define _fiber_condvar(cv) (*(exlib::CondVar**)&(cv))
#define _fiber_locker(m) (*(exlib::Locker**)&(m))

ConditionVariable::ConditionVariable()
{
    _fiber_condvar(native_handle_) = new exlib::CondVar();
}

ConditionVariable::~ConditionVariable()
{
    delete _fiber_condvar(native_handle_);
}

void ConditionVariable::NotifyOne()
{
    _fiber_condvar(native_handle_)->notify_one();
}

void ConditionVariable::NotifyAll()
{
    _fiber_condvar(native_handle_)->notify_all();
}

void ConditionVariable::Wait(Mutex* mutex)
{
    mutex->AssertHeldAndUnmark();
    _fiber_condvar(native_handle_)->wait(*_fiber_locker(mutex->native_handle_));
    mutex->AssertUnheldAndMark();
}

bool ConditionVariable::WaitFor(Mutex* mutex, const TimeDelta& rel_time)
{
    mutex->AssertHeldAndUnmark();
    bool result = _fiber_condvar(native_handle_)->wait(
        *_fiber_locker(mutex->native_handle_), rel_time.InMicroseconds());
    mutex->AssertUnheldAndMark();

    return result;
}

}  // namespace base
}  // namespace v8
