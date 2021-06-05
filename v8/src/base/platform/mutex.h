
#ifndef V8_PLATFORM_MUTEX_H_
#define V8_PLATFORM_MUTEX_H_

#include "src/base/base-export.h"
#include "src/base/lazy-instance.h"
#include "src/base/logging.h"

#if V8_OS_POSIX
#include <pthread.h> // NOLINT
#endif

namespace exlib {
class Locker;
class RWLocker;
class Semaphore;
class CondVar;
}

namespace v8 {

namespace base {

    class Mutex final {
    public:
        Mutex();
        ~Mutex();

        void Lock();
        void Unlock();
        bool TryLock();

        typedef exlib::Locker* NativeHandle;

        NativeHandle& native_handle()
        {
            return native_handle_;
        }
        const NativeHandle& native_handle() const
        {
            return native_handle_;
        }

    private:
        NativeHandle native_handle_;

        V8_INLINE void AssertHeldAndUnmark()
        {
        }

        V8_INLINE void AssertUnheldAndMark()
        {
        }

        friend class ConditionVariable;

        DISALLOW_COPY_AND_ASSIGN(Mutex);
    };

    typedef base::LazyStaticInstance<Mutex,
        base::DefaultConstructTrait<Mutex>,
        base::ThreadSafeInitOnceTrait>::type LazyMutex;

#define LAZY_MUTEX_INITIALIZER LAZY_STATIC_INSTANCE_INITIALIZER

    class RecursiveMutex final {
    public:
        RecursiveMutex();
        ~RecursiveMutex();

        void Lock();
        void Unlock();
        bool TryLock();
        typedef Mutex::NativeHandle NativeHandle;

        NativeHandle& native_handle()
        {
            return native_handle_;
        }
        const NativeHandle& native_handle() const
        {
            return native_handle_;
        }

    private:
        NativeHandle native_handle_;

        DISALLOW_COPY_AND_ASSIGN(RecursiveMutex);
    };

    typedef base::LazyStaticInstance<RecursiveMutex,
        base::DefaultConstructTrait<RecursiveMutex>,
        base::ThreadSafeInitOnceTrait>::type LazyRecursiveMutex;

#define LAZY_RECURSIVE_MUTEX_INITIALIZER LAZY_STATIC_INSTANCE_INITIALIZER


// ----------------------------------------------------------------------------
// SharedMutex - a replacement for std::shared_mutex
//
// This class is a synchronization primitive that can be used to protect shared
// data from being simultaneously accessed by multiple threads. In contrast to
// other mutex types which facilitate exclusive access, a shared_mutex has two
// levels of access:
// - shared: several threads can share ownership of the same mutex.
// - exclusive: only one thread can own the mutex.
// Shared mutexes are usually used in situations when multiple readers can
// access the same resource at the same time without causing data races, but
// only one writer can do so.
// The SharedMutex class is non-copyable.

class V8_BASE_EXPORT SharedMutex final {
 public:
  SharedMutex();
  ~SharedMutex();

  // Acquires shared ownership of the {SharedMutex}. If another thread is
  // holding the mutex in exclusive ownership, a call to {LockShared()} will
  // block execution until shared ownership can be acquired.
  // If {LockShared()} is called by a thread that already owns the mutex in any
  // mode (exclusive or shared), the behavior is undefined.
  void LockShared();

  // Locks the SharedMutex. If another thread has already locked the mutex, a
  // call to {LockExclusive()} will block execution until the lock is acquired.
  // If {LockExclusive()} is called by a thread that already owns the mutex in
  // any mode (shared or exclusive), the behavior is undefined.
  void LockExclusive();

  // Releases the {SharedMutex} from shared ownership by the calling thread.
  // The mutex must be locked by the current thread of execution in shared mode,
  // otherwise, the behavior is undefined.
  void UnlockShared();

  // Unlocks the {SharedMutex}. It must be locked by the current thread of
  // execution, otherwise, the behavior is undefined.
  void UnlockExclusive();

  // Tries to lock the {SharedMutex} in shared mode. Returns immediately. On
  // successful lock acquisition returns true, otherwise returns false.
  // This function is allowed to fail spuriously and return false even if the
  // mutex is not currenly exclusively locked by any other thread.
  bool TryLockShared() V8_WARN_UNUSED_RESULT;

  // Tries to lock the {SharedMutex}. Returns immediately. On successful lock
  // acquisition returns true, otherwise returns false.
  // This function is allowed to fail spuriously and return false even if the
  // mutex is not currently locked by any other thread.
  // If try_lock is called by a thread that already owns the mutex in any mode
  // (shared or exclusive), the behavior is undefined.
  bool TryLockExclusive() V8_WARN_UNUSED_RESULT;

 private:
  // The implementation-defined native handle type.
  typedef exlib::RWLocker* NativeHandle;

  NativeHandle native_handle_;

  DISALLOW_COPY_AND_ASSIGN(SharedMutex);
};

    enum class NullBehavior { kRequireNotNull, kIgnoreIfNull };

    template <typename Mutex>
    class LockGuard final {
    public:
        explicit LockGuard(Mutex* mutex)
            : mutex_(mutex)
        {
            mutex_->Lock();
        }
        ~LockGuard() { mutex_->Unlock(); }

    private:
        Mutex* mutex_;
        // Mutex* const mutex_;

        // bool V8_INLINE has_mutex() const {
        //     DCHECK_IMPLIES(Behavior == NullBehavior::kRequireNotNull,
        //                 mutex_ != nullptr);
        //     return Behavior == NullBehavior::kRequireNotNull || mutex_ != nullptr;
        // }

        DISALLOW_COPY_AND_ASSIGN(LockGuard);
    };

    using MutexGuard = LockGuard<Mutex>;
    enum MutexSharedType : bool { kShared = true, kExclusive = false };

    template <MutexSharedType kIsShared>
    class SharedMutexGuard final {
        public:
        explicit SharedMutexGuard(SharedMutex* mutex) : mutex_(mutex) {
            // if (!has_mutex()) return;
            if (kIsShared) {
                mutex_->LockShared();
            } else {
                mutex_->LockExclusive();
            }
        }
        ~SharedMutexGuard() {
            // if (!has_mutex()) return;
            if (kIsShared) {
                mutex_->UnlockShared();
            } else {
                mutex_->UnlockExclusive();
            }
        }

        private:
        SharedMutex* mutex_;
        // SharedMutex* const mutex_;

        // bool V8_INLINE has_mutex() const {
        //     DCHECK_IMPLIES(Behavior == NullBehavior::kRequireNotNull,
        //                 mutex_ != nullptr);
        //     return Behavior == NullBehavior::kRequireNotNull || mutex_ != nullptr;
        // }

        DISALLOW_COPY_AND_ASSIGN(SharedMutexGuard);
    };
}
} // namespace v8::base

#endif // V8_PLATFORM_MUTEX_H_
