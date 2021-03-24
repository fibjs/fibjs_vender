#include "gtest/gtest.h"
#include "exlib/include/qstring.h"

TEST(exlib_qstring, find_char)
{
    exlib::string str("abcdefg");
    GTEST_ASSERT_EQ(str.find('c'), 2);
}

TEST(exlib_qstring, find_string)
{
    exlib::string str("abcdefg");
    GTEST_ASSERT_EQ(str.find("def"), 3);
    GTEST_ASSERT_EQ(str.find("def", 4), SIZE_MAX);
}

TEST(exlib_qstring, compare)
{
    exlib::string str("abcdefg");
    GTEST_ASSERT_EQ(str.find('c'), 2);
}
