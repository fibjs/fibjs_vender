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

namespace js
{

class Value;
class Locker;
class Unlocker;
class Scope;

class Runtime
{
public:
	virtual void destroy() = 0;

	virtual void Locker_enter(Locker& locker) = 0;
	virtual void Locker_leave(Locker& locker) = 0;

	virtual void Unlocker_enter(Unlocker& unlocker) = 0;
	virtual void Unlocker_leave(Unlocker& unlocker) = 0;

	virtual void Scope_enter(Scope& scope) = 0;
	virtual void Scope_leave(Scope& scope) = 0;

	virtual Value NewNumberValue(double d) = 0;

	virtual Value execute(const char* code, int32_t size, const char* soname) = 0;

};

class Api
{
public:
	static const int32_t version;

public:
	virtual const char* getEngine() = 0;
	virtual int32_t getVersion() = 0;
	virtual void init() = 0;
	virtual Runtime* createRuntime() = 0;
	virtual double ValueToNumber(Value& v) = 0;


};

extern Api* v8_api;
extern Api* SpiderMonkey_api;

extern Api* _v8_api;
extern bool set_v8_api(Api* _api);
inline bool setup_v8()
{
	return set_v8_api(_v8_api);
}

extern Api* _SpiderMonkey_api;
extern bool set_SpiderMonkey_api(Api* _api);
inline bool setup_SpiderMonkey()
{
	return set_SpiderMonkey_api(_SpiderMonkey_api);
}

}

#endif // _jssdk_h__
