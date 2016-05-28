/*
 *  prthread.cpp
 *  Created on: Mar 19, 2016
 *
 *  Copyright (c) 2016 by Leo Hoo
 *  lion@9465.net
 */

#include "prthread.h"
#include "fiber.h"
#include "thread.h"

PRThread* PR_GetCurrentThread()
{
	return exlib::Fiber::current();
}

PRStatus PR_NewThreadPrivateIndex(PRUintn *newIndex, PRThreadPrivateDTOR destructor)
{
	*newIndex = exlib::Thread_base::tlsAlloc(destructor);
	return PR_SUCCESS;
}

PRStatus PR_SetThreadPrivate(PRUintn tpdIndex, void *priv)
{
	exlib::Thread_base::tlsPut(tpdIndex, priv);
	return PR_SUCCESS;
}

void* PR_GetThreadPrivate(PRUintn tpdIndex)
{
	return exlib::Thread_base::tlsGet(tpdIndex);
}

PRStatus PR_CallOnce(PRCallOnceType *once, PRCallOnceFN func)
{
	exlib::InitOnce(once, (void (*)())func);
	return PR_SUCCESS;
}