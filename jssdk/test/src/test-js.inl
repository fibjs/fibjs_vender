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

TEST(ENG(api), Value_toBoolean)
{
	js::Scope scope(rt);

	EXPECT_EQ(true, js::_api->NewBoolean(rt, true).toBoolean());
	EXPECT_EQ(false, js::_api->NewBoolean(rt, false).toBoolean());
	EXPECT_EQ(true, js::_api->NewString(rt, "true").toBoolean());
}

TEST(ENG(api), Value_toNumber)
{
	js::Scope scope(rt);

	EXPECT_EQ(100.5, js::_api->NewNumber(rt, 100.5).toNumber());
	EXPECT_EQ(100.5, js::_api->NewString(rt, "100.5").toNumber());
}

TEST(ENG(api), Value_toString)
{
	js::Scope scope(rt);

	EXPECT_EQ("abcd", js::_api->NewString(rt, "abcd").toString());
	EXPECT_EQ("10.5", js::_api->NewNumber(rt, 10.5).toString());
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
