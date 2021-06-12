/*
 *  jssdk_api.cpp
 *  Created on: Mar 31, 2016
 *
 *  Copyright (c) 2016 by Leo Hoo
 *  lion@9465.net
 */

#include "jssdk.h"
#include <string.h>

namespace js {

const int32_t Api::version = 1;
/* singleton instance for v8 engine */
Api* v8_api;

/* activate js api in program:
	- introduce javascript engine
	- make apis in namespace `js::` work
 */
bool use_js_engine(Api*& global_api_instance, Api* _api, const char* engine_name)
{
    if (strcmp(engine_name, _api->getEngineName()) || Api::version != _api->getVersion())
        return false;

    global_api_instance = _api;
    return true;
}

};