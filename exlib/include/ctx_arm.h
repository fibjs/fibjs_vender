/*
 *  ctx_arm.h
 *  Created on: Jul 10, 2014
 *
 *  Copyright (c) 2014 by Leo Hoo
 *  lion@9465.net
 */

#pragma once

namespace exlib {

#pragma pack(1)

class registers {
public:
    intptr_t r0;
    intptr_t r1;
    intptr_t r2;
    intptr_t r3;
    intptr_t r4;
    intptr_t r5;
    intptr_t r6;
    intptr_t r7;
    intptr_t r8;
    intptr_t r9;
    intptr_t r10;
    union {
        intptr_t r11;
        intptr_t fp;
    };
    intptr_t r12;
    union {
        intptr_t r13;
        intptr_t sp;
    };
    union {
        intptr_t r14;
        intptr_t lr;
    };
};

#pragma pack()
}
