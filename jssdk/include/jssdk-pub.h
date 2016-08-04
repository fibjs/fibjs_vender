/*
 *  jssdk-pub.h
 *  Created on: Jul 22, 2016
 *
 *  Copyright (c) 2016 by Leo Hoo
 *  lion@9465.net
 */

#ifndef _jssdk_pub_h__
#define _jssdk_pub_h__

namespace js
{

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
		return m_rt->m_api->ValueIsUndefined(*this);
	}

	bool toBoolean() const
	{
		return m_rt->m_api->ValueToBoolean(*this);
	}

	bool isBoolean() const
	{
		return m_rt->m_api->ValueIsBoolean(*this);
	}

	double toNumber() const
	{
		return m_rt->m_api->ValueToNumber(*this);
	}

	bool isNumber() const
	{
		return m_rt->m_api->ValueIsNumber(*this);
	}

	exlib::string toString() const
	{
		return m_rt->m_api->ValueToString(*this);
	}

	bool isString() const
	{
		return m_rt->m_api->ValueIsString(*this);
	}

	bool isArray() const
	{
		return m_rt->m_api->ValueIsArray(*this);
	}

	bool isObject() const
	{
		return m_rt->m_api->ValueIsObject(*this);
	}

	bool isFunction() const
	{
		return m_rt->m_api->ValueIsFunction(*this);
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
	}

	Object(const Value& v) : Value(v)
	{
	}

public:
	bool has(exlib::string key)
	{
		return m_rt->m_api->ObjectHas(*this, key);
	}

	Value get(exlib::string key)
	{
		return m_rt->m_api->ObjectGet(*this, key);
	}

	void set(exlib::string key, const Value& v)
	{
		m_rt->m_api->ObjectSet(*this, key, v);
	}

	void remove(exlib::string key)
	{
		m_rt->m_api->ObjectRemove(*this, key);
	}

	Array keys();

	bool hasPrivate(exlib::string key)
	{
		return m_rt->m_api->ObjectHasPrivate(*this, key);
	}

	Value getPrivate(exlib::string key)
	{
		return m_rt->m_api->ObjectGetPrivate(*this, key);
	}

	void setPrivate(exlib::string key, const Value& v)
	{
		m_rt->m_api->ObjectSetPrivate(*this, key, v);
	}

	void removePrivate(exlib::string key)
	{
		m_rt->m_api->ObjectRemovePrivate(*this, key);
	}
};

class Array: public Object
{
public:
	Array()
	{}

	Array(Runtime *rt, js_value v) : Object(rt, v)
	{
	}

	Array(const Value& v) : Object(v)
	{
	}

public:
	int32_t length()
	{
		return m_rt->m_api->ArrayGetLength(*this);
	}

	Value get(int32_t idx)
	{
		return m_rt->m_api->ArrayGet(*this, idx);
	}

	void set(int32_t idx, const Value& v)
	{
		m_rt->m_api->ArraySet(*this, idx, v);
	}

	void remove(int32_t idx)
	{
		m_rt->m_api->ArrayRemove(*this, idx);
	}
};

class Function: public Object
{
public:
	Function()
	{}

	Function(Runtime *rt, js_value v) : Object(rt, v)
	{
	}

	Function(const Value& v) : Object(v)
	{
	}

public:
	Value ncall(Value* args, int32_t argn)
	{
		return m_rt->m_api->FunctionCall(*this, args, argn);
	}
};

inline Array Object::keys()
{
	return m_rt->m_api->ObjectKeys(*this);
}

inline Value EscapableHandleScope::escape(Value v)
{
	return m_rt->EscapableHandleScope_escape(*this, v);
}


}

#endif // _jssdk_pub_h__
