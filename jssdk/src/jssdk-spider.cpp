/*
 *  jssdk-spider.cpp
 *  Created on: Mar 31, 2016
 *
 *  Copyright (c) 2016 by Leo Hoo
 *  lion@9465.net
 */

#include "jssdk-spider.h"
#include "utf8.h"
#include <vector>
#include "exlib/include/fiber.h"

namespace js
{

class spider_Runtime : public Runtime
{

private:
	static JSBool func_stub(JSContext *cx, JSObject *obj, uintN argc,
	                        jsval *argv, jsval *rval)
	{
		jsval v;

		JS_GetProperty(cx, obj, "func", &v);
		JS_GetReservedSlot(cx, JSVAL_TO_OBJECT(v), 0, &v);
		FunctionCallback callback = (FunctionCallback)JSVAL_TO_PRIVATE(v);

		FunctionCallbackInfo info;

		callback(info);

		return 0;
	}

public:
	spider_Runtime(class Api* api) : m_count(0)
	{
		static char func_stub_src[] =
		    "(function(stub, func) { "
		    "	return (function() { "
		    "		return stub.apply({ "
		    "			\"this\": this, "
		    "			\"func\": func "
		    "		}, arguments); "
		    "	}); "
		    "});";

		m_api = api;
		m_rt = JS_NewRuntime(8L * 1024L * 1024L);
		JS_SetRuntimePrivate(m_rt, this);

		m_cx = JS_NewContext(m_rt, 8192);

		JS_BeginRequest(m_cx);
		JS_InitStandardClasses(m_cx, JS_NewObject(m_cx, NULL, 0, 0));

		JS_SetOptions(m_cx, JSOPTION_STRICT | JSOPTION_VAROBJFIX);

		JS_EvaluateScript(m_cx, JS_GetGlobalObject(m_cx), func_stub_src,
		                  sizeof(func_stub_src) - 1, "", 1, &m_func_factory);
		assert(JSVAL_IS_OBJECT(m_func_factory));
		assert(JS_ObjectIsFunction(m_cx, JSVAL_TO_OBJECT(m_func_factory)));
		JS_AddRoot(m_cx, &m_func_factory);

		m_stub = OBJECT_TO_JSVAL(JS_NewFunction(m_cx, func_stub,
		                                        0, 0, NULL, NULL));
		assert(JSVAL_IS_OBJECT(m_stub));
		JS_AddRoot(m_cx, &m_stub);

		JS_EndRequest(m_cx);
	}

public:
	void destroy()
	{
		JS_RemoveRoot(m_cx, &m_stub);
		JS_RemoveRoot(m_cx, &m_func_factory);
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
		JS_EnterLocalRootScope(m_cx);
	}

	void Scope_leave(Scope& scope)
	{
		JS_LeaveLocalRootScope(m_cx);
		unlock();
	}

	void HandleScope_enter(HandleScope& scope)
	{
		JS_EnterLocalRootScope(m_cx);
	}

	void HandleScope_leave(HandleScope& scope)
	{
		JS_LeaveLocalRootScope(m_cx);
	}

	void EscapableHandleScope_enter(EscapableHandleScope& scope)
	{
		JS_EnterLocalRootScope(m_cx);
	}

	void EscapableHandleScope_leave(EscapableHandleScope& scope)
	{
		JS_LeaveLocalRootScopeWithResult(m_cx, scope.m_result);
	}

	Value EscapableHandleScope_escape(EscapableHandleScope& scope, Value v)
	{
		scope.m_result = v.m_v;
		return v;
	}

	void gc()
	{
		JS_GC(m_cx);
	}

	Object GetGlobal()
	{
		return Object(this, OBJECT_TO_JSVAL(JS_GetGlobalObject(m_cx)));
	}

	Value execute(exlib::string code, exlib::string soname)
	{
		jsval rval;
		exlib::wstring wcode(utf8to16String(code));

		JSBool ok = JS_EvaluateUCScript(m_cx, JS_GetGlobalObject(m_cx), wcode.c_str(),
		                                (int32_t)wcode.length(), soname.c_str(), 0, &rval);

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

	Function NewFunction(FunctionCallback callback)
	{
		static JSClass func_CallbackData = {
			"CallbackData", JSCLASS_HAS_PRIVATE | JSCLASS_HAS_RESERVED_SLOTS(1),
			JS_PropertyStub, JS_PropertyStub, JS_PropertyStub, JS_PropertyStub,
			JS_EnumerateStub, JS_ResolveStub, JS_ConvertStub, JS_FinalizeStub,
			JSCLASS_NO_OPTIONAL_MEMBERS
		};

		JSObject* func = JS_NewObject(m_cx, &func_CallbackData, NULL, NULL);
		JS_SetReservedSlot(m_cx, func, 0, PRIVATE_TO_JSVAL(callback));

		jsval args[2] = {m_stub, OBJECT_TO_JSVAL(func)};
		jsval result = JSVAL_NULL;
		JSBool r = JS_CallFunctionValue(m_cx, JS_GetGlobalObject(m_cx), m_func_factory,
		                                2, args, &result);
		assert(r != JS_FALSE);
		assert(JSVAL_IS_OBJECT(result));
		assert(JS_ObjectIsFunction(m_cx, JSVAL_TO_OBJECT(result)));

		return Function(this, result);
	}

private:
	JSRuntime *m_rt;
	JSContext *m_cx;

	jsval m_func_factory;
	jsval m_stub;

	exlib::Locker m_lock;
	intptr_t m_count;

	friend class Api_spider;
};

class Api_spider : public Api
{
public:
	virtual const char* getEngine()
	{
		return "spider";
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
		return new spider_Runtime(this);
	}

public:
	bool ValueIsUndefined(const Value& v)
	{
		return v.m_v != 0 && JSVAL_IS_VOID(v.m_v);
	}

public:
	bool ValueToBoolean(const Value& v)
	{
		JSBool b;
		JS_ValueToBoolean(((spider_Runtime*)v.m_rt)->m_cx, v.m_v, &b);
		return JS_FALSE != b;
	}

	bool ValueIsBoolean(const Value& v)
	{
		return v.m_v != 0 && JSVAL_IS_BOOLEAN(v.m_v);
	}

public:
	double ValueToNumber(const Value& v)
	{
		jsdouble d;
		JS_ValueToNumber(((spider_Runtime*)v.m_rt)->m_cx, v.m_v, &d);
		return d;
	}

	bool ValueIsNumber(const Value& v)
	{
		return v.m_v != 0 && JSVAL_IS_NUMBER(v.m_v);
	}

public:
	exlib::string ValueToString(const Value& v)
	{
		JSString* s = JS_ValueToString(((spider_Runtime*)v.m_rt)->m_cx, v.m_v);
		if (s)
			return utf16to8String((exlib::wchar*)JS_GetStringChars(s),
			                      (int32_t)JS_GetStringLength(s));
		return exlib::string();
	}

	bool ValueIsString(const Value& v)
	{
		return v.m_v != 0 && JSVAL_IS_STRING(v.m_v);
	}

public:
	bool ObjectHas(const Object& o, exlib::string key)
	{
		JSBool r;
		exlib::wstring wkey(utf8to16String(key));
		JS_HasUCProperty(((spider_Runtime*)o.m_rt)->m_cx, JSVAL_TO_OBJECT(o.m_v),
		                 (jschar*)wkey.c_str(), wkey.length(), &r);
		return JS_FALSE != r;
	}

	Value ObjectGet(const Object& o, exlib::string key)
	{
		jsval v;
		exlib::wstring wkey(utf8to16String(key));
		JS_GetUCProperty(((spider_Runtime*)o.m_rt)->m_cx, JSVAL_TO_OBJECT(o.m_v),
		                 (jschar*)wkey.c_str(), wkey.length(), &v);
		return Value(o.m_rt, v);
	}

	void ObjectSet(const Object& o, exlib::string key, const Value& v)
	{
		exlib::wstring wkey(utf8to16String(key));
		JS_SetUCProperty(((spider_Runtime*)o.m_rt)->m_cx, JSVAL_TO_OBJECT(o.m_v),
		                 (jschar*)wkey.c_str(), wkey.length(), (jsval*)&v.m_v);
	}

	void ObjectRemove(const Object& o, exlib::string key)
	{
		jsval v;
		exlib::wstring wkey(utf8to16String(key));
		JS_DeleteUCProperty2(((spider_Runtime*)o.m_rt)->m_cx, JSVAL_TO_OBJECT(o.m_v),
		                     (jschar*)wkey.c_str(), wkey.length(), &v);
	}

	Array ObjectKeys(const Object& o)
	{
		JSIdArray* ids = JS_Enumerate(((spider_Runtime*)o.m_rt)->m_cx,
		                              JSVAL_TO_OBJECT(o.m_v));
		std::vector<jsval> vals;

		int32_t i, length = ids->length;

		vals.resize(length);
		for (i = 0; i < length; i ++)
			JS_IdToValue(((spider_Runtime*)o.m_rt)->m_cx,
			             ids->vector[i], &vals[i]);
		return Value(o.m_rt,
		             OBJECT_TO_JSVAL(JS_NewArrayObject(((spider_Runtime*)o.m_rt)->m_cx,
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

public:
	int32_t ArrayGetLength(const Array& a)
	{
		jsuint n;
		JS_GetArrayLength(((spider_Runtime*)a.m_rt)->m_cx, JSVAL_TO_OBJECT(a.m_v), &n);
		return n;
	}

	Value ArrayGet(const Array& a, int32_t idx)
	{
		jsval v;
		JS_GetElement(((spider_Runtime*)a.m_rt)->m_cx, JSVAL_TO_OBJECT(a.m_v), idx, &v);
		return Value(a.m_rt, v);
	}

	void ArraySet(const Array& a, int32_t idx, const Value& v)
	{
		JS_SetElement(((spider_Runtime*)a.m_rt)->m_cx, JSVAL_TO_OBJECT(a.m_v),
		              idx, (jsval*)&v.m_v);
	}

	void ArrayRemove(const Array& a, int32_t idx)
	{
		JS_DeleteElement(((spider_Runtime*)a.m_rt)->m_cx, JSVAL_TO_OBJECT(a.m_v), idx);
	}

	bool ValueIsArray(const Value& v)
	{
		if (!ValueIsObject(v))
			return false;
		return JS_FALSE != JS_IsArrayObject(((spider_Runtime*)v.m_rt)->m_cx, JSVAL_TO_OBJECT(v.m_v));
	}

public:
	Value FunctionCall(const Function& f, Value* args, int32_t argn)
	{
		spider_Runtime* rt = (spider_Runtime*)f.m_rt;
		std::vector<jsval> _args;
		int32_t i;

		_args.resize(argn);
		for (i = 0; i < argn; i ++)
			_args[i] = args[i].m_v;

		jsval result;

		JSBool ok = JS_CallFunctionValue(rt->m_cx, JS_GetGlobalObject(rt->m_cx), f.m_v,
		                                 argn, _args.data(), &result);
		if (ok)
			return Value(rt, result);

		return Value();
	}

	bool ValueIsFunction(const Value& v)
	{
		if (!ValueIsObject(v))
			return false;
		return JS_FALSE != JS_ObjectIsFunction(((spider_Runtime*)v.m_rt)->m_cx, JSVAL_TO_OBJECT(v.m_v));
	}
};

static Api_spider s_api;
Api* _spider_api = &s_api;

}