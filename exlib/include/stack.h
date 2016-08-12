/*
 *  stack.h
 *  Created on: Jul 14, 2015
 *
 *  Copyright (c) 2015 by Leo Hoo
 *  lion@9465.net
 */

#include "osconfig.h"
#include "utils.h"
#include <stdio.h>

#ifndef _ex_stack_h__
#define _ex_stack_h__

namespace exlib
{

#ifdef _WIN32

extern "C" void win_switch(void *from, void *to);
#define fb_switch win_switch

#else

extern "C" void nix_switch(void *from, void *to);
#define fb_switch nix_switch

#endif

class context: public registers
{
public:
    void switchto(void *to)
    {
        fb_switch(this, to);
    }
};

}

#endif

