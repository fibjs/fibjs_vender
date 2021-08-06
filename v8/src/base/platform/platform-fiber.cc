#include "src/init/v8.h"
#include "src/base/platform/platform.h"
#include "src/base/platform/time.h"
#include <exlib/include/fiber.h>
#include <exlib/include/service.h>

#ifdef _WIN32

#ifdef CreateMutex
#undef CreateMutex
#endif

#ifdef CreateSemaphore
#undef CreateSemaphore
#endif

#endif

#if 1

inline int64_t getTime();

namespace v8 {

namespace base {

#define V8_STACK_SIZE 128

    class Thread::PlatformData {
    public:
        PlatformData(Thread* pThis)
            : thread(pThis)
            , fb(NULL)
        {
        }

    public:
        static void fiber_proc(void* p)
        {
            ((PlatformData*)p)->_run();
        }

    private:
        void _run()
        {
            thread->NotifyStartedAndRun();
        }

    public:
        Thread* thread;
        exlib::Thread_base* fb;
    };

    Thread::Thread(const Options& options)
        : data_(new PlatformData(this))
        , stack_size_(options.stack_size())
        , start_semaphore_(NULL)
    {
        set_name(options.name());
    }

    Thread::~Thread()
    {
        if (((PlatformData*)data_)->fb)
            ((PlatformData*)data_)->fb->Unref();
    }

    void Thread::set_name(const char* name)
    {
        strncpy(name_, name, sizeof(name_));
        name_[sizeof(name_) - 1] = '\0';
    }

    bool Thread::Start()
    {
        exlib::Service::CreateFiber(PlatformData::fiber_proc, data_, V8_STACK_SIZE * 1024,
            name_, &((PlatformData*)data_)->fb);

        return true;
    }

    void Thread::Join()
    {
        if (((PlatformData*)data_)->fb)
            ((PlatformData*)data_)->fb->join();
    }

    Thread::LocalStorageKey Thread::CreateThreadLocalKey()
    {
        return static_cast<LocalStorageKey>(exlib::tlsAlloc());
    }

    void Thread::DeleteThreadLocalKey(LocalStorageKey key)
    {
        exlib::tlsFree(static_cast<int>(key));
    }

    void* Thread::GetThreadLocal(LocalStorageKey key)
    {
        return exlib::tlsGet(static_cast<int>(key));
    }

    void Thread::SetThreadLocal(LocalStorageKey key, void* value)
    {
        exlib::tlsPut(static_cast<int>(key), value);
    }

    void OS::Sleep(TimeDelta interval)
    {
        exlib::Fiber::sleep(interval.InMicroseconds());
    }
}
}

#endif
