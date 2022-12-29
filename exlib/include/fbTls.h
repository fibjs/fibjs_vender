/*
 *  fiber.h
 *  Created on: Aug 5, 2021
 *
 *  lion@9465.net
 */

#pragma once

namespace exlib {

#include <stdint.h>

#define TLS_SIZE 32

int32_t tlsAlloc(intptr_t* init = NULL, size_t size = 1);
intptr_t* tlsGetRef(int32_t idx);

inline intptr_t tlsGet(int32_t idx)
{
    return *tlsGetRef(idx);
}

inline void tlsPut(int32_t idx, intptr_t v)
{
    *tlsGetRef(idx) = v;
}

void tlsFree(int32_t idx);

template <typename T>
class fiber_local {
public:
    fiber_local(T v)
    {
        m_id = tlsAlloc((intptr_t*)&v, size());
    }

    fiber_local()
    {
        m_id = tlsAlloc(0, size());
    }

public:
    void operator=(T v)
    {
        *(T*)tlsGetRef(m_id) = v;
    }

    operator T() const
    {
        return *(T*)tlsGetRef(m_id);
    }

    T* operator&()
    {
        return (T*)tlsGetRef(m_id);
    }

private:
    size_t size()
    {
        return (sizeof(T) + sizeof(intptr_t) - 1) / sizeof(intptr_t);
    }

private:
    int32_t m_id;
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
