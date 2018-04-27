#ifndef V8_PLATFORM_SEMAPHORE_H_
#define V8_PLATFORM_SEMAPHORE_H_

#include "src/base/base-export.h"
#include "src/base/lazy-instance.h"
#if V8_OS_WIN
#include "src/base/win32-headers.h"
#endif

#if V8_OS_MACOSX
#include <mach/semaphore.h> // NOLINT
#elif V8_OS_POSIX
#include <semaphore.h> // NOLINT
#endif

#include "mutex.h"

namespace v8 {
namespace base {

    class TimeDelta;

    class Semaphore final {
    public:
        explicit Semaphore(int count);
        ~Semaphore();

        void Signal();
        void Wait();
        bool WaitFor(const TimeDelta& rel_time);

        typedef exlib::Semaphore* NativeHandle;

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

        DISALLOW_COPY_AND_ASSIGN(Semaphore);
    };

    template <int N>
    struct CreateSemaphoreTrait {
        static Semaphore* Create()
        {
            return new Semaphore(N);
        }
    };

    template <int N>
    struct LazySemaphore {
        typedef typename base::LazyDynamicInstance<Semaphore, CreateSemaphoreTrait<N>,
            base::ThreadSafeInitOnceTrait>::type type;
    };

#define LAZY_SEMAPHORE_INITIALIZER LAZY_DYNAMIC_INSTANCE_INITIALIZER
}
}

#endif // V8_PLATFORM_SEMAPHORE_H_
