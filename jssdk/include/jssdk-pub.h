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
		return _api->ValueIsUndefined(*this);
	}

	bool toBoolean() const
	{
		return _api->ValueToBoolean(*this);
	}

	bool isBoolean() const
	{
		return _api->ValueIsBoolean(*this);
	}

	double toNumber() const
	{
		return _api->ValueToNumber(*this);
	}

	bool isNumber() const
	{
		return _api->ValueIsNumber(*this);
	}

	exlib::string toString() const
	{
		return _api->ValueToString(*this);
	}

	bool isString() const
	{
		return _api->ValueIsString(*this);
	}

	bool isArray() const
	{
		return _api->ValueIsArray(*this);
	}

	bool isObject() const
	{
		return _api->ValueIsObject(*this);
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
		return _api->ObjectHas(*this, key);
	}

	Value get(exlib::string key)
	{
		return _api->ObjectGet(*this, key);
	}

	void set(exlib::string key, const Value& v)
	{
		_api->ObjectSet(*this, key, v);
	}

	void remove(exlib::string key)
	{
		_api->ObjectRemove(*this, key);
	}

	Array keys();

	bool hasPrivate(exlib::string key)
	{
		return _api->ObjectHasPrivate(*this, key);
	}

	Value getPrivate(exlib::string key)
	{
		return _api->ObjectGetPrivate(*this, key);
	}

	void setPrivate(exlib::string key, const Value& v)
	{
		_api->ObjectSetPrivate(*this, key, v);
	}

	void removePrivate(exlib::string key)
	{
		_api->ObjectRemovePrivate(*this, key);
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
		return _api->ArrayGetLength(*this);
	}

	Value get(int32_t idx)
	{
		return _api->ArrayGet(*this, idx);
	}

	void set(int32_t idx, const Value& v)
	{
		_api->ArraySet(*this, idx, v);
	}

	void remove(int32_t idx)
	{
		_api->ArrayRemove(*this, idx);
	}
};

inline Array Object::keys()
{
	return _api->ObjectKeys(*this);
}

inline Value Runtime::NewBoolean(bool b)
{
	return _api->NewBoolean(this, b);
}

inline Value Runtime::NewNumber(double d)
{
	return _api->NewNumber(this, d);
}

inline Value Runtime::NewString(exlib::string s)
{
	return _api->NewString(this, s);
}

inline Object Runtime::NewObject()
{
	return _api->NewObject(this);
}

inline Array Runtime::NewArray(int32_t sz)
{
	return _api->NewArray(this, sz);
}

}

#endif // _jssdk_pub_h__
