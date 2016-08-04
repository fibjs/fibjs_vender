#include "exlib/include/service.h"

TEST(ENG(api), version)
{
	EXPECT_EQ(js::Api::version, js::_api->getVersion());
}

TEST(ENG(api), init)
{
	js::_api->init();
}

static js::Runtime* rt;

TEST(ENG(api), Runtime)
{
	rt = js::_api->createRuntime();

	EXPECT_NE((void*)NULL, rt);
}

TEST(ENG(api), Value_Undefined)
{
	js::Scope scope(rt);

	ASSERT_TRUE(rt->NewUndefined().isUndefined());
}

TEST(ENG(api), Value_Boolean)
{
	js::Scope scope(rt);

	ASSERT_TRUE(rt->NewBoolean(true).isBoolean());
	ASSERT_TRUE(rt->NewBoolean(true).toBoolean());
	EXPECT_FALSE(rt->NewBoolean(false).toBoolean());
	ASSERT_TRUE(rt->NewString("true").toBoolean());
}

TEST(ENG(api), Value_Number)
{
	js::Scope scope(rt);

	ASSERT_TRUE(rt->NewNumber(100.5).isNumber());
	EXPECT_FALSE(rt->NewBoolean(true).isNumber());
	ASSERT_DOUBLE_EQ(100.5, rt->NewNumber(100.5).toNumber());
	ASSERT_DOUBLE_EQ(100.5, rt->NewString("100.5").toNumber());
}

TEST(ENG(api), Value_String)
{
	js::Scope scope(rt);

	ASSERT_TRUE(rt->NewString("abcd").isString());
	EXPECT_EQ("abcd", rt->NewString("abcd").toString());
	EXPECT_EQ("10.5", rt->NewNumber(10.5).toString());
}

TEST(ENG(api), Value_Array)
{
	js::Scope scope(rt);

	js::Array v = rt->NewArray(10);

	ASSERT_TRUE(v.isObject());
	ASSERT_TRUE(v.isArray());
	EXPECT_EQ(10, v.length());

	ASSERT_TRUE(v.get(0).isUndefined());

	v.set(1, rt->NewNumber(100.5));
	EXPECT_EQ(10, v.length());
	ASSERT_DOUBLE_EQ(100.5, v.get(1).toNumber());

	v.remove(1);
	EXPECT_EQ(10, v.length());
	ASSERT_TRUE(v.get(1).isUndefined());

	v.set(10, rt->NewNumber(1011));
	EXPECT_EQ(11, v.length());
	EXPECT_EQ(1011, v.get(10).toNumber());
}

TEST(ENG(api), Value_Object)
{
	js::Scope scope(rt);

	js::Object v = rt->NewObject();

	ASSERT_TRUE(v.isObject());
	EXPECT_FALSE(v.isArray());

	ASSERT_FALSE(v.has("key1"));
	ASSERT_TRUE(v.get("key1").isUndefined());
	EXPECT_EQ(0, v.keys().length());

	v.set("key1", rt->NewNumber(100.5));
	ASSERT_TRUE(v.has("key1"));
	ASSERT_DOUBLE_EQ(100.5, v.get("key1").toNumber());
	EXPECT_EQ(1, v.keys().length());
	EXPECT_EQ("key1", v.keys().get(0).toString());

	v.remove("key1");
	ASSERT_FALSE(v.has("key1"));
	ASSERT_TRUE(v.get("key1").isUndefined());
	EXPECT_EQ(0, v.keys().length());
}

TEST(ENG(api), Value_Object_Private)
{
	js::Scope scope(rt);

	js::Object v = rt->NewObject();

	ASSERT_TRUE(v.isObject());
	EXPECT_FALSE(v.isArray());

	ASSERT_FALSE(v.has("key1"));
	v.set("key1", rt->NewNumber(100.5));
	ASSERT_TRUE(v.has("key1"));
	ASSERT_FALSE(v.hasPrivate("key1"));

	v.setPrivate("key1", rt->NewNumber(200.25));
	ASSERT_TRUE(v.hasPrivate("key1"));

	ASSERT_DOUBLE_EQ(100.5, v.get("key1").toNumber());
	ASSERT_DOUBLE_EQ(200.25, v.getPrivate("key1").toNumber());

	v.removePrivate("key1");
	ASSERT_FALSE(v.hasPrivate("key1"));
	ASSERT_TRUE(v.has("key1"));
}

TEST(ENG(api), execute)
{
	js::Scope scope(rt);

	EXPECT_EQ(105, rt->execute("100+5", "test.js").toNumber());
}

TEST(ENG(api), Global)
{
	js::Scope scope(rt);

	js::Object g = rt->GetGlobal();

	ASSERT_TRUE(rt->execute("global_test_1", "test.js").isEmpty());
	g.set("global_test_1", rt->NewNumber(205));
	EXPECT_EQ(205, rt->execute("global_test_1", "test.js").toNumber());
}

static bool s_func_test = false;

static intptr_t my_func1(...)
{
	s_func_test = true;
	return 0;
}

TEST(ENG(api), Value_Function)
{
	js::Scope scope(rt);

	js::Value r = rt->execute("(function(a,b){return a+b;});", "test.js");
	ASSERT_TRUE(r.isFunction());

	js::Function f(r);

	js::Value args[2];
	args[0] = rt->NewNumber(100);
	args[1] = rt->NewNumber(200);

	r = f.ncall(args, 2);
	EXPECT_EQ(300, r.toNumber());

	f = rt->NewFunction(my_func1);

	ASSERT_FALSE(s_func_test);
	f.ncall(args, 0);
	ASSERT_TRUE(s_func_test);
}

static bool s_fiber_test = false;

static intptr_t my_func_fiber(...)
{
	s_fiber_test = true;
	return 0;
}

static void *fiber_proc(void *p)
{
	js::Scope scope(rt);

	rt->execute("my_func_fiber();", "test.js");
	return NULL;
}

TEST(ENG(api), fiber)
{
	js::Scope scope(rt);

	js::Object g = rt->GetGlobal();

	g.set("my_func_fiber", rt->NewFunction(my_func_fiber));

	exlib::Service::Create(fiber_proc, 0, 128 * 1024);
	{
		ASSERT_FALSE(s_fiber_test);
		exlib::Fiber::sleep(100);
		ASSERT_FALSE(s_fiber_test);

		js::Unlocker un(rt);
		while (!s_fiber_test)
			exlib::Fiber::sleep(1);
		ASSERT_TRUE(s_fiber_test);
	}

	EXPECT_EQ(105, rt->execute("100+5", "test.js").toNumber());

	{
		js::Locker l(rt);
		EXPECT_EQ(105, rt->execute("100+5", "test.js").toNumber());
	}

	EXPECT_EQ(105, rt->execute("100+5", "test.js").toNumber());
}

TEST(ENG(api), json)
{
	js::Scope scope(rt);

	EXPECT_EQ(100, rt->execute("JSON.parse(\'{\"a\":100}\').a", "test.js").toNumber());
}

TEST(ENG(api), DestroyRuntime)
{
	rt->destroy();
}
