/*
 *  fiber.h
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#ifndef _ex_fiber_h__
#define _ex_fiber_h__

#include "osconfig.h"
#include <stdint.h>
#include <string.h>
#include "event.h"

namespace exlib
{

typedef intptr_t reg_type;

#pragma pack (1)

#if defined(x64)

typedef struct
{
    union {
        reg_type Rbp;
        reg_type fp;
    };
    reg_type Rbx;
    reg_type Rcx;
    reg_type Rdx;
    reg_type Rsi;
    reg_type Rdi;
    reg_type R12;
    reg_type R13;
    reg_type R14;
    reg_type R15;
    union {
        reg_type Rsp;
        reg_type sp;
    };
    union {
        reg_type Rip;
        reg_type ip;
    };
} context;

#elif defined(I386)

typedef struct
{
    union {
        reg_type Ebp;
        reg_type fp;
    };
    reg_type Ebx;
    reg_type Ecx;
    reg_type Edx;
    reg_type Esi;
    reg_type Edi;
    union {
        reg_type Esp;
        reg_type sp;
    };
    union {
        reg_type Eip;
        reg_type ip;
    };
} context;

#elif defined(arm)

typedef struct
{
    reg_type r0;
    reg_type r1;
    reg_type r2;
    reg_type r3;
    reg_type r4;
    reg_type r5;
    reg_type r6;
#ifdef __thumb2__
    union {
        reg_type r7;
        reg_type fp;
    };
#else
    reg_type r7;
#endif
    reg_type r8;
    reg_type r9;
    reg_type r10;
#ifndef __thumb2__
    union {
        reg_type r11;
        reg_type fp;
    };
#else
    reg_type r11;
#endif
    reg_type r12;
    union {
        reg_type r13;
        reg_type sp;
    };
    union {
        reg_type r14;
        reg_type ip;
    };
} context;

#endif
#pragma pack ()

#define TLS_SIZE    8

#define FIBER_STACK_SIZE    (65536 * 2)

class AsyncEvent : public linkitem
{
public:
    virtual ~AsyncEvent()
    {}

    virtual int post(int v);
    virtual int apost(int v)
    {
        return post(v);
    }

    virtual void callback()
    {
        weak.set();
    }

    int wait()
    {
        weak.wait();
        return m_v;
    }

    bool isSet()
    {
        return weak.isSet();
    }

    int result()
    {
        return m_v;
    }

    void sleep(int ms);

private:
    Event weak;
    int m_v;
};

class Fiber : public linkitem
{
public:
    void Ref()
    {
        refs_++;
    }

    void Unref()
    {
        if (--refs_ == 0)
            destroy();
    }

    void join()
    {
        m_joins.wait();
    }

    void set_name(const char *name)
    {
        strncpy(name_, name, sizeof(name_));
        name_[sizeof(name_) - 1] = '\0';
    }

public:
    static void sleep(int ms);
    static void yield();
    static Fiber *Current();
    static Fiber *Create(void *(*func)(void *), void *data = 0,
                         int stacksize = FIBER_STACK_SIZE);

    static int tlsAlloc();
    static void *tlsGet(int idx);
    static void tlsPut(int idx, void *v);
    static void tlsFree(int idx);

private:
    void destroy();

public:
    reg_type refs_;
    context m_cntxt;
    linkitem m_link;
    Event m_joins;
    void *m_tls[TLS_SIZE];
    char name_[16];
};

}

#endif

