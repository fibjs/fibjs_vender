/*
 *  jssdk-v8.h
 *  Created on: Jun 4, 2016
 *
 *  Copyright (c) 2016 by Leo Hoo
 *  lion@9465.net
 */

#ifndef _jssdk_v8_h__
#define _jssdk_v8_h__

#include "jssdk.h"
#include <v8/include/v8.h>

namespace js
{

#define _api v8_api

class Api_v8;
class v8_Runtime;

class Runtime_core::Locker
{
public:
	Locker(Runtime_core* rt) : m_rt(rt)
	{
		rt->Locker_enter(*this);
	}

	~Locker()
	{
		m_rt->Locker_leave(*this);
	}

private:
	Runtime_core* m_rt;
	char m_locker[sizeof(v8::Locker)];

	friend class v8_Runtime;
};

class Runtime_core::Unlocker
{
public:
	Unlocker(Runtime_core* rt) : m_rt(rt)
	{
		rt->Unlocker_enter(*this);
	}

	~Unlocker()
	{
		m_rt->Unlocker_leave(*this);
	}

private:
	Runtime_core* m_rt;
	char m_unlocker[sizeof(v8::Unlocker)];

	friend class v8_Runtime;
};

class Runtime_core::Scope
{
public:
	Scope(Runtime_core* rt) : m_rt(rt)
	{
		rt->Scope_enter(*this);
	}

	~Scope()
	{
		m_rt->Scope_leave(*this);
	}

private:
	Runtime_core* m_rt;
	char m_locker[sizeof(v8::Locker)];
	char m_handle_scope[sizeof(v8::HandleScope)];

	friend class v8_Runtime;
};

class HandleScope
{
public:
	HandleScope(Runtime_core* rt) : m_rt(rt)
	{
		rt->HandleScope_enter(*this);
	}

	~HandleScope()
	{
		m_rt->HandleScope_leave(*this);
	}

private:
	Runtime_core* m_rt;
	char m_handle_scope[sizeof(v8::HandleScope)];

	friend class v8_Runtime;
};

class EscapableHandleScope
{
public:
	EscapableHandleScope(Runtime_core* rt) : m_rt(rt)
	{
		rt->EscapableHandleScope_enter(*this);
	}

	~EscapableHandleScope()
	{
		m_rt->EscapableHandleScope_leave(*this);
	}

public:
	Value escape(Value v);

private:
	Runtime_core* m_rt;
	char m_handle_scope[sizeof(v8::EscapableHandleScope)];

	friend class v8_Runtime;
};

typedef v8::Local<v8::Value> js_value;

class FunctionCallbackInfo;
typedef void (*FunctionCallback)(const FunctionCallbackInfo& info);

class FunctionCallbackInfo : private v8::FunctionCallbackInfo<v8::Value>
{

};

}

#include "jssdk-pub.h"

#endif // _jssdk_v8_h__
