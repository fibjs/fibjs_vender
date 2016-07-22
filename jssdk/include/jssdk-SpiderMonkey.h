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

class Value
{
public:
	Value() : m_cx(NULL), m_v(JSVAL_NULL)
	{}

	Value(JSContext *cx, jsval v) : m_cx(cx), m_v(v)
	{
	}

	Value(const Value& v) : m_cx(v.m_cx), m_v(v.m_v)
	{
	}

	Value& operator=(const Value &v)
	{
		m_cx = v.m_cx;
		m_v = v.m_v;
		return *this;
	}

public:
	bool toBoolean()
	{
		return _api->ValueToBoolean(*this);
	}

	double toNumber()
	{
		return _api->ValueToNumber(*this);
	}

	exlib::string toString()
	{
		return _api->ValueToString(*this);
	}

private:
	JSContext *m_cx;
	jsval m_v;

	friend class Api_SpiderMonkey;
};

}

#endif // _jssdk_sm_h__
