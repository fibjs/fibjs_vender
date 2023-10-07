#include <exlib/include/osconfig.h>
#include <exlib/include/fiber.h>
#include <exlib/include/service.h>
#include "src/base/platform/platform.h"

#define V8_STACK_SIZE 128

namespace v8 {
namespace base {

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

    class ThreadStub : public Thread {
    public:
        ThreadStub()
            : Thread({})
        {
        }
    };

    class ThreadOriginal : public ThreadStub {
    public:
        ThreadOriginal(const Options& options);
        ~ThreadOriginal();

    public:
        bool Start();

        // Wait until thread terminates.
        void Join();

        inline const char* name() const
        {
            return name_;
        }

        // Thread-local storage.
        static LocalStorageKey CreateThreadLocalKey();
        static void DeleteThreadLocalKey(LocalStorageKey key);
        static void* GetThreadLocal(LocalStorageKey key);
        static void SetThreadLocal(LocalStorageKey key, void* value);
        static bool HasThreadLocal(LocalStorageKey key)
        {
            return GetThreadLocal(key) != nullptr;
        }

    public:
        class PlatformData;
        PlatformData* data() { return data_; }

    public:
        void set_name(const char* name);

        PlatformData* data_;

        char name_[kMaxThreadNameLength];
        int stack_size_;
        Priority priority_;
        Semaphore* start_semaphore_;
    };

}
}

#define Thread ThreadOriginal

#ifndef Windows
#include "src/base/platform/platform-posix.cc"
#else
#include "src/base/platform/platform-win32.cc"
#endif
