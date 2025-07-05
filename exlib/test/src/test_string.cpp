#include "gtest/gtest.h"
#include "exlib/include/qstring.h"
#include <string>

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
    // Test multiple character sets
    exlib::string mixed("Hello123World456");
    GTEST_ASSERT_EQ(mixed.find_last_of("0123456789"), 15); // Last digit '6'
    GTEST_ASSERT_EQ(mixed.find_last_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ"), 8); // Last uppercase 'W'
    GTEST_ASSERT_EQ(mixed.find_last_of("abcdefghijklmnopqrstuvwxyz"), 12); // Last lowercase 'd'
}

TEST(exlib_qstring, share_buffer)
{
    exlib::string str("0123456789abcde");
    exlib::string str1(str);

    GTEST_ASSERT_NE(str.c_str(), str1.c_str());

    str.append(1, 'f');
    str1 = str;
    GTEST_ASSERT_EQ(str.c_str(), str1.c_str());

    char* p = str.data();
    GTEST_ASSERT_NE(str.c_str(), str1.c_str());
}

TEST(exlib_qstring, operator)
{
    exlib::string str("0123456789abcdef");
    exlib::string str1(str);

    GTEST_ASSERT_EQ(str.c_str(), str1.c_str());

    char ch = *str.c_str();
    GTEST_ASSERT_EQ(str.c_str(), str1.c_str());
}

TEST(exlib_qstring, huge_string)
{
    exlib::string str("0123456789abcdef");
    str.resize(17006);
    exlib::string str1(str);

    GTEST_ASSERT_EQ(str.c_str(), str1.c_str());

    char* p = str1.data();
    GTEST_ASSERT_NE(str.c_str(), str1.c_str());
    // GTEST_ASSERT_EQ(str[0], str1[0]);
}

// ==================== find 方法测试 ====================

TEST(exlib_qstring, find_char_comprehensive)
{
    const char* test_str = "hello world hello";
    exlib::string str(test_str);
    std::string std_str(test_str);

    // Test basic find - compare with std::string
    GTEST_ASSERT_EQ(str.find('h'), std_str.find('h'));
    GTEST_ASSERT_EQ(str.find('o'), std_str.find('o'));
    GTEST_ASSERT_EQ(str.find('l'), std_str.find('l'));
    GTEST_ASSERT_EQ(str.find(' '), std_str.find(' '));

    // Test find with starting position - compare with std::string
    GTEST_ASSERT_EQ(str.find('h', 1), std_str.find('h', 1)); // Find second 'h'
    GTEST_ASSERT_EQ(str.find('o', 5), std_str.find('o', 5)); // Find second 'o'
    GTEST_ASSERT_EQ(str.find('l', 4), std_str.find('l', 4)); // Find 'l' in "world"

    // Test character not found - compare with std::string
    GTEST_ASSERT_EQ(str.find('x'), std_str.find('x'));
    GTEST_ASSERT_EQ(str.find('z'), std_str.find('z'));

    // Test find beyond string length - compare with std::string
    GTEST_ASSERT_EQ(str.find('h', 20), std_str.find('h', 20));

    // Test empty string - compare with std::string
    exlib::string empty("");
    std::string std_empty("");
    GTEST_ASSERT_EQ(empty.find('a'), std_empty.find('a'));
}

TEST(exlib_qstring, find_string_comprehensive)
{
    const char* test_str = "hello world hello world";
    exlib::string str(test_str);
    std::string std_str(test_str);

    // Test basic string find - compare with std::string
    GTEST_ASSERT_EQ(str.find("hello"), std_str.find("hello"));
    GTEST_ASSERT_EQ(str.find("world"), std_str.find("world"));
    GTEST_ASSERT_EQ(str.find("llo"), std_str.find("llo"));
    GTEST_ASSERT_EQ(str.find(" "), std_str.find(" "));

    // Test find with starting position - compare with std::string
    GTEST_ASSERT_EQ(str.find("hello", 1), std_str.find("hello", 1)); // Find second "hello"
    GTEST_ASSERT_EQ(str.find("world", 7), std_str.find("world", 7)); // Find second "world"
    GTEST_ASSERT_EQ(str.find("llo", 3), std_str.find("llo", 3)); // Find "llo" in second "hello"

    // Test substring not found - compare with std::string
    GTEST_ASSERT_EQ(str.find("xyz"), std_str.find("xyz"));
    GTEST_ASSERT_EQ(str.find("goodbye"), std_str.find("goodbye"));

    // Test find beyond string length - compare with std::string
    GTEST_ASSERT_EQ(str.find("hello", 25), std_str.find("hello", 25));

    // Test empty substring - compare with std::string
    GTEST_ASSERT_EQ(str.find(""), std_str.find("")); // Empty string found at position 0
    GTEST_ASSERT_EQ(str.find("", 2), std_str.find("", 2)); // Empty string found at any position
    GTEST_ASSERT_EQ(str.find("", 10), std_str.find("", 10)); // Should match std::string behavior

    // Test substring longer than string - compare with std::string
    GTEST_ASSERT_EQ(str.find("hello world hello world extra"), std_str.find("hello world hello world extra"));

    // Test case sensitivity - compare with std::string
    GTEST_ASSERT_EQ(str.find("Hello"), std_str.find("Hello")); // Should not find
    GTEST_ASSERT_EQ(str.find("WORLD"), std_str.find("WORLD")); // Should not find
}

TEST(exlib_qstring, find_edge_cases)
{
    // Test single character string
    exlib::string single("a");
    GTEST_ASSERT_EQ(single.find('a'), 0);
    GTEST_ASSERT_EQ(single.find('b'), SIZE_MAX);
    GTEST_ASSERT_EQ(single.find("a"), 0);
    GTEST_ASSERT_EQ(single.find("b"), SIZE_MAX);

    // Test repeated characters
    exlib::string repeated("aaabbbccc");
    GTEST_ASSERT_EQ(repeated.find('a'), 0);
    GTEST_ASSERT_EQ(repeated.find('b'), 3);
    GTEST_ASSERT_EQ(repeated.find('c'), 6);
    GTEST_ASSERT_EQ(repeated.find("aaa"), 0);
    GTEST_ASSERT_EQ(repeated.find("bbb"), 3);
    GTEST_ASSERT_EQ(repeated.find("ccc"), 6);

    // Test overlapping patterns
    exlib::string overlap("ababab");
    GTEST_ASSERT_EQ(overlap.find("ab"), 0);
    GTEST_ASSERT_EQ(overlap.find("ab", 1), 2);
    GTEST_ASSERT_EQ(overlap.find("ab", 3), 4);
    GTEST_ASSERT_EQ(overlap.find("abab"), 0);
    GTEST_ASSERT_EQ(overlap.find("abab", 1), 2);
}

// ==================== find_first_of 方法测试 (std::string 兼容) ====================
// 测试 exlib::string 的 find_first_of 是否符合 std::string 标准

TEST(exlib_qstring, find_first_of_single_char)
{
    const char* test_str = "hello world hello";
    exlib::string str(test_str);
    std::string std_str(test_str);

    // Test basic find_first_of with single character - compare with std::string
    GTEST_ASSERT_EQ(str.find_first_of('h'), std_str.find_first_of('h')); // First 'h'
    GTEST_ASSERT_EQ(str.find_first_of('o'), std_str.find_first_of('o')); // First 'o'
    GTEST_ASSERT_EQ(str.find_first_of('l'), std_str.find_first_of('l')); // First 'l'
    GTEST_ASSERT_EQ(str.find_first_of('e'), std_str.find_first_of('e')); // First 'e'
    GTEST_ASSERT_EQ(str.find_first_of(' '), std_str.find_first_of(' ')); // Space

    // Test character not found - compare with std::string
    GTEST_ASSERT_EQ(str.find_first_of('x'), std_str.find_first_of('x'));
    GTEST_ASSERT_EQ(str.find_first_of('z'), std_str.find_first_of('z'));

    // Test with position parameter - compare with std::string
    GTEST_ASSERT_EQ(str.find_first_of('h', 1), std_str.find_first_of('h', 1)); // Second 'h' when searching from position 1
    GTEST_ASSERT_EQ(str.find_first_of('o', 5), std_str.find_first_of('o', 5)); // 'o' in "world" when searching from position 5
    GTEST_ASSERT_EQ(str.find_first_of('l', 4), std_str.find_first_of('l', 4)); // 'l' in "world" when searching from position 4
}

TEST(exlib_qstring, find_first_of_character_set)
{
    const char* test_str = "hello world 123";
    exlib::string str(test_str);
    std::string std_str(test_str);

    // Test with character set (any character from the set) - compare with std::string
    GTEST_ASSERT_EQ(str.find_first_of("aeiou"), std_str.find_first_of("aeiou")); // First vowel
    GTEST_ASSERT_EQ(str.find_first_of("0123456789"), std_str.find_first_of("0123456789")); // First digit
    GTEST_ASSERT_EQ(str.find_first_of("xyz"), std_str.find_first_of("xyz")); // No characters from set found

    // Test with position parameter - compare with std::string
    GTEST_ASSERT_EQ(str.find_first_of("aeiou", 2), std_str.find_first_of("aeiou", 2)); // First vowel after position 2
    GTEST_ASSERT_EQ(str.find_first_of("0123456789", 10), std_str.find_first_of("0123456789", 10)); // First digit after position 10

    // Test overlapping characters - compare with std::string
    GTEST_ASSERT_EQ(str.find_first_of("lo"), std_str.find_first_of("lo")); // First 'l' or 'o'
    GTEST_ASSERT_EQ(str.find_first_of("rd"), std_str.find_first_of("rd")); // First 'r' or 'd'
}

TEST(exlib_qstring, find_first_of_edge_cases)
{
    // Test empty string - compare with std::string
    exlib::string empty("");
    std::string std_empty("");
    GTEST_ASSERT_EQ(empty.find_first_of('a'), std_empty.find_first_of('a'));
    GTEST_ASSERT_EQ(empty.find_first_of("abc"), std_empty.find_first_of("abc"));

    // Test single character string - compare with std::string
    exlib::string single("a");
    std::string std_single("a");
    GTEST_ASSERT_EQ(single.find_first_of('a'), std_single.find_first_of('a'));
    GTEST_ASSERT_EQ(single.find_first_of('b'), std_single.find_first_of('b'));
    GTEST_ASSERT_EQ(single.find_first_of("abc"), std_single.find_first_of("abc")); // Should find 'a'
    GTEST_ASSERT_EQ(single.find_first_of("xyz"), std_single.find_first_of("xyz"));

    // Test with empty character set - compare with std::string
    exlib::string str("hello");
    std::string std_str("hello");
    GTEST_ASSERT_EQ(str.find_first_of(""), std_str.find_first_of("")); // Empty set should return npos

    // Test position beyond string length - compare with std::string
    GTEST_ASSERT_EQ(str.find_first_of('l', 100), std_str.find_first_of('l', 100)); // Should return npos
    GTEST_ASSERT_EQ(str.find_first_of('h', 100), std_str.find_first_of('h', 100)); // Should return npos
}

TEST(exlib_qstring, find_first_of_comprehensive)
{
    const char* test_str = "document.backup.2023.txt";
    exlib::string filename(test_str);
    std::string std_filename(test_str);

    // Test finding file extension separator - compare with std::string
    GTEST_ASSERT_EQ(filename.find_first_of('.'), std_filename.find_first_of('.'));

    // Test finding any digit - compare with std::string
    GTEST_ASSERT_EQ(filename.find_first_of("0123456789"), std_filename.find_first_of("0123456789"));

    // Test finding path separators (even though none exist) - compare with std::string
    GTEST_ASSERT_EQ(filename.find_first_of("/\\"), std_filename.find_first_of("/\\"));

    // Test multiple character sets - compare with std::string
    GTEST_ASSERT_EQ(filename.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ"), std_filename.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    GTEST_ASSERT_EQ(filename.find_first_of("abcdefghijklmnopqrstuvwxyz"), std_filename.find_first_of("abcdefghijklmnopqrstuvwxyz"));

    // Test with position to find later occurrences - compare with std::string
    GTEST_ASSERT_EQ(filename.find_first_of("0123456789", 5), std_filename.find_first_of("0123456789", 5));
    GTEST_ASSERT_EQ(filename.find_first_of("0123456789", 18), std_filename.find_first_of("0123456789", 18));
}

TEST(exlib_qstring, find_first_of_vs_find_comparison)
{
    exlib::string str("programming");

    // Compare find_first_of with manual search
    auto manual_find_first_of = [](const exlib::string& s, const char* chars) -> size_t {
        for (size_t i = 0; i < s.length(); ++i) {
            for (const char* p = chars; *p; ++p) {
                if (s.c_str()[i] == *p) {
                    return i;
                }
            }
        }
        return SIZE_MAX;
    };

    // Test various character sets
    GTEST_ASSERT_EQ(str.find_first_of("aeiou"), manual_find_first_of(str, "aeiou"));
    GTEST_ASSERT_EQ(str.find_first_of("xyz"), manual_find_first_of(str, "xyz"));
    GTEST_ASSERT_EQ(str.find_first_of("mrg"), manual_find_first_of(str, "mrg"));
    GTEST_ASSERT_EQ(str.find_first_of("p"), manual_find_first_of(str, "p"));
}

// ==================== find_last_of 方法测试 (std::string 兼容) ====================
// 测试 exlib::string 的 find_last_of 是否符合 std::string 标准

TEST(exlib_qstring, find_last_of_single_char)
{
    const char* test_str = "hello world hello";
    exlib::string str(test_str);
    std::string std_str(test_str);

    // Test basic find_last_of with single character - compare with std::string
    GTEST_ASSERT_EQ(str.find_last_of('h'), std_str.find_last_of('h')); // Last 'h'
    GTEST_ASSERT_EQ(str.find_last_of('o'), std_str.find_last_of('o')); // Last 'o'
    GTEST_ASSERT_EQ(str.find_last_of('l'), std_str.find_last_of('l')); // Last 'l'
    GTEST_ASSERT_EQ(str.find_last_of('e'), std_str.find_last_of('e')); // Last 'e'
    GTEST_ASSERT_EQ(str.find_last_of(' '), std_str.find_last_of(' ')); // Space

    // Test character not found - compare with std::string
    GTEST_ASSERT_EQ(str.find_last_of('x'), std_str.find_last_of('x'));
    GTEST_ASSERT_EQ(str.find_last_of('z'), std_str.find_last_of('z'));

    // Test with position parameter - compare with std::string
    GTEST_ASSERT_EQ(str.find_last_of('h', 10), std_str.find_last_of('h', 10)); // First 'h' when searching from position 10
    GTEST_ASSERT_EQ(str.find_last_of('o', 5), std_str.find_last_of('o', 5)); // 'o' in "hello" when searching from position 5
    GTEST_ASSERT_EQ(str.find_last_of('l', 3), std_str.find_last_of('l', 3)); // Last 'l' in "hello" when searching from position 3
}

TEST(exlib_qstring, find_last_of_character_set)
{
    const char* test_str = "hello world 123";
    exlib::string str(test_str);
    std::string std_str(test_str);

    // Test with character set (any character from the set) - compare with std::string
    GTEST_ASSERT_EQ(str.find_last_of("aeiou"), std_str.find_last_of("aeiou")); // Last vowel
    GTEST_ASSERT_EQ(str.find_last_of("0123456789"), std_str.find_last_of("0123456789")); // Last digit
    GTEST_ASSERT_EQ(str.find_last_of("xyz"), std_str.find_last_of("xyz")); // No characters from set found

    // Test with position parameter - compare with std::string
    GTEST_ASSERT_EQ(str.find_last_of("aeiou", 10), std_str.find_last_of("aeiou", 10)); // Last vowel before position 10
    GTEST_ASSERT_EQ(str.find_last_of("0123456789", 13), std_str.find_last_of("0123456789", 13)); // Digit at position 13

    // Test overlapping characters - compare with std::string
    GTEST_ASSERT_EQ(str.find_last_of("lo"), std_str.find_last_of("lo")); // Last 'l' or 'o'
    GTEST_ASSERT_EQ(str.find_last_of("rd"), std_str.find_last_of("rd")); // Last 'r' or 'd'
}

TEST(exlib_qstring, find_last_of_edge_cases)
{
    // Test empty string - compare with std::string
    exlib::string empty("");
    std::string std_empty("");
    GTEST_ASSERT_EQ(empty.find_last_of('a'), std_empty.find_last_of('a'));
    GTEST_ASSERT_EQ(empty.find_last_of("abc"), std_empty.find_last_of("abc"));

    // Test single character string - compare with std::string
    exlib::string single("a");
    std::string std_single("a");
    GTEST_ASSERT_EQ(single.find_last_of('a'), std_single.find_last_of('a'));
    GTEST_ASSERT_EQ(single.find_last_of('b'), std_single.find_last_of('b'));
    GTEST_ASSERT_EQ(single.find_last_of("abc"), std_single.find_last_of("abc")); // Should find 'a'
    GTEST_ASSERT_EQ(single.find_last_of("xyz"), std_single.find_last_of("xyz"));

    // Test with empty character set - compare with std::string
    exlib::string str("hello");
    std::string std_str("hello");
    GTEST_ASSERT_EQ(str.find_last_of(""), std_str.find_last_of("")); // Empty set should return npos

    // Test position beyond string length - compare with std::string
    GTEST_ASSERT_EQ(str.find_last_of('l', 100), std_str.find_last_of('l', 100)); // Should search from end
    GTEST_ASSERT_EQ(str.find_last_of('h', 100), std_str.find_last_of('h', 100)); // Should find 'h' at start
}

TEST(exlib_qstring, find_last_of_comprehensive)
{
    const char* test_str = "document.backup.2023.txt";
    exlib::string filename(test_str);
    std::string std_filename(test_str);

    // Test finding file extension separator - compare with std::string
    GTEST_ASSERT_EQ(filename.find_last_of('.'), std_filename.find_last_of('.'));

    // Test finding any digit - compare with std::string
    GTEST_ASSERT_EQ(filename.find_last_of("0123456789"), std_filename.find_last_of("0123456789"));

    // Test finding path separators (even though none exist) - compare with std::string
    GTEST_ASSERT_EQ(filename.find_last_of("/\\"), std_filename.find_last_of("/\\"));

    // Test multiple character sets - compare with std::string
    GTEST_ASSERT_EQ(filename.find_last_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ"), std_filename.find_last_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    GTEST_ASSERT_EQ(filename.find_last_of("abcdefghijklmnopqrstuvwxyz"), std_filename.find_last_of("abcdefghijklmnopqrstuvwxyz"));

    // Test with position to find earlier occurrences - compare with std::string
    GTEST_ASSERT_EQ(filename.find_last_of("0123456789", 19), std_filename.find_last_of("0123456789", 19));
    GTEST_ASSERT_EQ(filename.find_last_of("0123456789", 15), std_filename.find_last_of("0123456789", 15));
}

TEST(exlib_qstring, find_last_of_vs_find_comparison)
{
    exlib::string str("programming");

    // Compare find_last_of with manual search
    auto manual_find_last_of = [](const exlib::string& s, const char* chars) -> size_t {
        for (size_t i = s.length(); i > 0; --i) {
            for (const char* p = chars; *p; ++p) {
                if (s.c_str()[i - 1] == *p) {
                    return i - 1;
                }
            }
        }
        return SIZE_MAX;
    };

    // Test various character sets
    GTEST_ASSERT_EQ(str.find_last_of("aeiou"), manual_find_last_of(str, "aeiou"));
    GTEST_ASSERT_EQ(str.find_last_of("xyz"), manual_find_last_of(str, "xyz"));
    GTEST_ASSERT_EQ(str.find_last_of("mrg"), manual_find_last_of(str, "mrg"));
    GTEST_ASSERT_EQ(str.find_last_of("p"), manual_find_last_of(str, "p"));
}

// ==================== 额外的高级测试用例 ====================

TEST(exlib_qstring, find_unicode_and_special_chars)
{
    // Test with UTF-8 encoded Unicode characters (as byte sequences)
    exlib::string unicode("hello world"); // Use ASCII for compatibility
    GTEST_ASSERT_EQ(unicode.find("hello"), 0);
    GTEST_ASSERT_EQ(unicode.find("world"), 6);
    GTEST_ASSERT_EQ(unicode.find("llo"), 2);

    // Test with special characters
    exlib::string special("tab\there\nnewline");
    GTEST_ASSERT_EQ(special.find('\t'), 3);
    GTEST_ASSERT_EQ(special.find('\n'), 8);
    GTEST_ASSERT_EQ(special.find("tab\there"), 0);
}

TEST(exlib_qstring, find_performance_patterns)
{
    // Test with long strings to verify performance characteristics
    exlib::string longstr;
    for (int i = 0; i < 1000; i++) {
        longstr += "abcdefghij";
    }
    longstr += "NEEDLE";

    // Should find the needle at the end        GTEST_ASSERT_EQ(longstr.find("NEEDLE"), 10000);

    // Test pattern that appears multiple times
    longstr += "abcdefghij";
    GTEST_ASSERT_EQ(longstr.find("abc"), 0); // First occurrence
    GTEST_ASSERT_EQ(longstr.find("abc", 1), 10); // Second occurrence
}

TEST(exlib_qstring, find_boundary_positions)
{
    exlib::string str("abcdefg");

    // Test finding at exact boundaries
    GTEST_ASSERT_EQ(str.find('a'), 0); // First position
    GTEST_ASSERT_EQ(str.find('g'), 6); // Last position
    GTEST_ASSERT_EQ(str.find("abc"), 0); // From start
    GTEST_ASSERT_EQ(str.find("efg"), 4); // To end

    // Test find_last_of at boundaries
    GTEST_ASSERT_EQ(str.find_last_of("a"), 0); // First char is also last occurrence
    GTEST_ASSERT_EQ(str.find_last_of("g"), 6); // Last char
    GTEST_ASSERT_EQ(str.find_last_of("ag"), 6); // Should find 'g'

    // Test with position exactly at string length
    GTEST_ASSERT_EQ(str.find('a', 7), SIZE_MAX); // Beyond end
    GTEST_ASSERT_EQ(str.find_last_of("g", 7), 6); // Should still work
}

TEST(exlib_qstring, find_null_and_empty_patterns)
{
    // Test with embedded null character
    const char test_with_null[] = "hello\0world";
    exlib::string str(test_with_null, 11); // String with embedded null
    std::string std_str(test_with_null, 11);

    // Test finding null character - compare with std::string
    GTEST_ASSERT_EQ(str.find('\0'), std_str.find('\0'));
    GTEST_ASSERT_EQ(str.find_last_of('\0'), std_str.find_last_of('\0'));

    // Test patterns around null - compare with std::string
    GTEST_ASSERT_EQ(str.find("o\0w"), std_str.find("o\0w"));

    // Test empty pattern behavior - compare with std::string
    exlib::string normal("test");
    std::string std_normal("test");
    GTEST_ASSERT_EQ(normal.find(""), std_normal.find("")); // Empty string found at start
    GTEST_ASSERT_EQ(normal.find("", 2), std_normal.find("", 2)); // Empty string found at any position
    GTEST_ASSERT_EQ(normal.find("", 10), std_normal.find("", 10)); // But not beyond string length
}

TEST(exlib_qstring, find_overlapping_and_adjacent)
{
    // Test overlapping patterns
    exlib::string overlap("aaaa");
    GTEST_ASSERT_EQ(overlap.find("aa"), 0);
    GTEST_ASSERT_EQ(overlap.find("aa", 1), 1);
    GTEST_ASSERT_EQ(overlap.find("aa", 2), 2);
    GTEST_ASSERT_EQ(overlap.find("aaa"), 0);
    GTEST_ASSERT_EQ(overlap.find("aaa", 1), 1);

    // Test adjacent different characters
    exlib::string adjacent("abcdabcd");
    GTEST_ASSERT_EQ(adjacent.find("abcd"), 0);
    GTEST_ASSERT_EQ(adjacent.find("abcd", 1), 4);
    GTEST_ASSERT_EQ(adjacent.find("cd"), 2);
    GTEST_ASSERT_EQ(adjacent.find("cd", 3), 6);
}

TEST(exlib_qstring, find_last_of_character_sets)
{
    const char* test_str = "document.backup.2023.txt";
    exlib::string filename(test_str);
    std::string std_filename(test_str);

    // Test finding file extension - compare with std::string
    GTEST_ASSERT_EQ(filename.find_last_of('.'), std_filename.find_last_of('.'));

    // Test finding any digit - compare with std::string
    GTEST_ASSERT_EQ(filename.find_last_of("0123456789"), std_filename.find_last_of("0123456789"));

    // Test finding vowels and consonants - compare with std::string
    GTEST_ASSERT_EQ(filename.find_last_of("aeiou"), std_filename.find_last_of("aeiou"));
    GTEST_ASSERT_EQ(filename.find_last_of("bcdfghjklmnpqrstvwxyz"), std_filename.find_last_of("bcdfghjklmnpqrstvwxyz"));

    // Test multiple character sets - compare with std::string
    const char* mixed_str = "Hello123World456";
    exlib::string mixed(mixed_str);
    std::string std_mixed(mixed_str);
    GTEST_ASSERT_EQ(mixed.find_last_of("0123456789"), std_mixed.find_last_of("0123456789")); // Last digit
    GTEST_ASSERT_EQ(mixed.find_last_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ"), std_mixed.find_last_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ")); // Last uppercase
    GTEST_ASSERT_EQ(mixed.find_last_of("abcdefghijklmnopqrstuvwxyz"), std_mixed.find_last_of("abcdefghijklmnopqrstuvwxyz")); // Last lowercase
}

TEST(exlib_qstring, find_case_sensitivity_comprehensive)
{
    exlib::string mixed("AaBbCcDd");

    // Test case sensitivity for characters
    GTEST_ASSERT_EQ(mixed.find('A'), 0);
    GTEST_ASSERT_EQ(mixed.find('a'), 1);
    GTEST_ASSERT_EQ(mixed.find('B'), 2);
    GTEST_ASSERT_EQ(mixed.find('b'), 3);

    // Test case sensitivity for strings
    GTEST_ASSERT_EQ(mixed.find("Aa"), 0);
    GTEST_ASSERT_EQ(mixed.find("aA"), SIZE_MAX); // Should not find
    GTEST_ASSERT_EQ(mixed.find("BB"), SIZE_MAX); // Should not find
    GTEST_ASSERT_EQ(mixed.find("Bb"), 2);

    // Test find_last_of with mixed case
    GTEST_ASSERT_EQ(mixed.find_last_of("ABCD"), 6); // Last uppercase 'C'
    GTEST_ASSERT_EQ(mixed.find_last_of("abcd"), 7); // Last lowercase 'd'
    GTEST_ASSERT_EQ(mixed.find_last_of("AaBbCcDd"), 7); // Last character
}

TEST(exlib_qstring, find_stress_test_edge_cases)
{
    // Test very long substring search
    exlib::string base("short");
    exlib::string longpattern;
    for (int i = 0; i < 100; i++) {
        longpattern += "verylongpattern";
    }
    GTEST_ASSERT_EQ(base.find(longpattern), SIZE_MAX); // Pattern longer than string

    // Test repeated pattern at end
    exlib::string repeated_end("prefixsuffixsuffix");
    GTEST_ASSERT_EQ(repeated_end.find("suffix"), 6);
    GTEST_ASSERT_EQ(repeated_end.find("suffix", 7), 12);
    GTEST_ASSERT_EQ(repeated_end.find_last_of("x"), 17); // Last 'x'

    // Test single character repeated
    exlib::string single_repeat("xxxxxxxxx");
    GTEST_ASSERT_EQ(single_repeat.find('x'), 0);
    GTEST_ASSERT_EQ(single_repeat.find_last_of('x'), 8);
    GTEST_ASSERT_EQ(single_repeat.find("xx"), 0);
    GTEST_ASSERT_EQ(single_repeat.find("xx", 1), 1);
}

// ==================== std::string 兼容性验证测试 ====================

TEST(exlib_qstring, std_string_compatibility_find)
{
    // 测试各种场景下 exlib::string 与 std::string 的 find 方法完全一致
    struct TestCase {
        const char* str;
        const char* pattern;
        size_t pos;
    };

    std::vector<TestCase> test_cases = {
        { "hello world", "world", 0 },
        { "hello world", "world", 6 },
        { "hello world", "world", 7 },
        { "hello world hello", "hello", 0 },
        { "hello world hello", "hello", 1 },
        { "hello world hello", "hello", 12 },
        { "hello world hello", "hello", 13 },
        { "abcdefg", "", 0 },
        { "abcdefg", "", 3 },
        { "abcdefg", "", 7 },
        { "abcdefg", "", 8 },
        { "", "test", 0 },
        { "test", "", 0 },
        { "test", "test", 0 },
        { "test", "testing", 0 },
        { "aaaa", "aa", 0 },
        { "aaaa", "aa", 1 },
        { "aaaa", "aa", 2 },
        { "case", "CASE", 0 },
        { "special\t\n\0chars", "chars", 0 }
    };

    for (const auto& tc : test_cases) {
        size_t str_len = strlen(tc.str);
        // Handle embedded null case
        if (strstr(tc.str, "special") == tc.str) {
            str_len = 14; // "special\t\n\0chars" length
        }

        exlib::string exlib_str(tc.str, str_len);
        std::string std_str(tc.str, str_len);

        size_t exlib_result = exlib_str.find(tc.pattern, tc.pos);
        size_t std_result = std_str.find(tc.pattern, tc.pos);

        GTEST_ASSERT_EQ(exlib_result, std_result)
            << "find(\"" << tc.pattern << "\", " << tc.pos << ") mismatch for string: \"" << tc.str << "\"";
    }
}

TEST(exlib_qstring, std_string_compatibility_find_char)
{
    // 测试字符查找的兼容性
    struct TestCase {
        const char* str;
        char ch;
        size_t pos;
    };

    std::vector<TestCase> test_cases = {
        { "hello world", 'h', 0 },
        { "hello world", 'h', 1 },
        { "hello world", 'o', 0 },
        { "hello world", 'o', 5 },
        { "hello world", 'z', 0 },
        { "hello world", ' ', 0 },
        { "hello world", '\0', 0 },
        { "", 'a', 0 },
        { "a", 'a', 0 },
        { "a", 'a', 1 },
        { "aaaa", 'a', 0 },
        { "aaaa", 'a', 1 },
        { "aaaa", 'a', 2 },
        { "aaaa", 'a', 3 },
        { "aaaa", 'a', 4 }
    };

    for (const auto& tc : test_cases) {
        exlib::string exlib_str(tc.str);
        std::string std_str(tc.str);

        size_t exlib_result = exlib_str.find(tc.ch, tc.pos);
        size_t std_result = std_str.find(tc.ch, tc.pos);

        GTEST_ASSERT_EQ(exlib_result, std_result)
            << "find('" << tc.ch << "', " << tc.pos << ") mismatch for string: \"" << tc.str << "\"";
    }
}

TEST(exlib_qstring, std_string_compatibility_find_last_of)
{
    // 测试 find_last_of 的兼容性
    struct TestCase {
        const char* str;
        const char* charset;
        size_t pos;
        bool use_pos;
    };

    std::vector<TestCase> test_cases = {
        { "hello world", "aeiou", std::string::npos, false },
        { "hello world", "aeiou", 10, true },
        { "hello world", "aeiou", 5, true },
        { "hello world", "xyz", std::string::npos, false },
        { "hello world", "hlr", std::string::npos, false },
        { "hello world", "", std::string::npos, false },
        { "", "aeiou", std::string::npos, false },
        { "a", "abc", std::string::npos, false },
        { "a", "xyz", std::string::npos, false },
        { "document.backup.2023.txt", "0123456789", std::string::npos, false },
        { "document.backup.2023.txt", "0123456789", 19, true },
        { "document.backup.2023.txt", "0123456789", 15, true },
        { "document.backup.2023.txt", ".", std::string::npos, false },
        { "Hello123World456", "ABCDEFGHIJKLMNOPQRSTUVWXYZ", std::string::npos, false },
        { "Hello123World456", "abcdefghijklmnopqrstuvwxyz", std::string::npos, false },
        { "Hello123World456", "0123456789", std::string::npos, false }
    };

    for (const auto& tc : test_cases) {
        exlib::string exlib_str(tc.str);
        std::string std_str(tc.str);

        size_t exlib_result, std_result;
        if (tc.use_pos) {
            exlib_result = exlib_str.find_last_of(tc.charset, tc.pos);
            std_result = std_str.find_last_of(tc.charset, tc.pos);
        } else {
            exlib_result = exlib_str.find_last_of(tc.charset);
            std_result = std_str.find_last_of(tc.charset);
        }

        GTEST_ASSERT_EQ(exlib_result, std_result)
            << "find_last_of(\"" << tc.charset << "\""
            << (tc.use_pos ? (", " + std::to_string(tc.pos)) : "")
            << ") mismatch for string: \"" << tc.str << "\"";
    }
}

TEST(exlib_qstring, std_string_compatibility_find_last_of_char)
{
    // 测试 find_last_of 单字符的兼容性
    struct TestCase {
        const char* str;
        char ch;
        size_t pos;
        bool use_pos;
    };

    std::vector<TestCase> test_cases = {
        { "hello world hello", 'h', std::string::npos, false },
        { "hello world hello", 'h', 10, true },
        { "hello world hello", 'o', std::string::npos, false },
        { "hello world hello", 'o', 5, true },
        { "hello world hello", 'z', std::string::npos, false },
        { "", 'a', std::string::npos, false },
        { "a", 'a', std::string::npos, false },
        { "a", 'a', 0, true },
        { "a", 'a', 1, true },
        { "aaaa", 'a', std::string::npos, false },
        { "aaaa", 'a', 2, true },
        { "aaaa", 'a', 0, true }
    };

    for (const auto& tc : test_cases) {
        exlib::string exlib_str(tc.str);
        std::string std_str(tc.str);

        size_t exlib_result, std_result;
        if (tc.use_pos) {
            exlib_result = exlib_str.find_last_of(tc.ch, tc.pos);
            std_result = std_str.find_last_of(tc.ch, tc.pos);
        } else {
            exlib_result = exlib_str.find_last_of(tc.ch);
            std_result = std_str.find_last_of(tc.ch);
        }

        GTEST_ASSERT_EQ(exlib_result, std_result)
            << "find_last_of('" << tc.ch << "'"
            << (tc.use_pos ? (", " + std::to_string(tc.pos)) : "")
            << ") mismatch for string: \"" << tc.str << "\"";
    }
}
