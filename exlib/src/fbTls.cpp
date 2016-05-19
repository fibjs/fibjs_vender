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

static char s_tls[TLS_SIZE];
static Fiber::tls_free s_tls_free[TLS_SIZE];

int32_t Thread_base::tlsAlloc(tls_free _free)
{
	int32_t i;

	for (i = 0; i < TLS_SIZE; i++)
		if (s_tls[i] == 0)
		{
			s_tls[i] = 1;
			s_tls_free[i] = _free;
			return i;
		}

	return -1;
}

void* Thread_base::tlsGet(int32_t idx)
{
	assert(current() != 0);
	return current()->m_tls[idx];
}

void Thread_base::tlsPut(int32_t idx, void* v)
{
	assert(current() != 0);
	current()->m_tls[idx] = v;
}

void Thread_base::tlsFree(int32_t idx)
{
	s_tls[idx] = 0;
	s_tls_free[idx] = NULL;
}

void Thread_base::destroy()
{
	int32_t i;

	for (i = 0; i < TLS_SIZE; i++)
		if (s_tls_free[i])
		{
			s_tls_free[i](m_tls[i]);
			m_tls[i] = NULL;
		}
}

}

