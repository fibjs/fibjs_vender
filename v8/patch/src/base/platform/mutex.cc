
#include "src/base/platform/mutex.h"
#include <exlib/include/fiber.h>

namespace v8 {
namespace base {

#define _native_handle (*(exlib::Locker**)&native_handle_)
#define _native_handle_rw (*(exlib::RWLocker**)&native_handle_)

    Mutex::Mutex()
    {
        _native_handle = new exlib::Locker(false);
#ifdef DEBUG
        level_ = 0;
#endif
    }

    Mutex::~Mutex()
    {
        delete _native_handle;
        DCHECK_EQ(0, level_);
    }

    void Mutex::Lock()
    {
        _native_handle->lock();
        AssertUnheldAndMark();
    }

    void Mutex::Unlock()
    {
        AssertHeldAndUnmark();
        _native_handle->unlock();
    }

    bool Mutex::TryLock()
    {
        if (!_native_handle->trylock())
            return false;
        AssertUnheldAndMark();
        return true;
    }

    RecursiveMutex::RecursiveMutex()
    {
        _native_handle = new exlib::Locker(true);
#ifdef DEBUG
        level_ = 0;
#endif
    }

    RecursiveMutex::~RecursiveMutex()
    {
        delete _native_handle;
        DCHECK_EQ(0, level_);
    }

    void RecursiveMutex::Lock()
    {
        _native_handle->lock();
#ifdef DEBUG
        DCHECK_LE(0, level_);
        level_++;
#endif
    }

    void RecursiveMutex::Unlock()
    {
#ifdef DEBUG
        DCHECK_LT(0, level_);
        level_--;
#endif
        _native_handle->unlock();
    }

    bool RecursiveMutex::TryLock()
    {
        if (!_native_handle->trylock())
            return false;
#ifdef DEBUG
        DCHECK_LE(0, level_);
        level_++;
#endif
        return true;
    }

    SharedMutex::SharedMutex()
    {
        _native_handle_rw = new exlib::RWLocker();
    }

    SharedMutex::~SharedMutex()
    {
        delete _native_handle_rw;
    }

    void SharedMutex::LockShared()
    {
        _native_handle_rw->rdlock();
    }

    void SharedMutex::LockExclusive()
    {
        _native_handle_rw->wrlock();
    }

    void SharedMutex::UnlockShared()
    {
        _native_handle_rw->rdunlock();
    }

    void SharedMutex::UnlockExclusive()
    {
        _native_handle_rw->wrunlock();
    }

    bool SharedMutex::TryLockShared()
    {
        return _native_handle_rw->tryrdlock();
    }

    bool SharedMutex::TryLockExclusive()
    {
        // return _native_handle_rw->tryrdlock();
        return _native_handle_rw->trywrlock();
    }
}
} // namespace v8::base
