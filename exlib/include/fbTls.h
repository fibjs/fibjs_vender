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
void tlsPut(int32_t idx, void* v);
void tlsFree(int32_t idx);

template <typename T>
class fiber_local {
public:
    fiber_local()
    {
        m_id = tlsAlloc();
    }

public:
    void operator=(T lp)
    {
        tlsPut(m_id, (void*)lp);
    }

    operator T()
    {
        return (T)tlsGet(m_id);
    }

private:
    int32_t m_id;
};

}
