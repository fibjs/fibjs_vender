/*
 *  fiber.h
 *  Created on: Aug 5, 2021
 *
 *  lion@9465.net
 */

#pragma once

namespace exlib {

#define TLS_SIZE 64

int tlsAlloc(void** init = 0, int size = 1);
void** tlsGetRef(int idx);

inline void* tlsGet(int idx)
{
    return *tlsGetRef(idx);
}

inline void tlsPut(int idx, void* v)
{
    *tlsGetRef(idx) = v;
}

void tlsFree(int idx);

template <typename T>
class fiber_local {
public:
    fiber_local(T v)
    {
        m_id = tlsAlloc((void**)&v, size());
    }

    fiber_local()
    {
        m_id = tlsAlloc(0, size());
    }

public:
    T& get()
    {
        return *(T*)tlsGetRef(m_id);
    }

    void operator=(T v)
    {
        *(T*)tlsGetRef(m_id) = v;
    }

    operator T() const
    {
        return *(T*)tlsGetRef(m_id);
    }

    operator T&()
    {
        return *(T*)tlsGetRef(m_id);
    }

    bool operator!() const
    {
        return tlsGetRef(m_id) == 0;
    }

    T* operator&()
    {
        return (T*)tlsGetRef(m_id);
    }

    T& operator*() const
    {
        return *(T*)tlsGetRef(m_id);
    }

    T& operator->()
    {
        return *(T*)tlsGetRef(m_id);
    }

    T operator++()
    {
        T* v = (T*)tlsGetRef(m_id);
        *v += 1;
        return *v;
    }

    T operator++(int)
    {
        T* v = (T*)tlsGetRef(m_id);
        T v1 = *v;
        *v += 1;
        return v1;
    }

    T operator--()
    {
        T* v = (T*)tlsGetRef(m_id);
        *v -= 1;
        return *v;
    }

    T operator--(int)
    {
        T* v = (T*)tlsGetRef(m_id);
        T v1 = *v;
        *v -= 1;
        return v1;
    }

private:
    int size()
    {
        return (sizeof(T) + sizeof(void*) - 1) / sizeof(void*);
    }

private:
    int m_id;
};

template <typename T>
bool operator==(const T& lhs, const exlib::fiber_local<T>& rhs)
{
    return lhs == (T)rhs;
}

template <typename T>
bool operator==(const exlib::fiber_local<T>& lhs, const T& rhs)
{
    return rhs == (T)lhs;
}

}
