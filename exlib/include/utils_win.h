/*
 *  utils_win.h
 *  Created on: Jul 17, 2014
 *
 *  Copyright (c) 2014 by Leo Hoo
 *  lion@9465.net
 */

#include <windows.h>

namespace exlib
{

#pragma pack (1)

class registers
{
public:
#if defined(amd64)
	union {
		intptr_t Rbp;
		intptr_t fp;
	};
	intptr_t Rbx;
	intptr_t Rcx;
	intptr_t Rdx;
	intptr_t Rsi;
	intptr_t Rdi;
	intptr_t R8;
	intptr_t R9;
	intptr_t R10;
	intptr_t R11;
	intptr_t R12;
	intptr_t R13;
	intptr_t R14;
	intptr_t R15;
	union {
		intptr_t Rsp;
		intptr_t sp;
	};
#elif defined(i386)
	union {
		intptr_t Ebp;
		intptr_t fp;
	};
	intptr_t Ebx;
	intptr_t Ecx;
	intptr_t Edx;
	intptr_t Esi;
	intptr_t Edi;
	union {
		intptr_t Esp;
		intptr_t sp;
	};
#endif
};

#pragma pack ()

#ifdef amd64
inline void MemoryBarrier()
{
	::__faststorefence();
}
#else
inline void MemoryBarrier()
{
	LONG Barrier;
	__asm
	{
		xchg Barrier, eax
	}
}
#endif

inline void yield()
{
	YieldProcessor();
}


#ifdef amd64
inline intptr_t CompareAndSwap(volatile intptr_t *ptr, intptr_t old_value, intptr_t new_value)
{
	return InterlockedCompareExchange64((LONGLONG *)ptr, new_value, old_value);
}

inline intptr_t atom_add(volatile intptr_t *dest, intptr_t incr)
{
	return InterlockedExchangeAdd64((LONGLONG *)dest, incr) + incr;
}

inline intptr_t atom_inc(volatile intptr_t *dest)
{
	return InterlockedIncrement64((LONGLONG *)dest);
}

inline intptr_t atom_dec(volatile intptr_t *dest)
{
	return InterlockedDecrement64((LONGLONG *)dest);
}

inline intptr_t atom_xchg(volatile intptr_t *ptr, intptr_t new_value)
{
	return InterlockedExchange64((LONGLONG *)ptr, new_value);
}

inline int32_t CompareAndSwap(volatile int32_t *ptr, int32_t old_value, int32_t new_value)
{
	return InterlockedCompareExchange((LONG *)ptr, new_value, old_value);
}

inline int32_t atom_add(volatile int32_t *dest, int32_t incr)
{
	return InterlockedExchangeAdd((LONG *)dest, incr) + incr;
}

inline int32_t atom_inc(volatile int32_t *dest)
{
	return InterlockedIncrement((LONG *)dest);
}

inline int32_t atom_dec(volatile int32_t *dest)
{
	return InterlockedDecrement((LONG *)dest);
}

inline int32_t atom_xchg(volatile int32_t *ptr, int32_t new_value)
{
	return InterlockedExchange((LONG *)ptr, new_value);
}
#else
inline intptr_t CompareAndSwap(volatile intptr_t *ptr, intptr_t old_value, intptr_t new_value)
{
	return InterlockedCompareExchange((LONG *)ptr, new_value, old_value);
}

inline intptr_t atom_add(volatile intptr_t *dest, intptr_t incr)
{
	return InterlockedExchangeAdd((LONG *)dest, incr) + incr;
}

inline intptr_t atom_inc(volatile intptr_t *dest)
{
	return InterlockedIncrement((LONG *)dest);
}

inline intptr_t atom_dec(volatile intptr_t *dest)
{
	return InterlockedDecrement((LONG *)dest);
}

inline intptr_t atom_xchg(volatile intptr_t *ptr, intptr_t new_value)
{
	return InterlockedExchange((LONG *)ptr, new_value);
}
#endif

inline void *_atom_xchg(void *volatile *ptr, void *new_value)
{
	return InterlockedExchangePointer(ptr, new_value);
}

inline void *_CompareAndSwap(void *volatile *ptr, void *old_value, void *new_value)
{
	return InterlockedCompareExchangePointer(ptr, new_value, old_value);
}

template<typename T>
inline T *CompareAndSwap(T *volatile *ptr, T *old_value, T *new_value)
{
	void *result = _CompareAndSwap((void *volatile *)ptr, (void *)old_value, (void *)new_value);
	return (T *)result;
}

inline void *CompareAndSwap(void *volatile *ptr, void *old_value, void *new_value)
{
	return _CompareAndSwap(ptr, old_value, new_value);
}

void *_atom_xchg(void *volatile *ptr, void *new_value);

template<typename T>
inline T *atom_xchg(T *volatile *ptr, T *new_value)
{
	void *result = _atom_xchg((void *volatile *)ptr, (void *)new_value);
	return (T *)result;
}

inline void *atom_xchg(void *volatile *ptr, void *new_value)
{
	return _atom_xchg(ptr, new_value);
}

}
