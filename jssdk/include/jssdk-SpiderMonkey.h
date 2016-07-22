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

class Api_SpiderMonkey;
class SpiderMonkey_Runtime;

class Locker
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

class Unlocker
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

class Scope
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

}

#include "jssdk-pub.h"

#endif // _jssdk_sm_h__
