/*
 *  jssdk-v8.cpp
 *  Created on: Mar 31, 2016
 *
 *  Copyright (c) 2016 by Leo Hoo
 *  lion@9465.net
 */

#include "jssdk-v8.h"
#include "libplatform/libplatform.h"
#include <stdlib.h>
#include <string.h>

namespace js
{

class v8_Runtime : public Runtime
{
private:
	class ShellArrayBufferAllocator : public v8::ArrayBuffer::Allocator
	{
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

public:
	v8_Runtime()
	{
		create_params.array_buffer_allocator = &array_buffer_allocator;
		m_isolate = v8::Isolate::New(create_params);

		v8::Locker locker(m_isolate);
		v8::Isolate::Scope isolate_scope(m_isolate);
		v8::HandleScope handle_scope(m_isolate);

		v8::Local<v8::Context> _context = v8::Context::New(m_isolate);

//		m_context.Reset(m_isolate, _context);
	}

public:
	virtual void destroy()
	{
		delete this;
	}

	virtual void enter()
	{
		m_isolate->Enter();
	}

	virtual void leave()
	{
		m_isolate->Exit();
	}

private:
	v8::Isolate *m_isolate;

	v8::Isolate::CreateParams create_params;
	ShellArrayBufferAllocator array_buffer_allocator;
};

class Api_v8 : public Api
{
public:
	virtual const char* getEngine()
	{
		return "v8";
	}

	virtual int32_t getVersion()
	{
		return version;
	}

	virtual void init()
	{
		v8::Platform *platform = v8::platform::CreateDefaultPlatform();
		v8::V8::InitializePlatform(platform);

		v8::V8::Initialize();
	}

	virtual Runtime* createRuntime()
	{
		return new v8_Runtime();
	}

};

static Api_v8 s_api;
Api* _v8_api = &s_api;

}