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

class Runtime::Locker
{
public:
	Locker(Runtime* rt) : m_rt(rt)
	{
		rt->Locker_enter(*this);
	}

	~Locker()
	{
		m_rt->Locker_leave(*this);
	}

private:
	Runtime* m_rt;
};

class Runtime::Unlocker
{
public:
	Unlocker(Runtime* rt) : m_rt(rt)
	{
		rt->Unlocker_enter(*this);
	}

	~Unlocker()
	{
		m_rt->Unlocker_leave(*this);
	}

private:
	Runtime* m_rt;
};

class Runtime::Scope
{
public:
	Scope(Runtime* rt) : m_rt(rt)
	{
		rt->Scope_enter(*this);
	}

	~Scope()
	{
		m_rt->Scope_leave(*this);
	}

private:
	Runtime* m_rt;
};

class HandleScope
{
public:
	HandleScope(Runtime* rt) : m_rt(rt)
	{
		rt->HandleScope_enter(*this);
	}

	~HandleScope()
	{
		m_rt->HandleScope_leave(*this);
	}

private:
	Runtime* m_rt;
};

class EscapableHandleScope
{
public:
	EscapableHandleScope(Runtime* rt) : m_rt(rt), m_result(JSVAL_NULL)
	{
		rt->EscapableHandleScope_enter(*this);
	}

	~EscapableHandleScope()
	{
		m_rt->EscapableHandleScope_leave(*this);
	}

public:
	Value escape(Value v);

private:
	Runtime* m_rt;
	jsval m_result;

	friend class spider_Runtime;
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

class FunctionCallbackInfo
{

};

}

#include "jssdk-pub.h"

#endif // _jssdk_sm_h__
