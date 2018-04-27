
#ifndef V8_PLATFORM_CONDITION_VARIABLE_H_
#define V8_PLATFORM_CONDITION_VARIABLE_H_

#include "src/base/base-export.h"
#include "src/base/lazy-instance.h"
#include "src/base/platform/mutex.h"

namespace v8 {
namespace base {

    // Forward declarations.
    class ConditionVariableEvent;
    class TimeDelta;

    class ConditionVariable final {
    public:
        ConditionVariable();
        ~ConditionVariable();

        void NotifyOne();
        void NotifyAll();
        void Wait(Mutex* mutex);
        bool WaitFor(Mutex* mutex, const TimeDelta& rel_time);

        typedef exlib::CondVar* NativeHandle;

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

        DISALLOW_COPY_AND_ASSIGN(ConditionVariable);
    };

    typedef base::LazyStaticInstance<ConditionVariable,
        base::DefaultConstructTrait<ConditionVariable>,
        base::ThreadSafeInitOnceTrait>::type LazyConditionVariable;

#define LAZY_CONDITION_VARIABLE_INITIALIZER LAZY_STATIC_INSTANCE_INITIALIZER
}
} // namespace v8::base

#endif // V8_PLATFORM_CONDITION_VARIABLE_H_
