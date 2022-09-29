/*
 *  fbSemaphore.cpp
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#include "service.h"

namespace exlib {

class Timer : public Task_base {
public:
    Timer(Semaphore* sem, Task_base* task, int32_t ms, volatile bool& cancel)
        : m_sem(sem)
        , m_cancel(cancel)
    {
        m_task = task;
        m_task->m_task = this;

        Fiber::sleep(ms, this);
    }

public:
    virtual void resume()
    {
        if (m_sem->remove(m_task)) {
            m_task->m_task = NULL;
            m_task->resume();
        }

        delete this;
    }

    void cancel()
    {
        m_cancel = true;

        m_task->m_task = NULL;
        m_task->resume();

        Fiber::cancel_sleep(this);
    }

private:
    Semaphore* m_sem;
    volatile bool& m_cancel;
};

bool Semaphore::wait(int32_t ms)
{
    volatile bool cancel = false;

    if (ms == 0)
        return trywait();

    m_lock.lock();

    if (m_count == 0) {
        Task_base* current = Thread_base::current();
        assert(current != 0);

        if (ms > 0)
            new Timer(this, current, ms, cancel);

        m_blocks.putTail(current);
        current->suspend(m_lock);
    } else {
        m_count--;
        m_lock.unlock();
    }

    return cancel;
}

void Semaphore::post(int32_t cnt)
{
    m_lock.lock();

    while (cnt--) {
        Task_base* fb;

        fb = m_blocks.getHead();
        if (fb == 0)
            m_count++;
        else {
            if (fb->m_task)
                ((Timer*)fb->m_task)->cancel();
            else
                fb->resume();
        }
    }

    m_lock.unlock();
}

bool Semaphore::trywait()
{
    m_lock.lock();
    if (m_count == 0) {
        m_lock.unlock();
        return false;
    }

    m_count--;
    m_lock.unlock();

    return true;
}
}
