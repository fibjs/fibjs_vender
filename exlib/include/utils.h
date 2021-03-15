/*
 *  utils.h
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#pragma once

#include <stdint.h>
#include "osconfig.h"
#include <atomic>

#if defined(amd64)
#include "utils_x64.h"
#elif defined(i386)
#include "utils_x86.h"
#elif defined(arm64)
#include "utils_arm64.h"
#elif defined(arm)
#include "utils_arm.h"
#elif defined(mips)
#include "utils_mips.h"
#elif defined(mips64)
#include "utils_mips64.h"
#else
#error unknoen arch....
#endif

#ifdef _WIN32
#include <windows.h>
#endif

namespace exlib {

class atomic {
public:
    atomic(intptr_t new_value = 0)
        : m_v(new_value)
    {
    }

    atomic(const atomic& new_value)
        : m_v((intptr_t)new_value.m_v)
    {
    }

public:
    intptr_t operator=(intptr_t new_value)
    {
        return m_v = new_value;
    }

    intptr_t operator=(const atomic& new_value)
    {
        return m_v = (intptr_t)new_value.m_v;
    }

    operator intptr_t() const
    {
        return m_v;
    }

    intptr_t value() const
    {
        return m_v;
    }

    intptr_t CompareAndSwap(intptr_t old_value, intptr_t new_value)
    {
        m_v.compare_exchange_strong(old_value, new_value);
        return old_value;
    }

    inline intptr_t xchg(intptr_t new_value)
    {
        return m_v.exchange(new_value);
    }

    inline intptr_t inc()
    {
        return ++m_v;
    }

    inline intptr_t dec()
    {
        return --m_v;
    }

private:
    std::atomic_intptr_t m_v;
};

template <class T>
class atomic_ptr {
public:
    atomic_ptr(T* new_value = 0)
        : m_v(new_value)
    {
    }

    atomic_ptr(const atomic_ptr& new_value)
        : m_v((T*)new_value.m_v)
    {
    }

public:
    T* operator=(T* new_value)
    {
        return m_v = new_value;
    }

    T* operator=(const atomic_ptr& new_value)
    {
        return m_v = (T*)new_value.m_v;
    }

    operator T*() const
    {
        return m_v;
    }

    T* value() const
    {
        return m_v;
    }

    T* CompareAndSwap(T* old_value, T* new_value)
    {
        m_v.compare_exchange_strong(old_value, new_value);
        return old_value;
    }

    inline T* xchg(T* new_value)
    {
        return m_v.exchange(new_value);
    }

private:
    std::atomic<T*> m_v;
};

class spinlock {
public:
    void lock()
    {
        while (locked.test_and_set(std::memory_order_acquire)) {
        }
    }

    void unlock()
    {
        locked.clear(std::memory_order_release);
    }

private:
    std::atomic_flag locked = ATOMIC_FLAG_INIT;
};
}

#ifndef ARRAYSIZE
#define ARRAYSIZE(a) \
    ((sizeof(a) / sizeof(*(a))) / static_cast<size_t>(!(sizeof(a) % sizeof(*(a)))))
#endif
