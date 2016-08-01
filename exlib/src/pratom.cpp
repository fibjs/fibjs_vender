/*
 *  pratom.cpp
 *  Created on: Mar 19, 2016
 *
 *  Copyright (c) 2016 by Leo Hoo
 *  lion@9465.net
 */

#include "pratom.h"
#include "utils.h"

PRInt32 PR_AtomicIncrement(PRInt32 *val)
{
#ifdef i386
	return exlib::atom_inc((intptr_t*)val);
#else
	return exlib::atom_inc(val);
#endif
}

PRInt32 PR_AtomicDecrement(PRInt32 *val)
{
#ifdef i386
	return exlib::atom_dec((intptr_t*)val);
#else
	return exlib::atom_dec(val);
#endif
}
