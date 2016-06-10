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
	return std::atomic_fetch_add((std::atomic_int*)val, 1) + 1;
}

PRInt32 PR_AtomicDecrement(PRInt32 *val)
{
	return std::atomic_fetch_sub((std::atomic_int*)val, 1) - 1;
}
