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
    Timer(Semaphore* sem, Task_base* task, int32_t ms, bool& posted)
        : m_sem(sem)
        , m_posted(posted)
    {
        m_task = task;
        m_task->m_task = this;

        Fiber::sleep(ms, this);
    }

public:
    virtual void resume()
    {
        if (!m_posted)
            m_sem->remove(m_task);

        m_task->m_task = NULL;
        m_task->resume();

        delete this;
    }

    void post()
    {
        m_posted = true;
        Fiber::cancel_sleep(this);
    }

private:
    Semaphore* m_sem;
    bool& m_posted;
};

bool Semaphore::wait(int32_t ms)
{
    bool posted = true;

    if (ms == 0)
        return trywait();

    m_lock.lock();

    if (m_count == 0) {
        Task_base* current = Thread_base::current();
        assert(current != 0);

        if (ms > 0) {
            posted = false;
            new Timer(this, current, ms, posted);
        }

        m_blocks.putTail(current);
        current->suspend(m_lock);
    } else {
        m_count--;
        m_lock.unlock();
    }

    return posted;
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
                ((Timer*)fb->m_task)->post();
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
