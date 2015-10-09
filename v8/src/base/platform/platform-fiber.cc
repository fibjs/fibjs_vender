#include "src/v8.h"
#include "src/profiler/sampler.h"
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

namespace v8
{

namespace internal
{

void Sampler::DoSample()
{
}

}

namespace base
{

class Thread::PlatformData : public exlib::OSThread
{
public:
    PlatformData(Thread* pThis) : thread(pThis)
    {}

public:
    virtual void Run()
    {
        thread->NotifyStartedAndRun();
    }

private:
    Thread *thread;
};

Thread::Thread(const Options &options) :
    data_(new PlatformData(this)), stack_size_(options.stack_size()), start_semaphore_(NULL)
{
    data_->Ref();
    set_name(options.name());
}

Thread::~Thread()
{
    data_->Unref();
}

void Thread::set_name(const char *name)
{
    strncpy(name_, name, sizeof(name_));
    name_[sizeof(name_) - 1] = '\0';
}

void Thread::Start()
{
    data_->start();
}

void Thread::Join()
{
    data_->join();
}

Thread::LocalStorageKey Thread::CreateThreadLocalKey()
{
    return static_cast<LocalStorageKey>(exlib::Thread_base::tlsAlloc());
}

void Thread::DeleteThreadLocalKey(LocalStorageKey key)
{
    exlib::Thread_base::tlsFree(static_cast<int>(key));
}

void *Thread::GetThreadLocal(LocalStorageKey key)
{
    return exlib::Thread_base::tlsGet(static_cast<int>(key));
}

void Thread::SetThreadLocal(LocalStorageKey key, void *value)
{
    exlib::Thread_base::tlsPut(static_cast<int>(key), value);
}

void OS::Sleep(TimeDelta interval)
{
    exlib::OSThread::sleep(interval.InMicroseconds());
}

}

}

#endif
