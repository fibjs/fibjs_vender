/*
 *  jssdk-SpiderMonkey.cpp
 *  Created on: Mar 31, 2016
 *
 *  Copyright (c) 2016 by Leo Hoo
 *  lion@9465.net
 */

#include "jssdk-SpiderMonkey.h"

namespace js
{

class SpiderMonkey_Runtime : public Runtime
{
public:
	SpiderMonkey_Runtime()
	{
		m_rt = JS_NewRuntime(8L * 1024L * 1024L);
		m_cx = JS_NewContext(m_rt, 8192);
	}

public:
	virtual void destroy()
	{
		delete this;
	}

	virtual void enter()
	{
	}

	virtual void leave()
	{
	}

private:
	JSRuntime *m_rt;
	JSContext *m_cx;
};

class Api_SpiderMonkey : public Api
{
public:
	virtual const char* getEngine()
	{
		return "SpiderMonkey";
	}

	virtual int32_t getVersion()
	{
		return version;
	}

	virtual void init()
	{

	}

	virtual Runtime* createRuntime()
	{
		return new SpiderMonkey_Runtime();
	}

};

static Api_SpiderMonkey s_api;
Api* _SpiderMonkey_api = &s_api;

}