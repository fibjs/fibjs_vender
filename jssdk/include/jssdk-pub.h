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

namespace js {

enum RuntimeValueType {
    // is undefined-type value
    kUndefined,
    // is boolean-type value or its wrapper-object
    kBoolean,
    // js value is boolean-type value
    kBooleanPrimitive,
    // js value is boolean value's wrapper-object
    kBooleanWrapperObject,
    // js value is number-type value or its wrapper-object
    kNumber,
    // js value is number-type value
    kNumberPrimitive,
    // js value is number value's wrapper-object
    kNumberWrapperObject,
    // js value is bigint-type value or its wrapper-object
    kBigInt,
    // js value is string-type value or its wrapper-object
    kString,
    // js value is string-type value
    kStringPrimitive,
    // js value is string value's wrapper-object
    kStringWrapperObject,
    // js value is object-type
    kObject,
    // js value is array-type
    kArray,
    // js value is function-type
    kFunction,
};

class Runtime : public JSThreadCore {
public:
    /** check if js value is type of RuntimeValueType
	 * 
	 */
    virtual bool ValueIs(const Value& v, const RuntimeValueType& t) = 0;

    /** try to convert one js value to boolean type 
	 * 
	 */
    virtual bool ValueToBoolean(const Value& v) = 0;

    /** try to convert one js value to number type 
	 * 
	 */
    virtual double ValueToNumber(const Value& v) = 0;

    /** try to convert one js value to bigint type 
	 * 
	 */
    virtual int64_t ValueToBigInt(const Value& v) = 0;

    /** try to convert one js value to string type 
	 * 
	 */
    virtual exlib::string ValueToString(const Value& v) = 0;

    /** check if object has own property <key>
	 * 
	 */
    virtual bool ObjectHas(const Object& o, exlib::string key) = 0;

    /** get field <key>'s value from object
	 * 
	 */
    virtual Value ObjectGet(const Object& o, exlib::string key) = 0;

    /** set field <key>'s value to object
	 * 
	 */
    virtual void ObjectSet(const Object& o, exlib::string key, const Value& v) = 0;

    /** remove field <key> from object
	 * 
	 */
    virtual void ObjectRemove(const Object& o, exlib::string key) = 0;

    /** get all keys from object
	 * 
	 */
    virtual Array ObjectKeys(const Object& o) = 0;

    /** check if object has own private property <key>
	 * 
	 */
    virtual bool ObjectHasPrivate(const Object& o, exlib::string key) = 0;

    /** get private field <key>'s value from object
	 * 
	 */
    virtual Value ObjectGetPrivate(const Object& o, exlib::string key) = 0;

    /** set private field <key>'s value to object
	 * 
	 */
    virtual void ObjectSetPrivate(const Object& o, exlib::string key, const Value& v) = 0;

    /** remove private field <key> from object
	 * 
	 */
    virtual void ObjectRemovePrivate(const Object& o, exlib::string key) = 0;

    /** get js array's length
	 * 
	 */
    virtual int32_t ArrayLength(const Array& a) = 0;

    /** get element[<idx>] from js array
	 * 
	 */
    virtual Value ArrayGet(const Array& a, int32_t idx) = 0;

    /** set value into element[<idx>] for  js array
	 * 
	 */
    virtual void ArraySet(const Array& a, int32_t idx, const Value& v) = 0;

    /** remove element[<idx>] from js array
	 * 
	 */
    virtual void ArrayRemove(const Array& a, int32_t idx) = 0;

    /** call js function <f> with <thisObj> as 'this', and passed paramter <args>, which has <argn> arguments in it.
	 * 
	 */
    virtual Value FunctionCall(const Function& f, Object thisObj, Value* args, int32_t argn) = 0;

public:
    /* trigger garbage collection for engine */
    virtual void gc() = 0;

    /**
	 * 
	 * [ECMA] get global context object of JS runtime
	 * 
	 * @see https://tc39.es/ecma262/#sec-globalthis
	 * @see https://developer.mozilla.org/zh-CN/docs/Web/JavaScript/Reference/Global_Objects/globalThis
	 */
    virtual Object GetContextGlobal() = 0;

    /* execute one javascript script code, with script origin name */
    virtual Value execute(exlib::string code, exlib::string soname) = 0;

    /* create javascript primitive undefined value */
    virtual Value NewUndefined() = 0;
    /* create javascript primitive boolean type value */
    virtual Value NewBoolean(bool b) = 0;
    /* create javascript primitive number type value */
    virtual Value NewNumber(double d) = 0;
    /* create javascript primitive bigint type value */
    virtual Value NewBigInt(int64_t d) = 0;
    /* create javascript primitive string type value */
    virtual Value NewString(exlib::string s) = 0;

    /* create javascript Number Object */
    // virtual Value NewNumberObject(double d) = 0;

    /* create javascript String Object */
    // virtual Value NewStringObject(exlib::string s) = 0;

    /* initialize one plain object, without special configuration */
    virtual Object NewObject() = 0;
    /* initialize one Array object */
    virtual Array NewArray(int32_t sz) = 0;
    /* initialize one Function object */
    virtual Function NewFunction(FunctionCallback callback) = 0;
};

/** general value definition for javascript's variable, there are primitives in js:
 * - number
 * - bigint
 * - string
 * - boolean
 * - undefined
 * - symbol
 * - null
 * 
 * and primitive wrapper objects:
 * - Number
 * - BigInt
 * - String
 * - Boolean
 * - Symbol
 * 
 * @see https://developer.mozilla.org/en-US/docs/Glossary/Primitive
 * 
 */

#define VALUE_METHODS_FOR_CONVERTION(pt, cpp_t) \
    cpp_t to##pt() const                        \
    {                                           \
        return m_rt->ValueTo##pt(*this);        \
    }

#define VALUE_METHODS_FOR_IS_P(pt)          \
    bool is##pt() const                     \
    {                                       \
        return m_rt->ValueIs(*this, k##pt); \
    }

#define VALUE_METHODS_FOR_IS_PO(pt)                        \
    bool is##pt() const                                    \
    {                                                      \
        return m_rt->ValueIs(*this, k##pt);                \
    }                                                      \
    bool is##pt##Primitive() const                         \
    {                                                      \
        return m_rt->ValueIs(*this, k##pt##Primitive);     \
    }                                                      \
    bool is##pt##WrapperObject() const                     \
    {                                                      \
        return m_rt->ValueIs(*this, k##pt##WrapperObject); \
    }

class Value {
public:
    Value()
        : m_rt(NULL)
    {
    }

    Value(Runtime* rt, js_value v)
        : m_rt(rt)
        , m_v(v)
    {
    }

    Value(const Value& v)
        : m_rt(v.m_rt)
        , m_v(v.m_v)
    {
    }

    Value& operator=(const Value& v)
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
    VALUE_METHODS_FOR_IS_P(Undefined)

    VALUE_METHODS_FOR_CONVERTION(Boolean, bool)
    VALUE_METHODS_FOR_IS_PO(Boolean)

    VALUE_METHODS_FOR_CONVERTION(Number, double)
    VALUE_METHODS_FOR_IS_PO(Number)

    VALUE_METHODS_FOR_CONVERTION(BigInt, int64_t)
    VALUE_METHODS_FOR_IS_P(BigInt)

    VALUE_METHODS_FOR_CONVERTION(String, exlib::string)
    VALUE_METHODS_FOR_IS_PO(String)

    VALUE_METHODS_FOR_IS_P(Array)
    VALUE_METHODS_FOR_IS_P(Object)
    VALUE_METHODS_FOR_IS_P(Function)

public:
    Runtime* m_rt;
    js_value m_v;
};

class Object : public Value {
public:
    Object()
    {
    }

    Object(Runtime* rt, js_value v)
        : Value(rt, v)
    {
        assert(isObject());
    }

    Object(const Value& v)
        : Value(v)
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

class Array : public Object {
public:
    Array()
    {
    }

    Array(Runtime* rt, js_value v)
        : Object(rt, v)
    {
        assert(isArray());
    }

    Array(const Value& v)
        : Object(v)
    {
        assert(isArray());
    }

public:
    int32_t length()
    {
        return m_rt->ArrayLength(*this);
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

class Function : public Object {
public:
    Function()
    {
    }

    Function(Runtime* rt, js_value v)
        : Object(rt, v)
    {
        assert(isFunction());
    }

    Function(const Value& v)
        : Object(v)
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

inline JSThreadCore::Locker::Locker(Runtime* rt)
    : m_rt(rt)
{
    rt->Locker_enter(*this);
}

inline JSThreadCore::Locker::~Locker()
{
    m_rt->Locker_leave(*this);
}

inline JSThreadCore::Unlocker::Unlocker(Runtime* rt)
    : m_rt(rt)
{
    rt->Unlocker_enter(*this);
}

inline JSThreadCore::Unlocker::~Unlocker()
{
    m_rt->Unlocker_leave(*this);
}

inline JSThreadCore::Scope::Scope(Runtime* rt)
    : m_rt(rt)
{
    rt->Scope_enter(*this);
}

inline JSThreadCore::Scope::~Scope()
{
    m_rt->Scope_leave(*this);
}

inline HandleScope::HandleScope(Runtime* rt)
    : m_rt(rt)
{
    rt->HandleScope_enter(*this);
}

inline HandleScope::~HandleScope()
{
    m_rt->HandleScope_leave(*this);
}

inline EscapableHandleScope::EscapableHandleScope(Runtime* rt)
    : m_rt(rt)
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
