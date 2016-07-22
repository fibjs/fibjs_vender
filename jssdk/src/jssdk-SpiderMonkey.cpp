/*
 *  jssdk-SpiderMonkey.cpp
 *  Created on: Mar 31, 2016
 *
 *  Copyright (c) 2016 by Leo Hoo
 *  lion@9465.net
 */

#include "jssdk-SpiderMonkey.h"
#include "utf8.h"

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

	Value execute(exlib::string code, exlib::string soname)
	{
		jsval rval;
		JSBool ok;

		ok = JS_EvaluateScript(m_cx, m_global, code.c_str(), code.length(),
		                       soname.c_str(), 0, &rval);

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
		JSBool b;
		JS_ValueToBoolean(v.m_cx, v.m_v, &b);
		return b ? true : false;
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

	Value NewString(Runtime* rt, exlib::string s)
	{
		exlib::wstring ws = utf8to16String(s);

		jsval v = STRING_TO_JSVAL(JS_NewUCStringCopyN(((SpiderMonkey_Runtime*)rt)->m_cx,
		                          (jschar*)ws.c_str(), ws.length()));
		return Value(((SpiderMonkey_Runtime*)rt)->m_cx, v);
	}

	exlib::string ValueToString(Value& v)
	{
		JSString* s = JS_ValueToString(v.m_cx, v.m_v);
		if (s)
			return utf16to8String(exlib::wstring((exlib::wchar*)JS_GetStringChars(s), JS_GetStringLength(s)));
		return exlib::string();
	}

};

static Api_SpiderMonkey s_api;
Api* _SpiderMonkey_api = &s_api;

}