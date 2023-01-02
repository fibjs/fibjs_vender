#include "src/base/platform/semaphore.h"
#include "src/base/platform/time.h"
#include <exlib/include/fiber.h>

namespace v8 {
namespace base {

#define _native_handle (*(exlib::Semaphore**)&native_handle_)

    Semaphore::Semaphore(int count)
    {
        _native_handle = new exlib::Semaphore(count);
    }

    Semaphore::~Semaphore()
    {
        delete _native_handle;
    }

    void Semaphore::Signal()
    {
        _native_handle->post();
    }

    void Semaphore::Wait()
    {
        _native_handle->wait();
    }

    bool Semaphore::WaitFor(const TimeDelta& rel_time)
    {
        return _native_handle->wait(rel_time.InMicroseconds());
    }
}
} // namespace v8::base
