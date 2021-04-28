/*
 *  ctx_x64.h
 *  Created on: Jul 17, 2014
 *
 *  Copyright (c) 2014 by Leo Hoo
 *  lion@9465.net
 */

#pragma once

namespace exlib {

#pragma pack(1)

class registers {
public:
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
};

#pragma pack()
}
