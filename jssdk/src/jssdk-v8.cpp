/*
 *  jssdk-v8.cpp
 *  Created on: Mar 31, 2016
 *
 *  Copyright (c) 2016 by Leo Hoo
 *  lion@9465.net
 */

#include "jssdk-v8.h"
#include "libplatform/libplatform.h"
#include "src/utils/allocation.h"
#include <stdlib.h>
#include <string.h>
#include <vector>

using namespace v8;

namespace js {

class v8_Runtime : public Runtime {
private:
    class ShellArrayBufferAllocator : public v8::ArrayBuffer::Allocator {
    public:
        virtual void* Allocate(size_t length)
        {
            void* data = AllocateUninitialized(length);
            return data == NULL ? data : memset(data, 0, length);
        }

        virtual void* AllocateUninitialized(size_t length)
        {
            return malloc(length);
        }

        virtual void Free(void* data, size_t)
        {
            free(data);
        }
    };

    v8::Local<v8::Context> _context()
    {
        return v8::Local<v8::Context>::New(m_isolate, m_context);
    }

public:
    v8_Runtime(class Api* api)
    {
        m_api = api;

        create_params.array_buffer_allocator = &array_buffer_allocator;
        m_isolate = v8::Isolate::New(create_params);

        m_isolate->SetData(0, this);

        v8::Locker locker(m_isolate);
        v8::HandleScope handle_scope(m_isolate);
        v8::Isolate::Scope isolate_scope(m_isolate);

        m_context.Reset(m_isolate, v8::Context::New(m_isolate));
    }

public:
    void destroy()
    {
        m_isolate->Dispose();
        delete this;
    }

    void Locker_enter(Locker& locker)
    {
        new (locker.m_locker) v8::Locker(m_isolate);
    }

    void Locker_leave(Locker& locker)
    {
        ((v8::Locker*)locker.m_locker)->~Locker();
    }

    void Unlocker_enter(Unlocker& unlocker)
    {
        new (unlocker.m_unlocker) v8::Unlocker(m_isolate);
    }

    void Unlocker_leave(Unlocker& unlocker)
    {
        ((v8::Unlocker*)unlocker.m_unlocker)->~Unlocker();
    }

    class _HandleScope : public v8::HandleScope {
    public:
        _HandleScope(v8::Isolate* rt)
            : v8::HandleScope(rt)
        {
        }

        void operator delete(void* p, size_t sz)
        {
        }

    public:
        static void* operator new(size_t, void* p)
        {
            return p;
        }
    };

    void Scope_enter(Scope& scope)
    {
        new (scope.m_locker) v8::Locker(m_isolate);
        new (scope.m_handle_scope) _HandleScope(m_isolate);
        m_isolate->Enter();
        _context()->Enter();
    }

    void Scope_leave(Scope& scope)
    {
        _context()->Exit();
        m_isolate->Exit();
        ((_HandleScope*)scope.m_handle_scope)->~_HandleScope();
        ((v8::Locker*)scope.m_locker)->~Locker();
        m_isolate->DiscardThreadSpecificMetadata();
    }

    void HandleScope_enter(HandleScope& scope)
    {
        new (scope.m_handle_scope) _HandleScope(m_isolate);
    }

    void HandleScope_leave(HandleScope& scope)
    {
        ((_HandleScope*)scope.m_handle_scope)->~_HandleScope();
    }

    class _EscapableHandleScope : public v8::EscapableHandleScope {
    public:
        _EscapableHandleScope(v8::Isolate* rt)
            : v8::EscapableHandleScope(rt)
        {
        }

    public:
        static void* operator new(size_t, void* p)
        {
            return p;
        }

        void operator delete(void* p, size_t sz)
        {
        }
    };

    void EscapableHandleScope_enter(EscapableHandleScope& scope)
    {
        new (scope.m_handle_scope) _EscapableHandleScope(m_isolate);
    }

    void EscapableHandleScope_leave(EscapableHandleScope& scope)
    {
        ((_EscapableHandleScope*)scope.m_handle_scope)->~_EscapableHandleScope();
    }

    Value EscapableHandleScope_escape(EscapableHandleScope& scope, Value v)
    {
        return Value(scope.m_rt, ((v8::EscapableHandleScope*)scope.m_handle_scope)->Escape(v.m_v));
    }

    void gc()
    {
        m_isolate->LowMemoryNotification();
    }

    Object GetContextGlobal()
    {
        return Object(this, _context()->Global());
    }

    Value execute(exlib::string code, exlib::string soname)
    {
        v8::Local<v8::Context> context = m_isolate->GetCurrentContext();
        v8::Local<v8::String> str_code = v8::String::NewFromUtf8(
            m_isolate, code.c_str(), v8::NewStringType::kNormal,
            (int32_t)code.length())
                                             .ToLocalChecked();
        v8::Local<v8::String> str_name = v8::String::NewFromUtf8(
            m_isolate,
            soname.c_str(), v8::NewStringType::kNormal,
            (int32_t)soname.length())
                                             .ToLocalChecked();

        v8::ScriptOrigin origin(str_name);
        v8::MaybeLocal<v8::Script> may_script = v8::Script::Compile(context, str_code, &origin);

        if (may_script.IsEmpty())
            return Value();

        v8::MaybeLocal<v8::Value> result = may_script.ToLocalChecked()->Run(context);

        if (result.IsEmpty())
            return Value();

        return Value(this, result.ToLocalChecked());
    }

    Value NewUndefined()
    {
        return Value(this, v8::Undefined(m_isolate));
    }

    Value NewBoolean(bool b)
    {
        return Value(this, b ? v8::True(m_isolate) : v8::False(m_isolate));
    }

    Value NewNumber(double d)
    {
        return Value(this, v8::Number::New(m_isolate, d));
    }

    Value NewBigInt(int64_t d)
    {

        return Value(this, v8::BigInt::New(m_isolate, d));
    }

    Value NewString(exlib::string s)
    {
        return Value(this, v8::String::NewFromUtf8(m_isolate, s.c_str(), v8::NewStringType::kNormal, (int32_t)s.length()).ToLocalChecked());
    }

    Object NewObject()
    {
        return Object(this, v8::Object::New(m_isolate));
    }

    Array NewArray(int32_t sz)
    {
        return Array(this, v8::Array::New(m_isolate, sz));
    }

    Function NewFunction(FunctionCallback callback)
    {
        v8::MaybeLocal<v8::Function> may_v = v8::Function::New(_context(), (v8::FunctionCallback)callback);

        return Function(this, may_v.IsEmpty() ? v8::Local<v8::Function>() : may_v.ToLocalChecked());
    }

public:
    bool ValueIs(const Value& v, const RuntimeValueType& t)
    {
        switch (t) {
        case kUndefined: {
            return !v.m_v.IsEmpty() && v.m_v->IsUndefined();
        }
        case kBoolean: {
            return !v.m_v.IsEmpty() && (v.m_v->IsBoolean() || v.m_v->IsBooleanObject());
        }
        case kBooleanPrimitive: {
            return !v.m_v.IsEmpty() && v.m_v->IsBoolean();
        }
        case kBooleanWrapperObject: {
            return !v.m_v.IsEmpty() && v.m_v->IsBooleanObject();
        }
        case kNumber: {
            return !v.m_v.IsEmpty() && (v.m_v->IsNumber() || v.m_v->IsNumberObject());
        }
        case kNumberPrimitive: {
            return !v.m_v.IsEmpty() && v.m_v->IsNumber();
        }
        case kNumberWrapperObject: {
            return !v.m_v.IsEmpty() && v.m_v->IsNumberObject();
        }
        case kBigInt: {
            return !v.m_v.IsEmpty() && (v.m_v->IsBigInt() || v.m_v->IsBigIntObject());
        }
        case kString: {
            return !v.m_v.IsEmpty() && (v.m_v->IsString() || v.m_v->IsStringObject());
        }
        case kStringPrimitive: {
            return !v.m_v.IsEmpty() && v.m_v->IsString();
        }
        case kStringWrapperObject: {
            return !v.m_v.IsEmpty() && v.m_v->IsStringObject();
        }
        case kObject: {
            return !v.m_v.IsEmpty() && v.m_v->IsObject();
        }
        case kArray: {
            return !v.m_v.IsEmpty() && v.m_v->IsArray();
        }
        case kFunction: {
            return !v.m_v.IsEmpty() && v.m_v->IsFunction();
        }
        }
        return true;
    };

public:
    bool ValueToBoolean(const Value& v)
    {
        return v.m_v->BooleanValue(m_isolate);
    }

public:
    double ValueToNumber(const Value& v)
    {
        return v.m_v->NumberValue(_context()).ToChecked();
    }

public:
    int64_t ValueToBigInt(const Value& v)
    {
        if (v.isBigInt())
            return v8::Local<v8::BigInt>::Cast(v.m_v)->Int64Value();
        else
            return v.m_v->IntegerValue(_context()).ToChecked();
    }

public:
    exlib::string ValueToString(const Value& v)
    {
        v8::String::Utf8Value tmp(m_isolate, v.m_v);
        if (*tmp)
            return exlib::string(*tmp, tmp.length());
        return exlib::string();
    }

public:
    bool ObjectHas(const Object& o, exlib::string key)
    {
        return v8::Local<v8::Object>::Cast(o.m_v)->Has(
                                                     _context(),
                                                     v8::String::NewFromUtf8(m_isolate,
                                                         key.c_str(), v8::NewStringType::kNormal,
                                                         (int32_t)key.length())
                                                         .ToLocalChecked())
            .ToChecked();
    }

    Value ObjectGet(const Object& o, exlib::string key)
    {
        return Value(this, v8::Local<v8::Object>::Cast(o.m_v)->Get(_context(), v8::String::NewFromUtf8(m_isolate, key.c_str(), v8::NewStringType::kNormal, (int32_t)key.length()).ToLocalChecked()).ToLocalChecked());
    }

    void ObjectSet(const Object& o, exlib::string key, const Value& v)
    {
        v8::Local<v8::Object>::Cast(o.m_v)->Set(
            _context(),
            v8::String::NewFromUtf8(m_isolate,
                key.c_str(), v8::NewStringType::kNormal,
                (int32_t)key.length())
                .ToLocalChecked(),
            v.m_v);
    }

    void ObjectRemove(const Object& o, exlib::string key)
    {
        v8::Local<v8::Object>::Cast(o.m_v)->Delete(
            _context(),
            v8::String::NewFromUtf8(m_isolate,
                key.c_str(), v8::NewStringType::kNormal,
                (int32_t)key.length())
                .ToLocalChecked());
    }

    Array ObjectKeys(const Object& o)
    {
        v8::MaybeLocal<v8::Array> may_v = v8::Local<v8::Object>::Cast(o.m_v)->GetPropertyNames(_context());

        return Array(this, may_v.IsEmpty() ? v8::Local<v8::Array>() : may_v.ToLocalChecked());
    }

    bool ObjectHasPrivate(const Object& o, exlib::string key)
    {
        v8::Local<v8::Private> pkey = v8::Private::ForApi(m_isolate,
            v8::String::NewFromUtf8(m_isolate,
                key.c_str(), v8::NewStringType::kNormal,
                (int32_t)key.length())
                .ToLocalChecked());
        v8::Local<v8::Context> context = v8::Local<v8::Context>::New(m_isolate,
            m_context);
        return v8::Local<v8::Object>::Cast(o.m_v)->HasPrivate(context, pkey).FromJust();
    }

    Value ObjectGetPrivate(const Object& o, exlib::string key)
    {
        v8::Local<v8::Private> pkey = v8::Private::ForApi(m_isolate,
            v8::String::NewFromUtf8(m_isolate,
                key.c_str(), v8::NewStringType::kNormal,
                (int32_t)key.length())
                .ToLocalChecked());
        v8::Local<v8::Context> context = v8::Local<v8::Context>::New(m_isolate,
            m_context);

        v8::MaybeLocal<v8::Value> result = v8::Local<v8::Object>::Cast(o.m_v)->GetPrivate(context, pkey);

        if (result.IsEmpty())
            return Value();

        return Value(this, result.ToLocalChecked());
    }

    void ObjectSetPrivate(const Object& o, exlib::string key, const Value& v)
    {
        v8::Local<v8::Private> pkey = v8::Private::ForApi(m_isolate,
            v8::String::NewFromUtf8(m_isolate,
                key.c_str(), v8::NewStringType::kNormal,
                (int32_t)key.length())
                .ToLocalChecked());
        v8::Local<v8::Context> context = v8::Local<v8::Context>::New(m_isolate,
            m_context);
        v8::Local<v8::Object>::Cast(o.m_v)->SetPrivate(context, pkey, v.m_v);
    }

    void ObjectRemovePrivate(const Object& o, exlib::string key)
    {
        v8::Local<v8::Private> pkey = v8::Private::ForApi(m_isolate,
            v8::String::NewFromUtf8(m_isolate,
                key.c_str(), v8::NewStringType::kNormal,
                (int32_t)key.length())
                .ToLocalChecked());
        v8::Local<v8::Context> context = v8::Local<v8::Context>::New(m_isolate,
            m_context);
        v8::Local<v8::Object>::Cast(o.m_v)->DeletePrivate(context, pkey);
    }

public:
    int32_t ArrayLength(const Array& a)
    {
        return v8::Local<v8::Array>::Cast(a.m_v)->Length();
    }

    Value ArrayGet(const Array& a, int32_t idx)
    {
        return Value(this, v8::Local<v8::Array>::Cast(a.m_v)->Get(_context(), idx).ToLocalChecked());
    }

    void ArraySet(const Array& a, int32_t idx, const Value& v)
    {
        v8::Local<v8::Array>::Cast(a.m_v)->Set(_context(), idx, v.m_v);
    }

    void ArrayRemove(const Array& a, int32_t idx)
    {
        v8::Local<v8::Context> context = v8::Local<v8::Context>::New(m_isolate,
            m_context);
        v8::Local<v8::Array>::Cast(a.m_v)->Delete(context, idx);
    }

public:
    Value FunctionCall(const Function& f, Object obj, Value* args, int32_t argn)
    {
        v8::Local<v8::Context> context = v8::Local<v8::Context>::New(m_isolate,
            m_context);
        std::vector<v8::Local<v8::Value>> _args;
        int32_t i;

        _args.resize(argn);
        for (i = 0; i < argn; i++)
            _args[i] = args[i].m_v;

        v8::Local<v8::Value> recv;

        if (obj.isEmpty())
            recv = v8::Undefined(m_isolate);
        else
            recv = obj.m_v;

        v8::MaybeLocal<v8::Value> result = v8::Local<v8::Function>::Cast(f.m_v)->Call(context,
            recv, argn, _args.data());

        if (result.IsEmpty())
            return Value();

        return Value(this, result.ToLocalChecked());
    }

private:
    v8::Isolate* m_isolate;
    v8::Persistent<v8::Context> m_context;

    v8::Isolate::CreateParams create_params;
    ShellArrayBufferAllocator array_buffer_allocator;

    friend class Api_v8;
};

class Api_v8 : public Api {
public:
    virtual const char* getEngineName()
    {
        return "v8";
    }

    virtual int32_t getVersion()
    {
        return version;
    }

    virtual void init()
    {
        static bool s_bInit = false;

        if (!s_bInit) {
            s_bInit = true;

            static std::unique_ptr<v8::Platform> platform = v8::platform::NewDefaultPlatform();
            v8::V8::InitializePlatform(platform.get());
            v8::V8::Initialize();
        }
    }

    virtual Runtime* createRuntime()
    {
        return new v8_Runtime(this);
    }
};

static Api_v8 s_api;
Api* _inst_v8_api = &s_api;
}