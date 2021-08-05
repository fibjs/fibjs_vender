/*
 *  fbTls.cpp
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#include "fiber.h"

namespace exlib {

static char s_tls[TLS_SIZE];

int32_t tlsAlloc()
{
    int32_t i;

    for (i = 0; i < TLS_SIZE; i++)
        if (s_tls[i] == 0) {
            s_tls[i] = 1;
            return i;
        }

    return -1;
}

void* tlsGet(int32_t idx)
{
    assert(Thread_base::current() != 0);
    return Thread_base::current()->m_tls[idx];
}

void** tlsGetRef(int32_t idx)
{
    assert(Thread_base::current() != 0);
    return &Thread_base::current()->m_tls[idx];
}

void tlsPut(int32_t idx, void* v)
{
    assert(Thread_base::current() != 0);
    Thread_base::current()->m_tls[idx] = v;
}

void tlsFree(int32_t idx)
{
    s_tls[idx] = 0;
}
}
