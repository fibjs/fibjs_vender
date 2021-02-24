
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

        DISALLOW_COPY_AND_ASSIGN(LockGuard);
    };

    using MutexGuard = LockGuard<Mutex>;
}
} // namespace v8::base

#endif // V8_PLATFORM_MUTEX_H_
