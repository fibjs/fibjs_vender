/*
 *  event.h
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#ifndef _ex_event_h__
#define _ex_event_h__

#include <assert.h>
#include "osconfig.h"

namespace exlib
{

class linkitem
{
public:
    linkitem() : m_next(0), m_prev(0)
    {
    }

public:
    linkitem *m_next;
    linkitem *m_prev;
};

template<class T>
class List
{
public:
    List() :
        m_first(0), m_last(0), m_count(0)
    {
    }

    void putHead(T *pNew)
    {
        assert(pNew->m_next == 0);
        assert(pNew->m_prev == 0);

        if (m_first) {
            m_first->m_prev = pNew;
            pNew->m_next = m_first;
        }
        else
            m_last = pNew;

        m_first = pNew;

        m_count++;
    }

    void putTail(T *pNew)
    {
        assert(pNew->m_next == 0);
        assert(pNew->m_prev == 0);

        if (m_last) {
            m_last->m_next = pNew;
            pNew->m_prev = m_last;
        }
        else
            m_first = pNew;

        m_last = pNew;

        m_count++;
    }

    T *getHead()
    {
        T *pNow = m_first;

        if (pNow)
        {
            m_first = (T *)pNow->m_next;
            if (m_first) {
                assert(m_first->m_prev == pNow);

                m_first->m_prev = 0;
                pNow->m_next = 0;
            } else
                m_last = 0;

            m_count--;
        }

        return pNow;
    }

    T *getTail()
    {
        T *pNow = m_last;

        if (pNow)
        {
            m_last = (T *)pNow->m_prev;
            if (m_last) {
                assert(m_last->m_next == pNow);

                m_last->m_next = 0;
                pNow->m_prev = 0;
            } else
                m_first = 0;

            m_count--;
        }

        return pNow;
    }

    bool empty() const
    {
        return m_count == 0;
    }

    int count() const
    {
        return m_count;
    }

private:
    T *m_first;
    T *m_last;
    int m_count;
};

class Fiber;
class Locker
{
public:
    Locker(bool recursive = true) :
        m_recursive(recursive), m_count(0), m_locker(0)
    {
    }

public:
    void lock();
    void unlock();
    bool trylock();
    bool owned();

    int blocked() const
    {
        return m_blocks.count();
    }

private:
    bool m_recursive;
    int m_count;
    Fiber *m_locker;
    List<Fiber> m_blocks;
};

class autoLocker
{
public:
    autoLocker(Locker &l) :
        m_l(l)
    {
        m_l.lock();
    }

    ~autoLocker()
    {
        m_l.unlock();
    }

private:
    Locker &m_l;
};

class Event
{
public:
    Event()
    {
        m_set = false;
    }

public:
    void wait();
    void pulse();
    void set();
    void reset();
    bool isSet();

private:
    bool m_set;
    List<Fiber> m_blocks;
};

class CondVar
{
public:
    void wait(Locker &l);
    void notify_one();
    void notify_all();

    int blocked() const
    {
        return m_blocks.count();
    }

private:
    List<Fiber> m_blocks;
};

class Semaphore
{
public:
    Semaphore(int count = 0) :
        m_count(count)
    {
    }

public:
    void wait();
    void post();
    bool trywait();

    int blocked() const
    {
        return m_blocks.count();
    }

private:
    int m_count;
    List<Fiber> m_blocks;
};

template<class T>
class Queue
{
public:
    void put(T *pNew)
    {
        m_list.putTail(pNew);
        m_sem.post();
    }

    T *get()
    {
        m_sem.wait();
        return m_list.getHead();
    }

    T *tryget()
    {
        if (!m_sem.trywait())
            return 0;
        return m_list.getHead();
    }

    bool empty() const
    {
        return m_list.empty();
    }

    int count() const
    {
        return m_list.count();
    }

public:
    List<T> m_list;
    Semaphore m_sem;
};

}

#endif

