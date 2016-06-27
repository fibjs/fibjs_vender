/*
 *  jssdk-SpiderMonkey.h
 *  Created on: Jun 4, 2016
 *
 *  Copyright (c) 2016 by Leo Hoo
 *  lion@9465.net
 */

#ifndef _jssdk_sm_h__
#define _jssdk_sm_h__

#include "jssdk.h"

#define XP_UNIX 1
#define JS_THREADSAFE 1
#include <SpiderMonkey/include/jsapi.h>

namespace js
{

#define _api SpiderMonkey_api

}

#endif // _jssdk_sm_h__
