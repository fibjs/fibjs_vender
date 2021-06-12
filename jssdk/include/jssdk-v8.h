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

namespace js {

#define _api v8_api

class Api_v8;
class v8_Runtime;

class JSThreadCore::Locker {
public:
    Locker(Runtime* rt);
    ~Locker();

private:
    Runtime* m_rt;
    char m_locker[sizeof(v8::Locker)];

    friend class v8_Runtime;
};

class JSThreadCore::Unlocker {
public:
    Unlocker(Runtime* rt);
    ~Unlocker();

private:
    Runtime* m_rt;
    char m_unlocker[sizeof(v8::Unlocker)];

    friend class v8_Runtime;
};

class JSThreadCore::Scope {
public:
    Scope(Runtime* rt);
    ~Scope();

private:
    Runtime* m_rt;
    char m_locker[sizeof(v8::Locker)];
    char m_handle_scope[sizeof(v8::HandleScope)];

    friend class v8_Runtime;
};

class HandleScope {
public:
    HandleScope(Runtime* rt);
    ~HandleScope();

private:
    Runtime* m_rt;
    char m_handle_scope[sizeof(v8::HandleScope)];

    friend class v8_Runtime;
};

typedef v8::Local<v8::Value> js_value;

class EscapableHandleScope {
public:
    EscapableHandleScope(Runtime* rt);
    ~EscapableHandleScope();

public:
    Value escape(Value v);

private:
    Runtime* m_rt;
    char m_handle_scope[sizeof(v8::EscapableHandleScope)];

    friend class v8_Runtime;
};

class FunctionCallbackInfo;
typedef void (*FunctionCallback)(const FunctionCallbackInfo& info);

class FunctionCallbackInfo : private v8::FunctionCallbackInfo<v8::Value> {
};

}

#include "jssdk-pub.h"

#endif // _jssdk_v8_h__
