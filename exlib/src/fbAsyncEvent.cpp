/*
 *  fbAsyncEvent.cpp
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#include "service.h"

namespace exlib
{

extern Service *root;

int AsyncEvent::post(int v)
{
	m_v = v;
	root->m_aEvents.putTail(this);

	return 0;
}

}
