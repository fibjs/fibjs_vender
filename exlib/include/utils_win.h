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

#ifdef x64
typedef LONGLONG atomic_t;
inline void MemoryBarrier()
{
    ::__faststorefence();
}
#else
typedef LONG atomic_t;
inline void MemoryBarrier()
{
    LONG Barrier;
    __asm
    {
        xchg Barrier, eax
    }
}
#endif

atomic_t CompareAndSwap(volatile atomic_t *ptr, atomic_t old_value, atomic_t new_value);

void *_CompareAndSwap(void *volatile *Destination, void *Exchange, void *Comparand);

template<typename T>
inline T *CompareAndSwap(T *volatile *ptr, T *old_value, T *new_value)
{
    void *result = _CompareAndSwap((void *volatile *)ptr, (void *)new_value, (void *)old_value);
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

atomic_t atom_add(volatile atomic_t *dest, atomic_t incr);
atomic_t atom_inc(volatile atomic_t *dest);
atomic_t atom_dec(volatile atomic_t *dest);
atomic_t atom_xchg(volatile atomic_t *ptr, atomic_t new_value);

}
