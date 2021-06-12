/*
 *  jssdk.h
 *  Created on: Mar 31, 2016
 *
 *  Copyright (c) 2016 by Leo Hoo
 *  lion@9465.net
 */

#ifndef _jssdk_h__
#define _jssdk_h__

#include <stdint.h>
#include <exlib/include/qstring.h>

namespace js {

class Api;
class Value;
class Object;
class Array;
class Function;
class HandleScope;
class EscapableHandleScope;
class Runtime;

/** core definition about Runtime with js thread, provide members/interfaces to:
 * - enter/leave js engine's thread locker
 * - enter/leave js engine's thread unlocker
 * - enter js scope/handlescope after app switch to js thread
 * - leave js scope/handlescope before app switch away from js thread
 * 
 * for js engine working alone as/in one thread but could be called on multiple-threads environment,
 * in general, there would be `Locker/Unlocker` to help program determine which thread COULD get
 * ownership of js engine.
 * 
 * - Locker: declare current thread want to use js engine, if js engine owned by another thread, current thread would wait.
 * - Unlocker: declare current thread would release ownership of js engine.
 * 
 * for Locker/Unlocer, two types operations are prepared to help program assign js engine to specific thread safely
 * - Locker::enter(): try to hold js engine from current thread
 * - Locker::leave(): do sth when current thread has get ownership of js engine
 * - Unlocker::enter(): try to release js engine from current thread
 * - Unlocker::leave(): do sth when current thread has given back ownership of js engine
 * 
 */
class JSThreadCore {
public:
    class Locker;
    class Unlocker;
    class Scope;

public:
    virtual ~JSThreadCore() { }

public:
    /**
     * destroy runtime instance, do some clean up for js engine if necessary
     */
    virtual void destroy() = 0;

    virtual void Locker_enter(Locker& locker) = 0;
    virtual void Locker_leave(Locker& locker) = 0;

    virtual void Unlocker_enter(Unlocker& unlocker) = 0;
    virtual void Unlocker_leave(Unlocker& unlocker) = 0;

    virtual void Scope_enter(Scope& scope) = 0;
    virtual void Scope_leave(Scope& scope) = 0;

    virtual void HandleScope_enter(HandleScope& scope) = 0;
    virtual void HandleScope_leave(HandleScope& scope) = 0;

    virtual void EscapableHandleScope_enter(EscapableHandleScope& scope) = 0;
    virtual void EscapableHandleScope_leave(EscapableHandleScope& scope) = 0;
    virtual Value EscapableHandleScope_escape(EscapableHandleScope& scope, Value v) = 0;

public:
    class Api* m_api;
};

/** basic definitions for global API instance
 */
class Api {
public:
    /* version of API */
    static const int32_t version;

public:
    /* return engine's name, specify it in child class */
    virtual const char* getEngineName() = 0;
    /* return engine's version, specify it in child class */
    virtual int32_t getVersion() = 0;
    /* do some initial work for engine */
    virtual void init() = 0;
    /* create one runtime instance */
    virtual Runtime* createRuntime() = 0;
};

extern Api* v8_api;

extern Api* _inst_v8_api;
extern bool use_js_engine(Api*& global_api_instance, Api* _api, const char* engine_name);
inline bool setup_v8()
{
    return use_js_engine(v8_api, _inst_v8_api, "v8");
}

}

#endif // _jssdk_h__
