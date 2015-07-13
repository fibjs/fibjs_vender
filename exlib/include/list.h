/*
 *  link.h
 *  Created on: Mar 19, 2015
 *
 *  Copyright (c) 2015 by Leo Hoo
 *  lion@9465.net
 */

#ifndef _ex_link_h__
#define _ex_link_h__

#include <assert.h>

namespace exlib
{

class linkitem
{
public:
    linkitem() : m_next(0), m_prev(0)
#ifdef DEBUG
        , m_inlist(0)
#endif
    {
    }

public:
    linkitem *m_next;
    linkitem *m_prev;
#ifdef DEBUG
    void* m_inlist;
#endif
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
        assert(pNew->m_inlist == 0);
        assert(pNew->m_next == 0);
        assert(pNew->m_prev == 0);

        if (m_first) {
            m_first->m_prev = pNew;
            pNew->m_next = m_first;
        }
        else
            m_last = pNew;

        m_first = pNew;

#ifdef DEBUG
        pNew->m_inlist = this;
#endif

        m_count++;
    }

    void putTail(T *pNew)
    {
        assert(pNew->m_inlist == 0);
        assert(pNew->m_next == 0);
        assert(pNew->m_prev == 0);

        if (m_last) {
            m_last->m_next = pNew;
            pNew->m_prev = m_last;
        }
        else
            m_first = pNew;

        m_last = pNew;

#ifdef DEBUG
        pNew->m_inlist = this;
#endif

        m_count++;
    }

    T *getHead()
    {
        T *pNow = m_first;

        if (pNow)
        {
            assert(pNow->m_inlist == this);

            m_first = (T *)pNow->m_next;
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

    T *getTail()
    {
        T *pNow = m_last;

        if (pNow)
        {
            assert(pNow->m_inlist == this);

            m_last = (T *)pNow->m_prev;
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

    void remove(T* pThis)
    {
        T *p1, *p2;

        assert(pThis->m_inlist == this);
        assert(pThis->m_next != 0 || pThis->m_prev != 0);

        p1 = pThis->m_next;
        p2 = pThis->m_prev;

        if (p1) {
            p1->m_prev = p2;
            pThis->m_next = 0;
        }

        if (p2) {
            p2->m_next = p1;
            pThis->m_prev = 0;
        }

        if (m_first == pThis)
            m_first = p1;

        if (m_last == pThis)
            m_last = p2;

#ifdef DEBUG
        pThis->m_inlist = 0;
#endif

        m_count --;
    }

    void getList(List<T> &list)
    {
        assert(list.empty());

        list.m_first = m_first;
        list.m_last = m_last;
        list.m_count = m_count;

#ifdef DEBUG
        T *p = m_first;
        while (p)
        {
            assert(p->m_inlist == this);
            p->m_inlist = &list;
            p = (T*)p->m_next;
        }
#endif

        m_first = 0;
        m_last = 0;
        m_count = 0;
    }

    bool empty() const
    {
        return m_count == 0;
    }

    int count() const
    {
        return m_count;
    }

    T* head() {
        return m_first;
    }

    T* tail() {
        return m_last;
    }

private:
    T *m_first;
    T *m_last;
    int m_count;
};

}

#endif

