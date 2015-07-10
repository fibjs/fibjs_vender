/*
 *  lockfree.h
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#ifndef _ex_lockfree_h__
#define _ex_lockfree_h__

#ifndef _WIN32
#include <unistd.h>
#endif

#include "utils.h"
#include "list.h"

namespace exlib
{

class spinlock
{
public:
    spinlock() {

    }

public:
    void lock()
    {
        while (m_atom.CompareAndSwap(0, -1));
    }

    void unlock()
    {
        m_atom.xchg(0);
    }

private:
    atomic m_atom;
};

template<typename T>
class lockfree
{
public:
    lockfree()
    {
    }

    bool empty()
    {
        return m_link.empty();
    }

    void put(T *o)
    {
        m_lock.lock();
        m_link.putTail(o);
        m_lock.unlock();
    }

    T *get()
    {
        T *p;

        m_lock.lock();
        p = m_link.getHead();
        m_lock.unlock();
        return p;
    }

    void getList(List<T> &link)
    {
        m_lock.lock();
        m_link.getList(link);
        m_lock.unlock();
    }

    T *wait()
    {
        int nCount = 0;
        int time_0 = 0;
        int time_1 = time_0 + 2000;
        int time_2 = time_1 + 200;
        int time_3 = time_2 + 20;

        while (1)
        {
            if (nCount < 2000000)
                nCount++;

            T *p = get();
            if (p != 0)
                return p;

            if (nCount > time_3)
                Sleep(100);
            else if (nCount > time_2)
                Sleep(10);
            else if (nCount > time_1)
                Sleep(1);
            else if (nCount > time_0)
                Sleep(0);
        }

        return 0;
    }

private:
    static void Sleep(int ms)
    {
#ifdef _WIN32
        ::Sleep(ms);
#else
        ::usleep(1000 * ms);
#endif
    }

private:
    List<T> m_link;
    spinlock m_lock;
};

}

#endif

