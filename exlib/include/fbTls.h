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

int32_t tlsAlloc();
void* tlsGet(int32_t idx);
void** tlsGetRef(int32_t idx);
void tlsPut(int32_t idx, void* v);
void tlsFree(int32_t idx);

template <typename T>
class fiber_local {
public:
    fiber_local(T lp = 0)
    {
        m_id = tlsAlloc();
    }

public:
    void operator=(T lp)
    {
        void* v = 0;

        *(T*)&v = lp;
        tlsPut(m_id, v);
    }

    operator T()
    {
        void* v = tlsGet(m_id);
        return *(T*)&v;
    }

    T* operator&()
    {
        return (T*)tlsGetRef(m_id);
    }

private:
    int32_t m_id;
};

}
