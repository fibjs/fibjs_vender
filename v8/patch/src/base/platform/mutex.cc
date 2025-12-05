
#include "src/base/platform/mutex.h"
#include "src/base/platform/platform.h"
#include <exlib/include/fiber.h>

namespace v8 {
namespace base {

// Use reinterpret_cast to replace absl::Mutex with exlib::Locker
#define _fiber_locker(m) (*(exlib::Locker**)&(m))

Mutex::Mutex()
{
    _fiber_locker(native_handle_) = new exlib::Locker(false);
#ifdef DEBUG
    level_ = 0;
#endif
}

Mutex::~Mutex()
{
    delete _fiber_locker(native_handle_);
    DCHECK_EQ(0, level_);
}

void Mutex::Lock()
{
    _fiber_locker(native_handle_)->lock();
    AssertUnheldAndMark();
}

void Mutex::Unlock()
{
    AssertHeldAndUnmark();
    _fiber_locker(native_handle_)->unlock();
}

bool Mutex::TryLock()
{
    if (!_fiber_locker(native_handle_)->trylock())
        return false;
    AssertUnheldAndMark();
    return true;
}

RecursiveMutex::~RecursiveMutex()
{
    DCHECK_EQ(0, level_);
}

void RecursiveMutex::Lock()
{
    int own_id = v8::base::OS::GetCurrentThreadId();
    if (thread_id_ == own_id) {
        level_++;
        return;
    }
    mutex_.Lock();
    DCHECK_EQ(0, level_);
    thread_id_ = own_id;
    level_ = 1;
}

void RecursiveMutex::Unlock()
{
#ifdef DEBUG
    int own_id = v8::base::OS::GetCurrentThreadId();
    CHECK_EQ(thread_id_, own_id);
#endif
    if ((--level_) == 0) {
        thread_id_ = 0;
        mutex_.Unlock();
    }
}

bool RecursiveMutex::TryLock()
{
    int own_id = v8::base::OS::GetCurrentThreadId();
    if (thread_id_ == own_id) {
        level_++;
        return true;
    }
    if (mutex_.TryLock()) {
        DCHECK_EQ(0, level_);
        thread_id_ = own_id;
        level_ = 1;
        return true;
    }
    return false;
}

}  // namespace base
}  // namespace v8
