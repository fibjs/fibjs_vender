/*
 *  jssdk-SpiderMonkey.cpp
 *  Created on: Mar 31, 2016
 *
 *  Copyright (c) 2016 by Leo Hoo
 *  lion@9465.net
 */

#include "jssdk-SpiderMonkey.h"
#include "utf8.h"
#include <vector>

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

		ok = JS_EvaluateScript(m_cx, m_global, code.c_str(), (int32_t)code.length(),
		                       soname.c_str(), 0, &rval);

		if (ok)
			return Value(this, rval);

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

	bool ValueIsUndefined(const Value& v)
	{
		return v.m_v != 0 && JSVAL_IS_VOID(v.m_v);
	}

	Value NewBoolean(Runtime* rt, bool b)
	{
		return Value(rt, b ? JSVAL_TRUE : JSVAL_FALSE);
	}

	bool ValueToBoolean(const Value& v)
	{
		JSBool b;
		JS_ValueToBoolean(((SpiderMonkey_Runtime*)v.m_rt)->m_cx, v.m_v, &b);
		return (bool)b;
	}

	bool ValueIsBoolean(const Value& v)
	{
		return v.m_v != 0 && JSVAL_IS_BOOLEAN(v.m_v);
	}

	Value NewNumber(Runtime* rt, double d)
	{
		jsval v;
		JS_NewNumberValue(((SpiderMonkey_Runtime*)rt)->m_cx, d, &v);
		return Value(rt, v);
	}

	double ValueToNumber(const Value& v)
	{
		jsdouble d;
		JS_ValueToNumber(((SpiderMonkey_Runtime*)v.m_rt)->m_cx, v.m_v, &d);
		return d;
	}

	bool ValueIsNumber(const Value& v)
	{
		return v.m_v != 0 && JSVAL_IS_NUMBER(v.m_v);
	}

	Value NewString(Runtime* rt, exlib::string s)
	{
		exlib::wstring ws = utf8to16String(s);

		jsval v = STRING_TO_JSVAL(JS_NewUCStringCopyN(((SpiderMonkey_Runtime*)rt)->m_cx,
		                          (jschar*)ws.c_str(), ws.length()));
		return Value(rt, v);
	}

	exlib::string ValueToString(const Value& v)
	{
		JSString* s = JS_ValueToString(((SpiderMonkey_Runtime*)v.m_rt)->m_cx, v.m_v);
		if (s)
			return utf16to8String(exlib::wstring((exlib::wchar*)JS_GetStringChars(s),
			                                     JS_GetStringLength(s)));
		return exlib::string();
	}

	bool ValueIsString(const Value& v)
	{
		return v.m_v != 0 && JSVAL_IS_STRING(v.m_v);
	}

	Object NewObject(Runtime* rt)
	{
		return Value(rt,
		             OBJECT_TO_JSVAL(JS_NewObject(((SpiderMonkey_Runtime*)rt)->m_cx,
		                             NULL, NULL, NULL)));
	}

	bool ObjectHas(const Object& o, exlib::string key)
	{
		JSBool r;
		JS_HasProperty(((SpiderMonkey_Runtime*)o.m_rt)->m_cx, JSVAL_TO_OBJECT(o.m_v),
		               key.c_str(), &r);
		return (bool)r;
	}

	Value ObjectGet(const Object& o, exlib::string key)
	{
		jsval v;
		JS_GetProperty(((SpiderMonkey_Runtime*)o.m_rt)->m_cx, JSVAL_TO_OBJECT(o.m_v),
		               key.c_str(), &v);
		return Value(o.m_rt, v);
	}

	void ObjectSet(const Object& o, exlib::string key, const Value& v)
	{
		JS_SetProperty(((SpiderMonkey_Runtime*)o.m_rt)->m_cx, JSVAL_TO_OBJECT(o.m_v),
		               key.c_str(), (jsval*)&v.m_v);
	}

	void ObjectRemove(const Object& o, exlib::string key)
	{
		JS_DeleteProperty(((SpiderMonkey_Runtime*)o.m_rt)->m_cx, JSVAL_TO_OBJECT(o.m_v),
		                  key.c_str());
	}

	Array ObjectKeys(const Object& o)
	{
		JSIdArray* ids = JS_Enumerate(((SpiderMonkey_Runtime*)o.m_rt)->m_cx,
		                              JSVAL_TO_OBJECT(o.m_v));
		std::vector<jsval> vals;

		int32_t i, length = ids->length;

		vals.resize(length);
		for (i = 0; i < length; i ++)
			JS_IdToValue(((SpiderMonkey_Runtime*)o.m_rt)->m_cx,
			             ids->vector[i], &vals[i]);
		return Value(o.m_rt,
		             OBJECT_TO_JSVAL(JS_NewArrayObject(((SpiderMonkey_Runtime*)o.m_rt)->m_cx,
		                             length, vals.data())));
	}

	bool ValueIsObject(const Value& v)
	{
		return v.m_v != 0 && JSVAL_IS_OBJECT(v.m_v);
	}

	Array NewArray(Runtime* rt, int32_t sz)
	{
		return Value(rt,
		             OBJECT_TO_JSVAL(JS_NewArrayObject(((SpiderMonkey_Runtime*)rt)->m_cx, sz, 0)));
	}

	int32_t ArrayGetLength(const Array& a)
	{
		jsuint n;
		JS_GetArrayLength(((SpiderMonkey_Runtime*)a.m_rt)->m_cx, JSVAL_TO_OBJECT(a.m_v), &n);
		return n;
	}

	Value ArrayGet(const Array& a, int32_t idx)
	{
		jsval v;
		JS_GetElement(((SpiderMonkey_Runtime*)a.m_rt)->m_cx, JSVAL_TO_OBJECT(a.m_v), idx, &v);
		return Value(a.m_rt, v);
	}

	void ArraySet(const Array& a, int32_t idx, const Value& v)
	{
		JS_SetElement(((SpiderMonkey_Runtime*)a.m_rt)->m_cx, JSVAL_TO_OBJECT(a.m_v),
		              idx, (jsval*)&v.m_v);
	}

	void ArrayRemove(const Array& a, int32_t idx)
	{
		JS_DeleteElement(((SpiderMonkey_Runtime*)a.m_rt)->m_cx, JSVAL_TO_OBJECT(a.m_v), idx);
	}

	bool ValueIsArray(const Value& v)
	{
		if (!ValueIsObject(v))
			return false;
		return (bool)JS_IsArrayObject(((SpiderMonkey_Runtime*)v.m_rt)->m_cx, JSVAL_TO_OBJECT(v.m_v));
	}
};

static Api_SpiderMonkey s_api;
Api* _SpiderMonkey_api = &s_api;

}