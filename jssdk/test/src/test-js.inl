TEST(JS(api), version)
{
	EXPECT_EQ(js::Api::version, js::_api->getVersion());
}

TEST(JS(api), init)
{
	js::_api->init();
}

static js::Runtime* rt;

TEST(JS(api), Runtime)
{
	rt = js::_api->createRuntime();

	EXPECT_NE((void*)NULL, rt);
}
