/*
 *  jssdk-pub.h
 *  Created on: Jul 22, 2016
 *
 *  Copyright (c) 2016 by Leo Hoo
 *  lion@9465.net
 */

#include <assert.h>

#ifndef _jssdk_pub_h__
#define _jssdk_pub_h__

namespace js
{

class Runtime: public Runtime_core
{
public:
	virtual bool ValueIsUndefined(const Value& v) = 0;

	virtual bool ValueToBoolean(const Value& v) = 0;
	virtual bool ValueIsBoolean(const Value& v) = 0;

	virtual double ValueToNumber(const Value& v) = 0;
	virtual bool ValueIsNumber(const Value& v) = 0;

	virtual exlib::string ValueToString(const Value& v) = 0;
	virtual bool ValueIsString(const Value& v) = 0;

	virtual bool ObjectHas(const Object& o, exlib::string key) = 0;
	virtual Value ObjectGet(const Object& o, exlib::string key) = 0;
	virtual void ObjectSet(const Object& o, exlib::string key, const Value& v) = 0;
	virtual void ObjectRemove(const Object& o, exlib::string key) = 0;
	virtual Array ObjectKeys(const Object& o) = 0;
	virtual bool ObjectHasPrivate(const Object& o, exlib::string key) = 0;
	virtual Value ObjectGetPrivate(const Object& o, exlib::string key) = 0;
	virtual void ObjectSetPrivate(const Object& o, exlib::string key, const Value& v) = 0;
	virtual void ObjectRemovePrivate(const Object& o, exlib::string key) = 0;
	virtual bool ValueIsObject(const Value& v) = 0;

	virtual int32_t ArrayGetLength(const Array& a) = 0;
	virtual Value ArrayGet(const Array& a, int32_t idx) = 0;
	virtual void ArraySet(const Array& a, int32_t idx, const Value& v) = 0;
	virtual void ArrayRemove(const Array& a, int32_t idx) = 0;
	virtual bool ValueIsArray(const Value& v) = 0;

	virtual Value FunctionCall(const Function& f, Object obj, Value* args, int32_t argn) = 0;
	virtual bool ValueIsFunction(const Value& v) = 0;

public:
	virtual void gc() = 0;

	virtual Object GetGlobal() = 0;

	virtual Value execute(exlib::string code, exlib::string soname) = 0;

	virtual Value NewUndefined() = 0;
	virtual Value NewBoolean(bool b) = 0;
	virtual Value NewNumber(double d) = 0;
	virtual Value NewString(exlib::string s) = 0;
	virtual Object NewObject() = 0;
	virtual Array NewArray(int32_t sz) = 0;
	virtual Function NewFunction(FunctionCallback callback) = 0;
};

class Value
{
public:
	Value() : m_rt(NULL)
	{}

	Value(Runtime *rt, js_value v) : m_rt(rt), m_v(v)
	{
	}

	Value(const Value& v) : m_rt(v.m_rt), m_v(v.m_v)
	{
	}

	Value& operator=(const Value &v)
	{
		m_rt = v.m_rt;
		m_v = v.m_v;
		return *this;
	}

public:
	bool isEmpty() const
	{
		return m_rt == NULL || m_v.IsEmpty();
	}

public:
	bool isUndefined() const
	{
		return m_rt->ValueIsUndefined(*this);
	}

	bool toBoolean() const
	{
		return m_rt->ValueToBoolean(*this);
	}

	bool isBoolean() const
	{
		return m_rt->ValueIsBoolean(*this);
	}

	double toNumber() const
	{
		return m_rt->ValueToNumber(*this);
	}

	bool isNumber() const
	{
		return m_rt->ValueIsNumber(*this);
	}

	exlib::string toString() const
	{
		return m_rt->ValueToString(*this);
	}

	bool isString() const
	{
		return m_rt->ValueIsString(*this);
	}

	bool isArray() const
	{
		return m_rt->ValueIsArray(*this);
	}

	bool isObject() const
	{
		return m_rt->ValueIsObject(*this);
	}

	bool isFunction() const
	{
		return m_rt->ValueIsFunction(*this);
	}

public:
	Runtime *m_rt;
	js_value m_v;
};

class Object: public Value
{
public:
	Object()
	{}

	Object(Runtime *rt, js_value v) : Value(rt, v)
	{
		assert(isObject());
	}

	Object(const Value& v) : Value(v)
	{
		assert(isObject());
	}

public:
	bool has(exlib::string key)
	{
		return m_rt->ObjectHas(*this, key);
	}

	Value get(exlib::string key)
	{
		return m_rt->ObjectGet(*this, key);
	}

	void set(exlib::string key, const Value& v)
	{
		m_rt->ObjectSet(*this, key, v);
	}

	void remove(exlib::string key)
	{
		m_rt->ObjectRemove(*this, key);
	}

	Array keys();

	bool hasPrivate(exlib::string key)
	{
		return m_rt->ObjectHasPrivate(*this, key);
	}

	Value getPrivate(exlib::string key)
	{
		return m_rt->ObjectGetPrivate(*this, key);
	}

	void setPrivate(exlib::string key, const Value& v)
	{
		m_rt->ObjectSetPrivate(*this, key, v);
	}

	void removePrivate(exlib::string key)
	{
		m_rt->ObjectRemovePrivate(*this, key);
	}
};

class Array: public Object
{
public:
	Array()
	{}

	Array(Runtime *rt, js_value v) : Object(rt, v)
	{
		assert(isArray());
	}

	Array(const Value& v) : Object(v)
	{
		assert(isArray());
	}

public:
	int32_t length()
	{
		return m_rt->ArrayGetLength(*this);
	}

	Value get(int32_t idx)
	{
		return m_rt->ArrayGet(*this, idx);
	}

	void set(int32_t idx, const Value& v)
	{
		m_rt->ArraySet(*this, idx, v);
	}

	void remove(int32_t idx)
	{
		m_rt->ArrayRemove(*this, idx);
	}
};

class Function: public Object
{
public:
	Function()
	{}

	Function(Runtime *rt, js_value v) : Object(rt, v)
	{
		assert(isFunction());
	}

	Function(const Value& v) : Object(v)
	{
		assert(isFunction());
	}

public:
	Value call(Value* args, int32_t argn)
	{
		return m_rt->FunctionCall(*this, Object(), args, argn);
	}

	Value call()
	{
		return m_rt->FunctionCall(*this, Object(), NULL, 0);
	}

	Value call(Object obj, Value* args, int32_t argn)
	{
		return m_rt->FunctionCall(*this, obj, args, argn);
	}

	Value call(Object obj)
	{
		return m_rt->FunctionCall(*this, obj, NULL, 0);
	}
};

inline Array Object::keys()
{
	return m_rt->ObjectKeys(*this);
}

inline Runtime_core::Locker::Locker(Runtime* rt) : m_rt(rt)
{
	rt->Locker_enter(*this);
}

inline Runtime_core::Locker::~Locker()
{
	m_rt->Locker_leave(*this);
}

inline Runtime_core::Unlocker::Unlocker(Runtime* rt) : m_rt(rt)
{
	rt->Unlocker_enter(*this);
}

inline Runtime_core::Unlocker::~Unlocker()
{
	m_rt->Unlocker_leave(*this);
}

inline Runtime_core::Scope::Scope(Runtime* rt) : m_rt(rt)
{
	rt->Scope_enter(*this);
}

inline Runtime_core::Scope::~Scope()
{
	m_rt->Scope_leave(*this);
}

inline HandleScope::HandleScope(Runtime* rt) : m_rt(rt)
{
	rt->HandleScope_enter(*this);
}

inline HandleScope::~HandleScope()
{
	m_rt->HandleScope_leave(*this);
}

inline EscapableHandleScope::EscapableHandleScope(Runtime* rt) : m_rt(rt)
{
	rt->EscapableHandleScope_enter(*this);
}

inline EscapableHandleScope::~EscapableHandleScope()
{
	m_rt->EscapableHandleScope_leave(*this);
}

inline Value EscapableHandleScope::escape(Value v)
{
	return m_rt->EscapableHandleScope_escape(*this, v);
}


}

#endif // _jssdk_pub_h__
