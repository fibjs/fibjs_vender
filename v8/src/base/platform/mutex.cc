
#include "mutex.h"
#include <exlib/include/fiber.h>

namespace v8 {
namespace base {

    Mutex::Mutex()
    {
        native_handle_ = new exlib::Locker(false);
    }

    Mutex::~Mutex()
    {
        delete native_handle_;
    }

    void Mutex::Lock()
    {
        native_handle_->lock();
    }

    void Mutex::Unlock()
    {
        native_handle_->unlock();
    }

    bool Mutex::TryLock()
    {
        return native_handle_->trylock();
    }

    RecursiveMutex::RecursiveMutex()
    {
        native_handle_ = new exlib::Locker(true);
    }

    RecursiveMutex::~RecursiveMutex()
    {
        delete native_handle_;
    }

    void RecursiveMutex::Lock()
    {
        native_handle_->lock();
    }

    void RecursiveMutex::Unlock()
    {
        native_handle_->unlock();
    }

    bool RecursiveMutex::TryLock()
    {
        return native_handle_->trylock();
    }

    SharedMutex::SharedMutex() {
        native_handle_ = new exlib::RWLocker();
    }

    SharedMutex::~SharedMutex() {
        delete native_handle_;
    }

    void SharedMutex::LockShared() {
        native_handle_->rdlock();
    }

    void SharedMutex::LockExclusive() {
        native_handle_->wrlock();
    }

    void SharedMutex::UnlockShared() {
        native_handle_->rdunlock();
    }

    void SharedMutex::UnlockExclusive() {
        native_handle_->wrunlock();
    }

    bool SharedMutex::TryLockShared() {
        return native_handle_->tryrdlock();
    }

    bool SharedMutex::TryLockExclusive() {
        // return native_handle_->tryrdlock();
        return native_handle_->trywrlock();
    }
}
} // namespace v8::base
