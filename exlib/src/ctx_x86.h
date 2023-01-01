/*
 *  ctx_x86.h
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
};

#pragma pack()
}
