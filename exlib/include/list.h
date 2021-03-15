/*
 *  link.h
 *  Created on: Mar 19, 2015
 *
 *  Copyright (c) 2015 by Leo Hoo
 *  lion@9465.net
 */

#pragma once

#include "utils.h"
#include <assert.h>

namespace exlib {

class linkitem {
public:
    linkitem()
        : m_next(0)
        , m_prev(0)
#ifdef DEBUG
        , m_inlist(0)
#endif
    {
    }

public:
    linkitem* m_next;
    linkitem* m_prev;
#ifdef DEBUG
    void* m_inlist;
#endif
};

template <class T>
class List {
public:
    List()
        : m_first(0)
        , m_last(0)
        , m_count(0)
    {
    }

    void putHead(T* pNew)
    {
        assert(pNew->m_inlist == 0);
        assert(pNew->m_next == 0);
        assert(pNew->m_prev == 0);

        if (m_first) {
            m_first->m_prev = pNew;
            pNew->m_next = m_first;
        } else
            m_last = pNew;

        m_first = pNew;

#ifdef DEBUG
        pNew->m_inlist = this;
#endif

        m_count++;
    }

    void putTail(T* pNew)
    {
        assert(pNew->m_inlist == 0);
        assert(pNew->m_next == 0);
        assert(pNew->m_prev == 0);

        if (m_last) {
            m_last->m_next = pNew;
            pNew->m_prev = m_last;
        } else
            m_first = pNew;

        m_last = pNew;

#ifdef DEBUG
        pNew->m_inlist = this;
#endif

        m_count++;
    }

    T* getHead()
    {
        T* pNow = m_first;

        if (pNow) {
            assert(pNow->m_inlist == this);

            m_first = (T*)pNow->m_next;
            if (m_first) {
                assert(m_first->m_prev == pNow);

                m_first->m_prev = 0;
                pNow->m_next = 0;
            } else
                m_last = 0;

#ifdef DEBUG
            pNow->m_inlist = 0;
#endif

            m_count--;
        }

        return pNow;
    }

    T* getTail()
    {
        T* pNow = m_last;

        if (pNow) {
            assert(pNow->m_inlist == this);

            m_last = (T*)pNow->m_prev;
            if (m_last) {
                assert(m_last->m_next == pNow);

                m_last->m_next = 0;
                pNow->m_prev = 0;
            } else
                m_first = 0;

#ifdef DEBUG
            pNow->m_inlist = 0;
#endif

            m_count--;
        }

        return pNow;
    }

    void remove(T* o)
    {
        linkitem *p1, *p2;

        assert(o->m_inlist == this);
        assert(o->m_next != 0 || o->m_prev != 0 || (m_first == o && m_last == o));

        p1 = o->m_next;
        p2 = o->m_prev;

        if (p1) {
            p1->m_prev = p2;
            o->m_next = 0;
        }

        if (p2) {
            p2->m_next = p1;
            o->m_prev = 0;
        }

        if (m_first == o)
            m_first = (T*)p1;

        if (m_last == o)
            m_last = (T*)p2;

#ifdef DEBUG
        o->m_inlist = 0;
#endif

        m_count--;
    }

    void getList(List<T>& list)
    {
        assert(list.empty());

        list.m_first = m_first;
        list.m_last = m_last;
        list.m_count = m_count;

#ifdef DEBUG
        T* p = m_first;
        while (p) {
            assert(p->m_inlist == this);
            p->m_inlist = &list;
            p = (T*)p->m_next;
        }
#endif

        m_first = 0;
        m_last = 0;
        m_count = 0;
    }

    bool has(T* o) const
    {
        linkitem* p = m_first;

        while (p) {
            if (o == (T*)p)
                return true;

            p = p->m_next;
        }

        return false;
    }

    bool empty() const
    {
        return m_count == 0;
    }

    int32_t count() const
    {
        return m_count;
    }

    T* head() const
    {
        return m_first;
    }

    T* tail() const
    {
        return m_last;
    }

    T* next(T* o) const
    {
        assert(o->m_inlist == this);
        assert(o->m_next != 0 || o->m_prev != 0 || (m_first == o && m_last == o));

        return (T*)o->m_next;
    }

    T* prev(T* o) const
    {
        assert(o->m_inlist == this);
        assert(o->m_next != 0 || o->m_prev != 0 || (m_first == o && m_last == o));

        return (T*)o->m_prev;
    }

private:
    T* m_first;
    T* m_last;
    int32_t m_count;
};

template <typename T>
class LockedList : public List<T> {
public:
    void putHead(T* pNew)
    {
        m_lock.lock();
        List<T>::putHead(pNew);
        m_lock.unlock();
    }

    void putTail(T* pNew)
    {
        m_lock.lock();
        List<T>::putTail(pNew);
        m_lock.unlock();
    }

    T* getHead()
    {
        m_lock.lock();
        T* pNow = List<T>::getHead();
        m_lock.unlock();

        return pNow;
    }

    T* getTail()
    {
        m_lock.lock();
        T* pNow = List<T>::getTail();
        m_lock.unlock();

        return pNow;
    }

    bool has(T* o)
    {
        m_lock.lock();
        bool r = List<T>::has(o);
        m_lock.unlock();

        return r;
    }

    void remove(T* o)
    {
        m_lock.lock();
        List<T>::remove(o);
        m_lock.unlock();
    }

    void getList(List<T>& list)
    {
        m_lock.lock();
        List<T>::getList(list);
        m_lock.unlock();
    }

    bool empty()
    {
        m_lock.lock();
        bool r = List<T>::empty();
        m_lock.unlock();

        return r;
    }

    int32_t count()
    {
        m_lock.lock();
        int32_t r = List<T>::count();
        m_lock.unlock();

        return r;
    }

    T* head()
    {
        m_lock.lock();
        T* r = List<T>::head();
        m_lock.unlock();

        return r;
    }

    T* tail()
    {
        m_lock.lock();
        T* r = List<T>::tail();
        m_lock.unlock();

        return r;
    }

    T* next(T* o)
    {
        m_lock.lock();
        T* r = List<T>::next(o);
        m_lock.unlock();

        return r;
    }

    T* prev(T* o)
    {
        m_lock.lock();
        T* r = List<T>::prev(o);
        m_lock.unlock();

        return r;
    }

private:
    spinlock m_lock;
};
}
