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
		JS_BeginRequest(m_cx);
		m_global = JS_NewObject(m_cx, NULL, 0, 0);
		JS_InitStandardClasses(m_cx, m_global);
	}

public:
	void destroy()
	{
		JS_EndRequest(m_cx);
		JS_DestroyContext(m_cx);
		JS_DestroyRuntime(m_rt);
		delete this;
	}

	void Locker_enter(Locker& locker)
	{

	}

	void Locker_leave(Locker& locker)
	{

	}

	void Unlocker_enter(Unlocker& unlocker)
	{

	}

	void Unlocker_leave(Unlocker& unlocker)
	{

	}

	void Scope_enter(Scope& scope)
	{

	}

	void Scope_leave(Scope& scope)
	{

	}

	Value execute(const char* code, int32_t size, const char* soname)
	{
		jsval rval;
		JSBool ok;

		ok = JS_EvaluateScript(m_cx, m_global, code, size,
		                       soname, 0, &rval);

		if (ok)
			return Value(m_cx, rval);

		return Value();
	}

private:
	JSRuntime *m_rt;
	JSContext *m_cx;
	JSObject *m_global;

	friend class Api_SpiderMonkey;
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

	Value NewBoolean(Runtime* rt, bool b)
	{
		return Value(((SpiderMonkey_Runtime*)rt)->m_cx,
		             b ? JSVAL_TRUE : JSVAL_FALSE);
	}

	bool ValueToBoolean(Value& v)
	{
		JSBool d;
		JS_ValueToBoolean(v.m_cx, v.m_v, &d);
		return d;
	}

	Value NewNumber(Runtime* rt, double d)
	{
		jsval v;
		JS_NewNumberValue(((SpiderMonkey_Runtime*)rt)->m_cx, d, &v);
		return Value(((SpiderMonkey_Runtime*)rt)->m_cx, v);
	}

	double ValueToNumber(Value& v)
	{
		jsdouble d;
		JS_ValueToNumber(v.m_cx, v.m_v, &d);
		return d;
	}

};

static Api_SpiderMonkey s_api;
Api* _SpiderMonkey_api = &s_api;

}