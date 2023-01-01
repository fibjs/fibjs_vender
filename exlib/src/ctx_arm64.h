/*
 *  ctx_arm64.h
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
    intptr_t x0;
    intptr_t x1;
    intptr_t x2;
    intptr_t x3;
    intptr_t x4;
    intptr_t x5;
    intptr_t x6;
    intptr_t x7;
    intptr_t x8;
    intptr_t x9;
    intptr_t x10;
    intptr_t x11;
    intptr_t x12;
    intptr_t x13;
    intptr_t x14;
    intptr_t x15;
    intptr_t x16;
    intptr_t x17;
    intptr_t x18;
    intptr_t x19;
    intptr_t x20;
    intptr_t x21;
    intptr_t x22;
    intptr_t x23;
    intptr_t x24;
    intptr_t x25;
    intptr_t x26;
    intptr_t x27;
    intptr_t x28;
    union {
        intptr_t x29;
        intptr_t fp;
    };
    union {
        intptr_t x30;
        intptr_t lr;
    };
    intptr_t sp;
    intptr_t d0;
    intptr_t d1;
    intptr_t d2;
    intptr_t d3;
    intptr_t d4;
    intptr_t d5;
    intptr_t d6;
    intptr_t d7;
    intptr_t d8;
    intptr_t d9;
    intptr_t d10;
    intptr_t d11;
    intptr_t d12;
    intptr_t d13;
    intptr_t d14;
    intptr_t d15;
    intptr_t d16;
    intptr_t d17;
    intptr_t d18;
    intptr_t d19;
    intptr_t d20;
    intptr_t d21;
    intptr_t d22;
    intptr_t d23;
    intptr_t d24;
    intptr_t d25;
    intptr_t d26;
    intptr_t d27;
    intptr_t d28;
    intptr_t d29;
    intptr_t d30;
    intptr_t d31;
};

#pragma pack()
}
