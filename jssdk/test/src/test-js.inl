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

	js::Value v = js::_api->NewBoolean(rt, true);

	EXPECT_EQ(true, v.toBoolean());

	js::Value v1 = js::_api->NewBoolean(rt, false);

	EXPECT_EQ(false, v1.toBoolean());
}

TEST(ENG(api), Value_Number)
{
	js::Scope scope(rt);

	js::Value v = js::_api->NewNumber(rt, 100.5);

	EXPECT_EQ(100.5, v.toNumber());
}

TEST(ENG(api), execute)
{
	js::Scope scope(rt);

	js::Value v = rt->execute("100+5", 5, "test.js");

	EXPECT_EQ(105, v.toNumber());
}

TEST(ENG(api), json)
{
	js::Scope scope(rt);

	js::Value v = rt->execute("!!JSON", 6, "test.js");

	EXPECT_EQ(true, v.toBoolean());
}

TEST(ENG(api), DestroyRuntime)
{
	rt->destroy();
}
