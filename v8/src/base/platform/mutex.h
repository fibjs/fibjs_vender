
#ifndef V8_PLATFORM_MUTEX_H_
#define V8_PLATFORM_MUTEX_H_

#include "src/base/base-export.h"
#include "src/base/lazy-instance.h"

#if V8_OS_WIN
#include "src/base/win32-headers.h"

inline void xp_unsupport(const char* fun)
{
    printf("%s not support!!!!!!!!!!!!\n", fun);
    _exit(-1);
}

#ifndef InterlockedExchange8
inline char InterlockedExchange8(char volatile* Target, char Value)
{
    xp_unsupport("InterlockedExchange8");
    return 0;
}
#endif

#ifndef InterlockedAnd8
inline char InterlockedAnd8(char volatile* Target, char Value)
{
    xp_unsupport("InterlockedAnd8");
    return 0;
}
#endif

#ifndef InterlockedOr8
inline char InterlockedOr8(char volatile* Target, char Value)
{
    xp_unsupport("InterlockedOr8");
    return 0;
}
#endif

#ifndef InterlockedXor8
inline char InterlockedXor8(char volatile* Target, char Value)
{
    xp_unsupport("InterlockedXor8");
    return 0;
}
#endif

#ifndef InterlockedExchange16
inline short InterlockedExchange16(short volatile* Target, short Value)
{
    xp_unsupport("InterlockedExchange16");
    return 0;
}
#endif

#ifndef InterlockedXor16
inline short InterlockedXor16(short volatile* Target, short Value)
{
    xp_unsupport("InterlockedXor16");
    return 0;
}
#endif

#ifndef InterlockedExchange64
inline int64_t InterlockedExchange64(int64_t volatile* Target, int64_t Value)
{
    xp_unsupport("InterlockedExchange64");
    return 0;
}
#endif

#ifndef InterlockedCompareExchange64
inline int64_t InterlockedCompareExchange64(int64_t volatile* Target, int64_t Value, int64_t Old)
{
    xp_unsupport("InterlockedCompareExchange64");
    return 0;
}
#endif

#ifndef InterlockedAnd64
inline int64_t InterlockedAnd64(int64_t volatile* Target, int64_t Value)
{
    xp_unsupport("InterlockedAnd64");
    return 0;
}
#endif

#ifndef InterlockedOr64
inline int64_t InterlockedOr64(int64_t volatile* Target, int64_t Value)
{
    xp_unsupport("InterlockedOr64");
    return 0;
}
#endif

#ifndef InterlockedXor64
inline int64_t InterlockedXor64(int64_t volatile* Target, int64_t Value)
{
    xp_unsupport("InterlockedXor64");
    return 0;
}
#endif

#ifndef InterlockedExchangeAdd64
inline int64_t InterlockedExchangeAdd64(int64_t volatile* Target, int64_t Value)
{
    xp_unsupport("InterlockedExchangeAdd64");
    return 0;
}
#endif

#ifndef ThreadCycleTime
inline BOOL QueryThreadCycleTime(HANDLE thread_handle, PULONG64 cycle_time)
{
    typedef BOOL(WINAPI * QueryThreadCycleTimeImpl)(HANDLE thread_handle, PULONG64 cycle_time);
    static QueryThreadCycleTimeImpl s_func;

    if (s_func == NULL)
        s_func = (QueryThreadCycleTimeImpl)GetProcAddress(GetModuleHandleA("kernel32.dll"), "QueryThreadCycleTime");

    if (s_func)
        return s_func(thread_handle, cycle_time);

    return 0;
}
#endif

#endif

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
}
} // namespace v8::base

#endif // V8_PLATFORM_MUTEX_H_
