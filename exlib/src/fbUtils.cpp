/*
 * fbUtils.cpp
 *
 *  Created on: Dec 3, 2013
 *      Author: lion
 */

#ifdef WIN32

#include <windows.h>
#include <stdio.h>

#include "utils.h"

namespace exlib
{

void *_CompareAndSwap(void *volatile *ptr, void *old_value, void *new_value)
{
	return InterlockedCompareExchangePointer(ptr, new_value, old_value);
}

#ifdef amd64
intptr_t CompareAndSwap(volatile intptr_t *ptr, intptr_t old_value, intptr_t new_value)
{
	return InterlockedCompareExchange64((LONGLONG *)ptr, new_value, old_value);
}

intptr_t atom_add(volatile intptr_t *dest, intptr_t incr)
{
	return InterlockedExchangeAdd64((LONGLONG *)dest, incr) + incr;
}

intptr_t atom_inc(volatile intptr_t *dest)
{
	return InterlockedIncrement64((LONGLONG *)dest);
}

intptr_t atom_dec(volatile intptr_t *dest)
{
	return InterlockedDecrement64((LONGLONG *)dest);
}

intptr_t atom_xchg(volatile intptr_t *ptr, intptr_t new_value)
{
	return InterlockedExchange64((LONGLONG *)ptr, new_value);
}

int32_t CompareAndSwap(volatile int32_t *ptr, int32_t old_value, int32_t new_value)
{
	return InterlockedCompareExchange((LONG *)ptr, new_value, old_value);
}

int32_t atom_add(volatile int32_t *dest, int32_t incr)
{
	return InterlockedExchangeAdd((LONG *)dest, incr) + incr;
}

int32_t atom_inc(volatile int32_t *dest)
{
	return InterlockedIncrement((LONG *)dest);
}

int32_t atom_dec(volatile int32_t *dest)
{
	return InterlockedDecrement((LONG *)dest);
}

int32_t atom_xchg(volatile int32_t *ptr, int32_t new_value)
{
	return InterlockedExchange((LONG *)ptr, new_value);
}
#else
intptr_t CompareAndSwap(volatile intptr_t *ptr, intptr_t old_value, intptr_t new_value)
{
	return InterlockedCompareExchange((LONG *)ptr, new_value, old_value);
}

intptr_t atom_add(volatile intptr_t *dest, intptr_t incr)
{
	return InterlockedExchangeAdd((LONG *)dest, incr) + incr;
}

intptr_t atom_inc(volatile intptr_t *dest)
{
	return InterlockedIncrement((LONG *)dest);
}

intptr_t atom_dec(volatile intptr_t *dest)
{
	return InterlockedDecrement((LONG *)dest);
}

intptr_t atom_xchg(volatile intptr_t *ptr, intptr_t new_value)
{
	return InterlockedExchange((LONG *)ptr, new_value);
}
#endif

void *_atom_xchg(void *volatile *ptr, void *new_value)
{
	return InterlockedExchangePointer(ptr, new_value);
}

}

#endif
