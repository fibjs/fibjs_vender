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

void *_CompareAndSwap(void *volatile *Destination, void *Exchange, void *Comparand)
{
	return InterlockedCompareExchangePointer(Destination, Exchange, Comparand);
}

#ifdef x64
atomic_t CompareAndSwap(volatile atomic_t *Destination, atomic_t old_value, atomic_t new_value)
{
	return InterlockedCompareExchange64((LONGLONG *)Destination, new_value, old_value);
}

atomic_t atom_add(volatile atomic_t *dest, atomic_t incr)
{
	return InterlockedExchangeAdd64((LONGLONG *)dest, incr) + incr;
}

atomic_t atom_inc(volatile atomic_t *dest)
{
	return InterlockedIncrement64((LONGLONG *)dest);
}

atomic_t atom_dec(volatile atomic_t *dest)
{
	return InterlockedDecrement64((LONGLONG *)dest);
}

atomic_t atom_xchg(volatile atomic_t *ptr, atomic_t new_value)
{
	return InterlockedExchange64((LONGLONG *)ptr, new_value);
}
#else
atomic_t CompareAndSwap(volatile atomic_t *Destination, atomic_t old_value, atomic_t new_value)
{
	return InterlockedCompareExchange((LONG *)Destination, new_value, old_value);
}

atomic_t atom_add(volatile atomic_t *dest, atomic_t incr)
{
	return InterlockedExchangeAdd((LONG *)dest, incr) + incr;
}

atomic_t atom_inc(volatile atomic_t *dest)
{
	return InterlockedIncrement((LONG *)dest);
}

atomic_t atom_dec(volatile atomic_t *dest)
{
	return InterlockedDecrement((LONG *)dest);
}

atomic_t atom_xchg(volatile atomic_t *ptr, atomic_t new_value)
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
