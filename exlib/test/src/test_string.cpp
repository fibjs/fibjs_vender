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

TEST(exlib_qstring, share_buffer)
{
    exlib::string str("0123456789abcde");
    exlib::string str1(str);

    GTEST_ASSERT_NE(str.c_str(), str1.c_str());

    str.append(1, 'f');
    str1 = str;
    GTEST_ASSERT_EQ(str.c_str(), str1.c_str());

    str.c_buffer();
    GTEST_ASSERT_NE(str.c_str(), str1.c_str());
}

TEST(exlib_qstring, operator)
{
    exlib::string str("0123456789abcdef");
    exlib::string str1(str);

    GTEST_ASSERT_EQ(str.c_str(), str1.c_str());

    char ch = str[0];
    GTEST_ASSERT_EQ(str.c_str(), str1.c_str());
}

TEST(exlib_qstring, huge_string)
{
    exlib::string str("0123456789abcdef");
    str.resize(17006);
    exlib::string str1(str);

    GTEST_ASSERT_EQ(str.c_str(), str1.c_str());

    str1.c_buffer();
    GTEST_ASSERT_NE(str.c_str(), str1.c_str());
    GTEST_ASSERT_EQ(str[0], str1[0]);
}
