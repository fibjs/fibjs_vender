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

int Fiber::tlsAlloc()
{
	Service* pService = Service::getFiberService();
	int i;

	assert(pService != 0);

	for (i = 0; i < TLS_SIZE; i++)
		if (pService->m_tls[i] == 0)
		{
			pService->m_tls[i] = 1;
			return i;
		}

	return -1;
}

void* Fiber::tlsGet(int idx)
{
	Service* pService = Service::getFiberService();

	assert(pService != 0);

	return pService->m_running->m_tls[idx];
}

void Fiber::tlsPut(int idx, void* v)
{
	Service* pService = Service::getFiberService();

	assert(pService != 0);

	pService->m_running->m_tls[idx] = v;
}

void Fiber::tlsFree(int idx)
{
	Service* pService = Service::getFiberService();

	assert(pService != 0);

	pService->m_tls[idx] = 0;
}

}

