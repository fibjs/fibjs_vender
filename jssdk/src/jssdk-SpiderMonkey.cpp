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
#include "exlib/include/fiber.h"

namespace js
{

class SpiderMonkey_Runtime : public Runtime
{
public:
	SpiderMonkey_Runtime(class Api* api) : m_count(0)
	{
		m_api = api;
		m_rt = JS_NewRuntime(8L * 1024L * 1024L);
		m_cx = JS_NewContext(m_rt, 8192);

		JS_BeginRequest(m_cx);
		JS_InitStandardClasses(m_cx, JS_NewObject(m_cx, NULL, 0, 0));
		JS_EndRequest(m_cx);
	}

public:
	void destroy()
	{
		JS_SetContextThread(m_cx);
		JS_DestroyContext(m_cx);
		JS_DestroyRuntime(m_rt);
		delete this;
	}

	void lock()
	{
		m_lock.lock();

		assert(m_lock.owned());

		if (++m_count == 1)
		{
			JS_SetContextThread(m_cx);
			JS_BeginRequest(m_cx);
		}
	}

	void unlock()
	{
		if (--m_count == 0)
		{
			JS_EndRequest(m_cx);
			JS_ClearContextThread(m_cx);
		}

		assert(m_lock.owned());

		m_lock.unlock();
	}

	void Locker_enter(Locker& locker)
	{
		lock();
	}

	void Locker_leave(Locker& locker)
	{
		unlock();
	}

	void Unlocker_enter(Unlocker& unlocker)
	{
		unlock();
	}

	void Unlocker_leave(Unlocker& unlocker)
	{
		lock();
	}

	void Scope_enter(Scope& scope)
	{
		lock();
	}

	void Scope_leave(Scope& scope)
	{
		unlock();
	}

	Object GetGlobal()
	{
		return Object(this, OBJECT_TO_JSVAL(JS_GetGlobalObject(m_cx)));
	}

	Value execute(exlib::string code, exlib::string soname)
	{
		jsval rval;

		JSBool ok = JS_EvaluateScript(m_cx, JS_GetGlobalObject(m_cx), code.c_str(),
		                              (int32_t)code.length(), soname.c_str(), 0, &rval);

		if (ok)
			return Value(this, rval);

		return Value();
	}

	Value NewUndefined()
	{
		return Value(this, JSVAL_VOID);
	}

	Value NewBoolean(bool b)
	{
		return Value(this, b ? JSVAL_TRUE : JSVAL_FALSE);
	}

	Value NewNumber(double d)
	{
		jsval v;
		JS_NewNumberValue(m_cx, d, &v);
		return Value(this, v);
	}

	Value NewString(exlib::string s)
	{
		exlib::wstring ws = utf8to16String(s);

		jsval v = STRING_TO_JSVAL(JS_NewUCStringCopyN(m_cx, (jschar*)ws.c_str(),
		                          ws.length()));
		return Value(this, v);
	}

	Object NewObject()
	{
		return Object(this, OBJECT_TO_JSVAL(JS_NewObject(m_cx,
		                                    NULL, NULL, NULL)));
	}

	Array NewArray(int32_t sz)
	{
		return Array(this, OBJECT_TO_JSVAL(JS_NewArrayObject(m_cx, sz, 0)));
	}

	Function NewFunction(NativeFunction callback)
	{
		return Function(this, OBJECT_TO_JSVAL(JS_NewFunction(m_cx, (JSNative)callback,
		                                      0, 0, NULL, NULL)));
	}

private:
	JSRuntime *m_rt;
	JSContext *m_cx;

	exlib::Locker m_lock;
	intptr_t m_count;

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
		return new SpiderMonkey_Runtime(this);
	}

	bool ValueIsUndefined(const Value& v)
	{
		return v.m_v != 0 && JSVAL_IS_VOID(v.m_v);
	}

	bool ValueToBoolean(const Value& v)
	{
		JSBool b;
		JS_ValueToBoolean(((SpiderMonkey_Runtime*)v.m_rt)->m_cx, v.m_v, &b);
		return JS_FALSE != b;
	}

	bool ValueIsBoolean(const Value& v)
	{
		return v.m_v != 0 && JSVAL_IS_BOOLEAN(v.m_v);
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

	exlib::string ValueToString(const Value& v)
	{
		JSString* s = JS_ValueToString(((SpiderMonkey_Runtime*)v.m_rt)->m_cx, v.m_v);
		if (s)
			return utf16to8String((exlib::wchar*)JS_GetStringChars(s),
			                      (int32_t)JS_GetStringLength(s));
		return exlib::string();
	}

	bool ValueIsString(const Value& v)
	{
		return v.m_v != 0 && JSVAL_IS_STRING(v.m_v);
	}

	bool ObjectHas(const Object& o, exlib::string key)
	{
		JSBool r;
		exlib::wstring wkey(utf8to16String(key));
		JS_HasUCProperty(((SpiderMonkey_Runtime*)o.m_rt)->m_cx, JSVAL_TO_OBJECT(o.m_v),
		                 (jschar*)wkey.c_str(), wkey.length(), &r);
		return JS_FALSE != r;
	}

	Value ObjectGet(const Object& o, exlib::string key)
	{
		jsval v;
		exlib::wstring wkey(utf8to16String(key));
		JS_GetUCProperty(((SpiderMonkey_Runtime*)o.m_rt)->m_cx, JSVAL_TO_OBJECT(o.m_v),
		                 (jschar*)wkey.c_str(), wkey.length(), &v);
		return Value(o.m_rt, v);
	}

	void ObjectSet(const Object& o, exlib::string key, const Value& v)
	{
		exlib::wstring wkey(utf8to16String(key));
		JS_SetUCProperty(((SpiderMonkey_Runtime*)o.m_rt)->m_cx, JSVAL_TO_OBJECT(o.m_v),
		                 (jschar*)wkey.c_str(), wkey.length(), (jsval*)&v.m_v);
	}

	void ObjectRemove(const Object& o, exlib::string key)
	{
		jsval v;
		exlib::wstring wkey(utf8to16String(key));
		JS_DeleteUCProperty2(((SpiderMonkey_Runtime*)o.m_rt)->m_cx, JSVAL_TO_OBJECT(o.m_v),
		                     (jschar*)wkey.c_str(), wkey.length(), &v);
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

	Object ObjectGetSlot(const Object& o)
	{
		return o;
	}

	bool ObjectHasPrivate(const Object& o, exlib::string key)
	{
		return ObjectGetSlot(o).has(key);
	}

	Value ObjectGetPrivate(const Object& o, exlib::string key)
	{
		return ObjectGetSlot(o).get(key);
	}

	void ObjectSetPrivate(const Object& o, exlib::string key, const Value& v)
	{
		ObjectGetSlot(o).set(key, v);
	}

	void ObjectRemovePrivate(const Object& o, exlib::string key)
	{
		ObjectGetSlot(o).remove(key);
	}

	bool ValueIsObject(const Value& v)
	{
		return v.m_v != 0 && JSVAL_IS_OBJECT(v.m_v);
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
		return JS_FALSE != JS_IsArrayObject(((SpiderMonkey_Runtime*)v.m_rt)->m_cx, JSVAL_TO_OBJECT(v.m_v));
	}

	Value FunctionCall(const Function& f, Value* args, int32_t argn)
	{
		SpiderMonkey_Runtime* rt = (SpiderMonkey_Runtime*)f.m_rt;
		JSFunction * func = JS_ValueToFunction(rt->m_cx, f.m_v);
		std::vector<jsval> _args;
		int32_t i;

		_args.resize(argn);
		for (i = 0; i < argn; i ++)
			_args[i] = args[i].m_v;

		jsval result;

		JSBool ok = JS_CallFunction(rt->m_cx, NULL, func, argn, _args.data(), &result);
		if (ok)
			return Value(rt, result);

		return Value();
	}

	bool ValueIsFunction(const Value& v)
	{
		if (!ValueIsObject(v))
			return false;
		return JS_FALSE != JS_ObjectIsFunction(((SpiderMonkey_Runtime*)v.m_rt)->m_cx, JSVAL_TO_OBJECT(v.m_v));
	}
};

static Api_SpiderMonkey s_api;
Api* _SpiderMonkey_api = &s_api;

}