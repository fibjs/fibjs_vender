/*
 *  utils_mips.h
 *  Created on: Aug 12, 2016
 *
 *  Copyright (c) 2016 by Leo Hoo
 *  lion@9465.net
 */

namespace exlib {

#pragma pack(1)

class registers {
public:
    intptr_t sp;
    intptr_t ra;

    intptr_t a0;
    intptr_t a1;
    intptr_t a2;
    intptr_t a3;

    intptr_t s0;
    intptr_t s1;
    intptr_t s2;
    intptr_t s3;
    intptr_t s4;
    intptr_t s5;
    intptr_t s6;
    intptr_t s7;
    intptr_t s8;
};

#pragma pack()
}
