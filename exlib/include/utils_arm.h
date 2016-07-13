/*
 *  utils_arm.h
 *  Created on: Jul 10, 2014
 *
 *  Copyright (c) 2014 by Leo Hoo
 *  lion@9465.net
 */

namespace exlib
{

typedef void (*LinuxKernelMemoryBarrierFunc)(void);
inline void MemoryBarrier()
{
	(*(LinuxKernelMemoryBarrierFunc)0xffff0fa0)();
}

inline void yield()
{
	__asm__ volatile("mov r0,r0 @ nop");
}

template<typename T>
inline T *CompareAndSwap(T *volatile *ptr, T *old_value, T *new_value)
{
	T *oldval, *res;

	do
	{
		__asm__ volatile(
		    "ldrex %0, [%3]\n"
		    "mov %1, #0\n"
		    "cmp %0, %4\n"
#ifdef __thumb2__
		    "it eq\n"
#endif
		    "strexeq %1, %5, [%3]\n"
		    : "=&r"(oldval), "=&r"(res), "+m"(*ptr)
		    : "r"(ptr), "r"(old_value), "r"(new_value)
		    : "cc", "memory");
	}
	while (res != 0);

	return oldval;
}

inline intptr_t CompareAndSwap(volatile intptr_t *ptr, intptr_t old_value, intptr_t new_value)
{
	intptr_t oldval, res;

	do
	{
		__asm__ volatile(
		    "ldrex %0, [%3]\n"
		    "mov %1, #0\n"
		    "cmp %0, %4\n"
#ifdef __thumb2__
		    "it eq\n"
#endif
		    "strexeq %1, %5, [%3]\n"
		    : "=&r"(oldval), "=&r"(res), "+m"(*ptr)
		    : "r"(ptr), "r"(old_value), "r"(new_value)
		    : "cc", "memory");
	}
	while (res != 0);

	return oldval;
}

inline intptr_t atom_add(volatile intptr_t *dest, intptr_t incr)
{
	intptr_t value;
	intptr_t res;

	do
	{
		__asm__ volatile(
		    "ldrex %0, [%3]\n"
		    "add %0, %0, %4\n"
		    "strex %1, %0, [%3]\n"
		    : "=&r"(value), "=&r"(res), "+m"(*dest)
		    : "r"(dest), "r"(incr)
		    : "cc", "memory");
	}
	while (res);
	return value;
}

inline intptr_t atom_inc(volatile intptr_t *dest)
{
	return atom_add(dest, 1);
}

inline intptr_t atom_dec(volatile intptr_t *dest)
{
	return atom_add(dest, -1);
}

inline intptr_t atom_xchg(volatile intptr_t *ptr, intptr_t new_value)
{
	intptr_t old_value;
	intptr_t res;

	do
	{
		__asm__ volatile(
		    "ldrex %0, [%3]\n"
		    "strex %1, %4, [%3]\n"
		    : "=&r"(old_value), "=&r"(res), "+m"(*ptr)
		    : "r"(ptr), "r"(new_value)
		    : "cc", "memory");
	}
	while (res != 0);
	return old_value;
}

template<typename T>
inline T *atom_xchg(T *volatile *ptr, T *new_value)
{
	T *old_value;
	T *res;

	do
	{
		__asm__ volatile(
		    "ldrex %0, [%3]\n"
		    "strex %1, %4, [%3]\n"
		    : "=&r"(old_value), "=&r"(res), "+m"(*ptr)
		    : "r"(ptr), "r"(new_value)
		    : "cc", "memory");
	}
	while (res != 0);
	return old_value;
}

inline void *CompareAndSwap(void *volatile *ptr, void *old_value, void *new_value)
{
	return CompareAndSwap((char *volatile *) ptr, (char *) old_value, (char *) new_value);
}

}
