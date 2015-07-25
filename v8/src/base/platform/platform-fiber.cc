#include "src/v8.h"
#include "src/sampler.h"
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
    exlib::Service* pService = exlib::Service::current();
    exlib::Fiber* fb = pService->firstFiber();

    while (fb)
    {
        if (memcmp(fb->name_, "V8 WorkerThread", 16))
        {
            RegisterState state;

            state.pc = reinterpret_cast<Address>(fb->m_cntxt.ip);
            state.sp = reinterpret_cast<Address>(fb->m_cntxt.sp);
            state.fp = reinterpret_cast<Address>(fb->m_cntxt.fp);

            SampleStack(state);
        }

        fb = pService->nextFiber(fb);
    }
}

}

namespace base
{

class Thread::PlatformData
{
public:
    PlatformData() :
        thread_(NULL)
    {
    }

    exlib::Fiber *thread_; // Thread handle for pthread.
};

Thread::Thread(const Options &options) :
    data_(new PlatformData()), stack_size_(options.stack_size()), start_semaphore_(NULL)
{
    set_name(options.name());
}

Thread::~Thread()
{
    data_->thread_->Unref();
    delete data_;
}

static void *ThreadEntry(void *arg)
{
    Thread *thread = reinterpret_cast<Thread *>(arg);
    thread->NotifyStartedAndRun();
    return NULL;
}

void Thread::set_name(const char *name)
{
    strncpy(name_, name, sizeof(name_));
    name_[sizeof(name_) - 1] = '\0';
}

void Thread::Start()
{
    data_->thread_ = exlib::Fiber::Create(ThreadEntry, this);
    data_->thread_->Ref();
    data_->thread_->set_name(name_);
}

void Thread::Join()
{
    data_->thread_->join();
}

Thread::LocalStorageKey Thread::CreateThreadLocalKey()
{
    return static_cast<LocalStorageKey>(exlib::Fiber::tlsAlloc());
}

void Thread::DeleteThreadLocalKey(LocalStorageKey key)
{
    exlib::Fiber::tlsFree(static_cast<int>(key));
}

void *Thread::GetThreadLocal(LocalStorageKey key)
{
    return exlib::Fiber::tlsGet(static_cast<int>(key));
}

void Thread::SetThreadLocal(LocalStorageKey key, void *value)
{
    exlib::Fiber::tlsPut(static_cast<int>(key), value);
}

void OS::Sleep(TimeDelta interval)
{
    exlib::Fiber::sleep(interval.InMicroseconds());
}

}

}

#endif
