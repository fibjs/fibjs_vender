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

TEST(ENG(api), Value_Boolean)
{
	js::Scope scope(rt);

	ASSERT_TRUE(js::_api->NewBoolean(rt, true).isBoolean());
	ASSERT_TRUE(js::_api->NewBoolean(rt, true).toBoolean());
	EXPECT_FALSE(js::_api->NewBoolean(rt, false).toBoolean());
	ASSERT_TRUE(js::_api->NewString(rt, "true").toBoolean());
}

TEST(ENG(api), Value_Number)
{
	js::Scope scope(rt);

	ASSERT_TRUE(js::_api->NewNumber(rt, 100.5).isNumber());
	EXPECT_FALSE(js::_api->NewBoolean(rt, true).isNumber());
	ASSERT_DOUBLE_EQ(100.5, js::_api->NewNumber(rt, 100.5).toNumber());
	ASSERT_DOUBLE_EQ(100.5, js::_api->NewString(rt, "100.5").toNumber());
}

TEST(ENG(api), Value_String)
{
	js::Scope scope(rt);

	ASSERT_TRUE(js::_api->NewString(rt, "abcd").isString());
	EXPECT_EQ("abcd", js::_api->NewString(rt, "abcd").toString());
	EXPECT_EQ("10.5", js::_api->NewNumber(rt, 10.5).toString());
}

TEST(ENG(api), Value_Array)
{
	js::Scope scope(rt);

	js::Array v = js::_api->NewArray(rt, 10);

	ASSERT_TRUE(v.isObject());
	ASSERT_TRUE(v.isArray());
	EXPECT_EQ(10, v.length());

	ASSERT_TRUE(v.get(0).isUndefined());

	v.set(1, js::_api->NewNumber(rt, 100.5));
	EXPECT_EQ(10, v.length());
	ASSERT_DOUBLE_EQ(100.5, v.get(1).toNumber());

	v.remove(1);
	EXPECT_EQ(10, v.length());
	ASSERT_TRUE(v.get(1).isUndefined());

	v.set(10, js::_api->NewNumber(rt, 1011));
	EXPECT_EQ(11, v.length());
	EXPECT_EQ(1011, v.get(10).toNumber());
}

TEST(ENG(api), Value_Object)
{
	js::Scope scope(rt);

	js::Object v = js::_api->NewObject(rt);

	ASSERT_TRUE(v.isObject());
	EXPECT_FALSE(v.isArray());

	ASSERT_FALSE(v.has("key1"));
	ASSERT_TRUE(v.get("key1").isUndefined());
	EXPECT_EQ(0, v.keys().length());

	v.set("key1", js::_api->NewNumber(rt, 100.5));
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

	js::Object v = js::_api->NewObject(rt);

	ASSERT_TRUE(v.isObject());
	EXPECT_FALSE(v.isArray());

	ASSERT_FALSE(v.has("key1"));
	v.set("key1", js::_api->NewNumber(rt, 100.5));
	ASSERT_TRUE(v.has("key1"));
	ASSERT_FALSE(v.hasPrivate("key1"));

	v.setPrivate("key1", js::_api->NewNumber(rt, 200.25));
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

TEST(ENG(api), json)
{
	js::Scope scope(rt);

	EXPECT_EQ(100, rt->execute("JSON.parse(\'{\"a\":100}\').a", "test.js").toNumber());
}

TEST(ENG(api), DestroyRuntime)
{
	rt->destroy();
}
