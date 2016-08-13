/*
 *  jssdk-spider.h
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

#define _api spider_api

class Api_spider;
class spider_Runtime;

class Runtime_core::Locker
{
public:
	Locker(Runtime* rt);
	~Locker();

private:
	Runtime* m_rt;
};

class Runtime_core::Unlocker
{
public:
	Unlocker(Runtime* rt);
	~Unlocker();

private:
	Runtime* m_rt;
};

class Runtime_core::Scope
{
public:
	Scope(Runtime* rt);
	~Scope();

private:
	Runtime* m_rt;
};

class HandleScope
{
public:
	HandleScope(Runtime* rt);
	~HandleScope();

private:
	Runtime* m_rt;
};

class js_value
{
public:
	js_value() : m_v(JSVAL_NULL)
	{}

	js_value(const jsval& v) : m_v(v)
	{}

public:
	jsval operator=(const jsval& v)
	{
		return m_v = v;
	}

	jsval operator=(const js_value& v)
	{
		return m_v = v.m_v;
	}

	operator jsval() const
	{
		return m_v;
	}

	bool IsEmpty() const
	{
		return m_v == 0;
	}

private:
	jsval m_v;
};

class EscapableHandleScope
{
public:
	EscapableHandleScope(Runtime* rt);
	~EscapableHandleScope();

public:
	Value escape(Value v);

private:
	Runtime* m_rt;
	js_value m_result;

	friend class spider_Runtime;
};

class FunctionCallbackInfo;
typedef void (*FunctionCallback)(const FunctionCallbackInfo& info);

class FunctionCallbackInfo
{

};

}

#include "jssdk-pub.h"

#endif // _jssdk_sm_h__
