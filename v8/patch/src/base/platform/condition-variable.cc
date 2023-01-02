
#include "src/base/platform/condition-variable.h"
#include "src/base/platform/time.h"
#include <exlib/include/fiber.h>

namespace v8 {
namespace base {

#define _native_handle (*(exlib::CondVar**)&native_handle_)

    ConditionVariable::ConditionVariable()
    {
        _native_handle = new exlib::CondVar();
    }

    ConditionVariable::~ConditionVariable()
    {
        delete _native_handle;
    }

    void ConditionVariable::NotifyOne()
    {
        _native_handle->notify_one();
    }

    void ConditionVariable::NotifyAll()
    {
        _native_handle->notify_all();
    }

    void ConditionVariable::Wait(Mutex* mutex)
    {
        Mutex::NativeHandle ev = mutex->native_handle();

        mutex->AssertHeldAndUnmark();
        _native_handle->wait(**(exlib::Locker**)&ev);
        mutex->AssertUnheldAndMark();
    }

    bool ConditionVariable::WaitFor(Mutex* mutex, const TimeDelta& rel_time)
    {
        Mutex::NativeHandle ev = mutex->native_handle();
        mutex->AssertHeldAndUnmark();
        bool result = _native_handle->wait(**(exlib::Locker**)&ev, rel_time.InMicroseconds());
        mutex->AssertUnheldAndMark();

        return result;
    }
}
} // namespace v8::base
