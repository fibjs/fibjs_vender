#include "src/base/platform/semaphore.h"
#include "src/base/platform/time.h"
#include <cstdint>
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
        // exlib waits in milliseconds; round up to keep sub-ms timeouts non-zero.
        int64_t ms = rel_time.InMillisecondsRoundedUp();
        if (ms < 0) ms = 0;
        int32_t timeout = ms > INT32_MAX ? INT32_MAX : static_cast<int32_t>(ms);
        return _native_handle->wait(timeout);
    }
}
} // namespace v8::base
