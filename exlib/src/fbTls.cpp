/*
 *  fbTls.cpp
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#include <stdio.h>
#include "service.h"

namespace exlib
{

int32_t Fiber::tlsAlloc()
{
	Service* pService = Service::current();
	int32_t i;

	trace_assert(pService != 0);

	for (i = 0; i < TLS_SIZE; i++)
		if (pService->m_tls[i] == 0)
		{
			pService->m_tls[i] = 1;
			return i;
		}

	return -1;
}

void* Fiber::tlsGet(int32_t idx)
{
	trace_assert(current() != 0);
	return current()->m_tls[idx];
}

void Fiber::tlsPut(int32_t idx, void* v)
{
	trace_assert(current() != 0);
	current()->m_tls[idx] = v;
}

void Fiber::tlsFree(int32_t idx)
{
	Service* pService = Service::current();

	trace_assert(pService != 0);

	pService->m_tls[idx] = 0;
}

}

