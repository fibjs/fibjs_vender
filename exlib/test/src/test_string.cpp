#include "gtest/gtest.h"
#include "exlib/include/qstring.h"
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>
#include <cctype>
#include <cstring>
#include <type_traits>
#include <stdexcept>

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

// ==================== operator[] 方法测试 ====================
// Test the new proxy-based operator[] implementation

TEST(exlib_qstring, operator_brackets_read_no_copy)
{
    // Test that reading with operator[] doesn't trigger copy
    // Use a long string to avoid SSO (Small String Optimization)
    exlib::string str("this_is_a_long_string_to_avoid_sso_optimization");
    exlib::string str_copy(str);

    // Verify buffers are shared initially for long strings
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Read operations should NOT trigger copy
    char c1 = str[0]; // Read first character
    GTEST_ASSERT_EQ(c1, 't');
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str()); // Buffers still shared

    char c2 = str[10]; // Read middle character
    GTEST_ASSERT_EQ(c2, 'l');
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str()); // Buffers still shared

    char c3 = str[20]; // Read another character
    GTEST_ASSERT_EQ(c3, 'g'); // position 20 is 'g' in "string"
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str()); // Buffers still shared

    // Multiple reads should not trigger copy
    for (int i = 0; i < 5; i++) {
        char c = str[i];
        GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str()); // Buffers still shared
    }
}

TEST(exlib_qstring, operator_brackets_write_triggers_copy)
{
    // Test that writing with operator[] triggers copy when needed
    // Use a long string to avoid SSO
    exlib::string str("this_is_a_long_string_to_avoid_sso_optimization");
    exlib::string str_copy(str);

    // Verify buffers are shared initially
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Write operation SHOULD trigger copy
    str[0] = 'T'; // Modify first character
    GTEST_ASSERT_NE(str.c_str(), str_copy.c_str()); // Buffers now separate
    GTEST_ASSERT_EQ(str[0], 'T');
    GTEST_ASSERT_EQ(str_copy[0], 't'); // Original unchanged
}

TEST(exlib_qstring, operator_brackets_const_access)
{
    // Test const access (should use const operator[])
    const exlib::string const_str("test string longer than sso");

    // These should compile and work correctly
    char c1 = const_str[0];
    GTEST_ASSERT_EQ(c1, 't');

    char c2 = const_str[5];
    GTEST_ASSERT_EQ(c2, 's');

    char c3 = const_str[12]; // character 'l' in "longer"
    GTEST_ASSERT_EQ(c3, 'l');

    // The following should not compile (write to const):
    // const_str[0] = 'T';  // Compilation error - good!
}

TEST(exlib_qstring, operator_brackets_assignment_operations)
{
    // Test various assignment operations
    // Use a long string to avoid SSO
    exlib::string str("abcdef_long_string_for_testing");
    exlib::string str_copy(str);

    // Verify buffers are shared initially
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Direct assignment
    str[0] = 'A';
    GTEST_ASSERT_NE(str.c_str(), str_copy.c_str()); // Copy triggered
    GTEST_ASSERT_EQ(str[0], 'A');

    // Compound assignment operations
    str[1] += 1; // 'b' -> 'c'
    GTEST_ASSERT_EQ(str[1], 'c');

    str[2] -= 1; // 'c' -> 'b'
    GTEST_ASSERT_EQ(str[2], 'b');

    // Verify the string starts correctly
    GTEST_ASSERT_EQ(str[0], 'A');
    GTEST_ASSERT_EQ(str[1], 'c');
    GTEST_ASSERT_EQ(str[2], 'b');
}

TEST(exlib_qstring, operator_brackets_mixed_read_write)
{
    // Test mixed read and write operations
    // Use a long string to avoid SSO
    exlib::string str("hello_world_long_string_test");
    exlib::string str_copy(str);

    // Initial state - buffers shared
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Read operations don't trigger copy
    char original_first = str[0];
    char original_last = str[27]; // last character
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str()); // Still shared

    // First write triggers copy
    str[0] = 'H';
    GTEST_ASSERT_NE(str.c_str(), str_copy.c_str()); // Now separate

    // Subsequent operations on already-copied string
    char modified_first = str[0];
    GTEST_ASSERT_EQ(modified_first, 'H');

    str[27] = 'T';
    GTEST_ASSERT_EQ(str[27], 'T');

    // Verify original is unchanged
    GTEST_ASSERT_EQ(str_copy[0], original_first);
    GTEST_ASSERT_EQ(str_copy[27], original_last);
}

// ==================== CharProxy 和 operator[] 测试 ====================
// 测试 CharProxy 的读写分离机制，避免不必要的 COW 复制

TEST(exlib_qstring, operator_subscript_read_no_copy)
{
    // Use long string to avoid SSO (Small String Optimization)
    exlib::string str("this is a very long string to avoid SSO optimization");
    exlib::string str_copy = str;

    // Verify they share memory initially
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Read operations should not trigger copy - these use implicit conversion
    char c1 = str[0]; // direct read
    char c2 = str[1] + 1; // arithmetic read - implicit conversion handles it
    bool b1 = str[2] == 'i'; // comparison read - implicit conversion
    char c3 = str[3] & 0xFF; // bitwise read - implicit conversion

    // Verify still sharing after all read operations
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Verify read values
    GTEST_ASSERT_EQ(c1, 't');
    GTEST_ASSERT_EQ(c2, 'i'); // 'h' + 1 = 'i'
    GTEST_ASSERT_TRUE(b1);
    GTEST_ASSERT_EQ(c3, 's');
}

TEST(exlib_qstring, operator_subscript_write_triggers_copy)
{
    // Use long string to avoid SSO
    exlib::string str("this is a very long string to avoid SSO optimization");
    exlib::string str_copy = str;

    // Verify they share memory initially
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Write operation should trigger copy
    str[0] = 'T';

    // Verify they no longer share memory
    GTEST_ASSERT_NE(str.c_str(), str_copy.c_str());

    // Verify values
    GTEST_ASSERT_EQ(str[0], 'T');
    GTEST_ASSERT_EQ(str_copy[0], 't');
}

TEST(exlib_qstring, operator_subscript_assignment_operators)
{
    // Use long string to avoid SSO
    exlib::string str("this is a very long string to avoid SSO optimization");
    exlib::string str_copy = str;

    // Assignment operators should trigger copy
    str[1] += 1; // 'h' + 1 = 'i'
    GTEST_ASSERT_NE(str.c_str(), str_copy.c_str());
    GTEST_ASSERT_EQ(str[1], 'i');
    GTEST_ASSERT_EQ(str_copy[1], 'h');

    // Test other assignment operators
    str[2] -= 2; // 'i' - 2 = 'g'
    GTEST_ASSERT_EQ(str[2], 'g');

    // Test bitwise assignment
    str[3] &= 0x5F; // clear bit 5 of 's' (0x73) -> 'S' (0x53)
    GTEST_ASSERT_EQ(str[3], 'S');

    // Test multiplication assignment
    str[4] *= 1; // ' ' remains ' '
    GTEST_ASSERT_EQ(str[4], ' ');
}

TEST(exlib_qstring, operator_subscript_increment_decrement)
{
    exlib::string str("abc");
    exlib::string str_copy = str;

    // Pre-increment should trigger copy
    ++str[0]; // 'a' -> 'b'
    GTEST_ASSERT_NE(str.c_str(), str_copy.c_str());
    GTEST_ASSERT_EQ(str[0], 'b');
    GTEST_ASSERT_EQ(str_copy[0], 'a');

    // Post-increment
    char old_val = str[1]++; // 'b' -> 'c', returns 'b'
    GTEST_ASSERT_EQ(old_val, 'b');
    GTEST_ASSERT_EQ(str[1], 'c');

    // Decrement
    --str[2]; // 'c' -> 'b'
    GTEST_ASSERT_EQ(str[2], 'b');
}

TEST(exlib_qstring, operator_subscript_const_correctness)
{
    const exlib::string const_str("test");

    // Const subscript should only allow read
    char c = const_str[0];
    GTEST_ASSERT_EQ(c, 't');

    // This should not compile (write to const):
    // const_str[0] = 'T';  // Error: assignment to const
}

TEST(exlib_qstring, operator_subscript_mixed_operations)
{
    // Use long string to avoid SSO
    exlib::string str("this is a very long string to avoid SSO optimization");
    exlib::string str_copy = str;

    // Mix of read and write operations
    char c1 = str[0]; // read - no copy
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    str[1] = 'H'; // write - triggers copy
    GTEST_ASSERT_NE(str.c_str(), str_copy.c_str());

    char c2 = str[2]; // read after copy - no additional copy needed
    GTEST_ASSERT_EQ(c1, 't');
    GTEST_ASSERT_EQ(c2, 'i');
    GTEST_ASSERT_EQ(str[1], 'H');
    GTEST_ASSERT_EQ(str_copy[1], 'h');
}

// ==================== 新增综合读写场景测试 ====================
// 验证各种读操作确实没有引发复制

TEST(exlib_qstring, operator_subscript_extensive_read_scenarios)
{
    // Test extensive read scenarios to ensure no COW trigger
    // Use very long string to guarantee non-SSO behavior
    exlib::string str("comprehensive_read_test_string_with_sufficient_length_to_avoid_small_string_optimization_behavior");
    exlib::string str_copy = str;

    // Verify initial sharing
    const char* original_ptr = str.c_str();
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Scenario 1: Function parameter passing (implicit conversion)
    auto read_char = [](char c) -> bool { return c != '\0'; };
    bool result1 = read_char(str[0]); // Should not trigger copy
    bool result2 = read_char(str[10]); // Should not trigger copy
    bool result3 = read_char(str[50]); // Should not trigger copy

    GTEST_ASSERT_EQ(str.c_str(), original_ptr);
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Scenario 2: Array indexing simulation (reading multiple characters)
    char buffer[10];
    for (int i = 0; i < 10; i++) {
        buffer[i] = str[i]; // Each read should not trigger copy
    }

    GTEST_ASSERT_EQ(str.c_str(), original_ptr);
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Scenario 3: Comparison operations (implicit conversion)
    bool comp1 = (str[0] == 'c'); // Should not trigger copy
    bool comp2 = (str[5] != 'x'); // Should not trigger copy
    bool comp3 = (str[15] >= 'a'); // Should not trigger copy
    bool comp4 = (str[25] <= 'z'); // Should not trigger copy

    GTEST_ASSERT_EQ(str.c_str(), original_ptr);
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Scenario 4: Arithmetic operations (implicit conversion)
    int sum = str[0] + str[1] + str[2]; // Should not trigger copy
    int diff = str[10] - str[11]; // Should not trigger copy
    int product = str[20] * 2; // Should not trigger copy

    GTEST_ASSERT_EQ(str.c_str(), original_ptr);
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Scenario 5: Bitwise operations (implicit conversion)
    char masked = str[30] & 0x7F; // Should not trigger copy
    char shifted = str[35] >> 1; // Should not trigger copy
    char xored = str[40] ^ 0xFF; // Should not trigger copy

    GTEST_ASSERT_EQ(str.c_str(), original_ptr);
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Scenario 6: Conditional expressions
    char conditional = (str[45] > 'n') ? str[46] : str[47]; // Should not trigger copy

    GTEST_ASSERT_EQ(str.c_str(), original_ptr);
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Verify results are reasonable
    GTEST_ASSERT_EQ(result1, true);
    GTEST_ASSERT_EQ(result2, true);
    GTEST_ASSERT_EQ(result3, true);
    GTEST_ASSERT_EQ(comp1, true); // 'c' == 'c'
    GTEST_ASSERT_EQ(comp2, true); // 'o' != 'x'
}

TEST(exlib_qstring, operator_subscript_complex_read_expressions)
{
    // Test complex read expressions with multiple CharProxy instances
    exlib::string str("complex_expression_testing_string_with_adequate_length_for_cow_behavior_verification");
    exlib::string str_copy = str;

    const char* original_ptr = str.c_str();
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Complex expressions involving multiple reads
    bool expr1 = (str[0] == str[10]) && (str[5] != str[15]); // Multiple reads in boolean expression
    char expr2 = str[20] > str[25] ? str[30] : str[35]; // Conditional with multiple reads
    int expr3 = (str[40] - 'a') + (str[45] - 'a') + (str[50] - 'a'); // Arithmetic with multiple reads

    // All reads should not trigger copy
    GTEST_ASSERT_EQ(str.c_str(), original_ptr);
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Nested expressions
    bool complex_condition = ((str[0] >= 'a' && str[0] <= 'z') && (str[10] >= 'a' && str[10] <= 'z') && (str[20] == str[21] || str[20] != str[22]));

    GTEST_ASSERT_EQ(str.c_str(), original_ptr);
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Function calls with read results
    auto process_chars = [](char a, char b, char c) -> bool {
        return (a != b) && (b != c) && (a != c);
    };

    bool func_result = process_chars(str[60], str[65], str[70]);

    GTEST_ASSERT_EQ(str.c_str(), original_ptr);
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Verify expressions make sense
    GTEST_ASSERT_EQ(complex_condition, true); // All should be lowercase letters
}

TEST(exlib_qstring, operator_subscript_read_vs_write_clear_distinction)
{
    // Test that clearly distinguishes read from write operations
    exlib::string str("read_write_distinction_test_string_long_enough_for_proper_cow_testing_behavior");
    exlib::string str_copy = str;

    const char* original_ptr = str.c_str();
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // === READ OPERATIONS (should NOT trigger copy) ===

    // 1. Direct assignment to variable (implicit conversion)
    char c1 = str[0];
    char c2 = str[10];
    char c3 = str[20];

    GTEST_ASSERT_EQ(str.c_str(), original_ptr);
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // 2. Use in expressions (implicit conversion)
    if (str[30] > 'a') {
        // This read should not trigger copy
        char temp = str[31];
    }

    GTEST_ASSERT_EQ(str.c_str(), original_ptr);
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // 3. Function parameters (implicit conversion)
    auto test_char = [](char ch) { return ch != '\0'; };
    bool valid1 = test_char(str[40]);
    bool valid2 = test_char(str[50]);

    GTEST_ASSERT_EQ(str.c_str(), original_ptr);
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // 4. Switch statement (implicit conversion)
    switch (str[60]) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        // vowel
        break;
    default:
        // consonant or other
        break;
    }

    GTEST_ASSERT_EQ(str.c_str(), original_ptr);
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // === FIRST WRITE OPERATION (should trigger copy) ===
    str[0] = 'R'; // This should finally trigger copy

    // Verify copy was triggered
    GTEST_ASSERT_NE(str.c_str(), original_ptr);
    GTEST_ASSERT_NE(str.c_str(), str_copy.c_str());
    GTEST_ASSERT_EQ(str_copy.c_str(), original_ptr); // Copy still has original

    // Verify values
    GTEST_ASSERT_EQ(str[0], 'R');
    GTEST_ASSERT_EQ(str_copy[0], 'r'); // Original unchanged

    // === POST-COPY OPERATIONS ===

    // After copy, reads should not cause additional copies
    const char* post_copy_ptr = str.c_str();
    char post_c1 = str[1];
    char post_c2 = str[2];

    GTEST_ASSERT_EQ(str.c_str(), post_copy_ptr); // No additional copy

    // Additional writes should not cause more copies
    str[1] = 'E';
    str[2] = 'A';

    GTEST_ASSERT_EQ(str.c_str(), post_copy_ptr); // Still same buffer
}

TEST(exlib_qstring, operator_subscript_read_only_stress_test)
{
    // Stress test with many read operations to ensure no accidental copies
    exlib::string str("stress_testing_string_for_read_only_operations_with_cow_verification_purposes");
    exlib::string str_copy = str;

    const char* original_ptr = str.c_str();
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Perform 1000 read operations
    char sum = 0;
    for (int i = 0; i < 75; i++) { // 75 characters available
        sum += str[i]; // Each read should not trigger copy

        // Verify no copy after each read
        GTEST_ASSERT_EQ(str.c_str(), original_ptr);
        GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());
    }

    // Additional complex read patterns
    for (int i = 0; i < 25; i++) {
        char c1 = str[i];
        char c2 = str[i + 25];
        char c3 = str[i + 50];

        // Use the characters in various ways
        bool test1 = (c1 != c2);
        bool test2 = (c2 != c3);
        bool test3 = (c1 == c3);

        // Verify still no copy
        GTEST_ASSERT_EQ(str.c_str(), original_ptr);
        GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());
    }

    // Pattern matching reads
    int vowel_count = 0;
    for (size_t i = 0; i < str.length(); i++) {
        char c = str[i]; // Read operation
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowel_count++;
        }

        // Verify still no copy after each iteration
        GTEST_ASSERT_EQ(str.c_str(), original_ptr);
        GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());
    }

    // Final verification - should have done hundreds of reads without any copy
    GTEST_ASSERT_EQ(str.c_str(), original_ptr);
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());
    GTEST_ASSERT_GT(vowel_count, 0); // Should have found some vowels
}

TEST(exlib_qstring, operator_subscript_mixed_scenarios_cow_timing)
{
    // Test various mixed scenarios to verify precise COW timing
    exlib::string str("mixed_scenarios_testing_copy_on_write_timing_with_precise_verification_methods");

    // Scenario 1: Multiple copies, reads from all, write to one
    exlib::string copy1 = str;
    exlib::string copy2 = str;
    exlib::string copy3 = str;

    const char* shared_ptr = str.c_str();
    GTEST_ASSERT_EQ(copy1.c_str(), shared_ptr);
    GTEST_ASSERT_EQ(copy2.c_str(), shared_ptr);
    GTEST_ASSERT_EQ(copy3.c_str(), shared_ptr);

    // Read from all copies - should not trigger any copy
    char c1 = str[0];
    char c2 = copy1[10];
    char c3 = copy2[20];
    char c4 = copy3[30];

    // All should still share
    GTEST_ASSERT_EQ(str.c_str(), shared_ptr);
    GTEST_ASSERT_EQ(copy1.c_str(), shared_ptr);
    GTEST_ASSERT_EQ(copy2.c_str(), shared_ptr);
    GTEST_ASSERT_EQ(copy3.c_str(), shared_ptr);

    // Write to copy1 - should only trigger copy for copy1
    copy1[0] = 'M';

    GTEST_ASSERT_NE(copy1.c_str(), shared_ptr); // copy1 now has its own buffer
    GTEST_ASSERT_EQ(str.c_str(), shared_ptr); // others still shared
    GTEST_ASSERT_EQ(copy2.c_str(), shared_ptr);
    GTEST_ASSERT_EQ(copy3.c_str(), shared_ptr);

    // Read from copy1 after its copy - should not trigger additional copy
    const char* copy1_ptr = copy1.c_str();
    char copy1_c = copy1[5];
    GTEST_ASSERT_EQ(copy1.c_str(), copy1_ptr); // No additional copy

    // Write to copy2 - should trigger copy for copy2 only
    copy2[1] = 'I';

    GTEST_ASSERT_NE(copy1.c_str(), shared_ptr); // copy1 still separate
    GTEST_ASSERT_NE(copy2.c_str(), shared_ptr); // copy2 now separate
    GTEST_ASSERT_EQ(str.c_str(), shared_ptr); // str and copy3 still shared
    GTEST_ASSERT_EQ(copy3.c_str(), shared_ptr);

    // Verify values are correct
    GTEST_ASSERT_EQ(copy1[0], 'M');
    GTEST_ASSERT_EQ(copy2[1], 'I');
    GTEST_ASSERT_EQ(str[0], 'm'); // Original unchanged
    GTEST_ASSERT_EQ(copy3[0], 'm'); // Original unchanged

    // Final read operations should not trigger any copies
    char final_reads[4] = {
        str[40], // Read from still-shared str
        copy1[41], // Read from copied copy1
        copy2[42], // Read from copied copy2
        copy3[43] // Read from still-shared copy3
    };

    // Buffer pointers should remain unchanged
    GTEST_ASSERT_EQ(copy1.c_str(), copy1_ptr);
    GTEST_ASSERT_EQ(str.c_str(), shared_ptr);
    GTEST_ASSERT_EQ(copy3.c_str(), shared_ptr);
}

// ==================== 特殊场景测试 ====================

TEST(exlib_qstring, operator_subscript_const_vs_nonconst_behavior)
{
    // Test difference between const and non-const operator[]
    exlib::string str("const_nonconst_behavior_test_string_with_adequate_length");
    exlib::string str_copy = str;

    const char* original_ptr = str.c_str();
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // const version should directly return char (no proxy)
    const exlib::string& const_ref = str;
    char c1 = const_ref[0]; // Uses const operator[], returns char directly
    char c2 = const_ref[10]; // Uses const operator[], returns char directly

    // Should not trigger copy (const access)
    GTEST_ASSERT_EQ(str.c_str(), original_ptr);
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // non-const version returns proxy, but read-only use should not trigger copy
    char c3 = str[20]; // Uses non-const operator[], returns CharProxy, implicit conversion
    char c4 = str[30]; // Uses non-const operator[], returns CharProxy, implicit conversion

    // Should still not trigger copy (read-only use of proxy)
    GTEST_ASSERT_EQ(str.c_str(), original_ptr);
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Write through proxy should trigger copy
    str[0] = 'C'; // Uses non-const operator[], returns CharProxy, assignment triggers copy

    GTEST_ASSERT_NE(str.c_str(), original_ptr);
    GTEST_ASSERT_NE(str.c_str(), str_copy.c_str());

    // Verify values - let's check what the actual characters are
    // String: "const_nonconst_behavior_test_string_with_sufficient_length"
    // Position: 0123456789012345678901234567890123456789
    GTEST_ASSERT_EQ(c1, 'c'); // Position 0
    GTEST_ASSERT_EQ(c2, 'o'); // Position 10 is 'o'
    GTEST_ASSERT_EQ(c3, 'i'); // Position 20 is 'i' in "behavior"
    GTEST_ASSERT_EQ(c4, 't'); // Position 30 is 't' in "test"
    GTEST_ASSERT_EQ(str[0], 'C');
    GTEST_ASSERT_EQ(str_copy[0], 'c');
}

TEST(exlib_qstring, operator_subscript_proxy_lifetime_and_behavior)
{
    // Test CharProxy object lifetime and behavior
    exlib::string str("proxy_lifetime_test_string_with_adequate_length_for_testing");
    exlib::string str_copy = str;

    const char* original_ptr = str.c_str();
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Create proxy objects explicitly
    auto proxy1 = str[0]; // CharProxy object
    auto proxy2 = str[10]; // CharProxy object

    // Reading from proxy should not trigger copy
    char c1 = proxy1; // Implicit conversion to char
    char c2 = proxy2; // Implicit conversion to char

    GTEST_ASSERT_EQ(str.c_str(), original_ptr);
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Use proxy in expressions (should use implicit conversion)
    bool test1 = (proxy1 == 'p');
    bool test2 = (proxy2 != 'x');
    int sum = proxy1 + proxy2;

    GTEST_ASSERT_EQ(str.c_str(), original_ptr);
    GTEST_ASSERT_EQ(str.c_str(), str_copy.c_str());

    // Assignment to proxy should trigger copy
    proxy1 = 'P'; // This should trigger copy

    GTEST_ASSERT_NE(str.c_str(), original_ptr);
    GTEST_ASSERT_NE(str.c_str(), str_copy.c_str());

    // After copy, proxy2 should still work (refers to same string object)
    proxy2 = 'R'; // Should not trigger additional copy

    const char* post_copy_ptr = str.c_str();
    char c3 = proxy1; // Should not trigger additional copy
    char c4 = proxy2; // Should not trigger additional copy

    GTEST_ASSERT_EQ(str.c_str(), post_copy_ptr);

    // Verify final state
    GTEST_ASSERT_EQ(str[0], 'P');
    GTEST_ASSERT_EQ(str[10], 'R');
    GTEST_ASSERT_EQ(str_copy[0], 'p'); // Original unchanged
    GTEST_ASSERT_EQ(str_copy[10], 't'); // Original unchanged - position 10 is 't'
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

TEST(exlib_qstring, auto_deduction_charproxy_test)
{
    // Test that auto deduces to char, not CharProxy
    exlib::string str = "Hello World";

    // Although auto may deduce to CharProxy, it should behave like char
    auto ch = str[5]; // Position 5 is a space ' '

    // Test that it works like a char value through implicit conversion
    GTEST_ASSERT_EQ(ch, ' '); // Should convert to char for comparison

    // Test that it can be used as a normal char through implicit conversion
    char normalized = ch; // Should work through operator T()
    GTEST_ASSERT_EQ(normalized, ' ');

    // Test in expressions - should work through implicit conversion
    auto sum = str[1] + str[2]; // 'e' + 'l' = 101 + 108 = 209
    GTEST_ASSERT_EQ(sum, 209);

    printf("CharProxy behavior test passed - behaves like char through implicit conversion\n");

    // Important: auto deduces to CharProxy, not char!
    // This demonstrates that auto ch = str[0] creates a CharProxy object
    auto ch_auto = str[0]; // This is CharProxy, not char!
    GTEST_ASSERT_EQ(typeid(ch_auto), typeid(exlib::basic_string<char>::CharProxy));

    // To get char type, use explicit conversion:
    char ch_char = str[0]; // This is char
    GTEST_ASSERT_EQ(typeid(ch_char), typeid(char));

    // Test write operations still work
    str[5] = 'X';
    GTEST_ASSERT_EQ(str[5], 'X');
    GTEST_ASSERT_EQ(str.c_str()[5], 'X');

    // Test assignment operator returns char& (not CharProxy&)
    auto& ref0 = (str[5] = 'A'); // Should return char&
    GTEST_ASSERT_EQ(typeid(ref0), typeid(char&));
    GTEST_ASSERT_EQ(ref0, 'A');
    GTEST_ASSERT_EQ(str[5], 'A');

    // Test compound assignment operators return char& (not CharProxy&)
    auto& ref1 = (str[5] += 1); // Should return char&
    GTEST_ASSERT_EQ(typeid(ref1), typeid(char&));
    GTEST_ASSERT_EQ(ref1, 'B'); // 'A' + 1 = 'B'
    GTEST_ASSERT_EQ(str[5], 'B');

    // Test that returned reference can be used for further operations
    auto& ref2 = (str[5] -= 1);
    GTEST_ASSERT_EQ(ref2, 'A');
    GTEST_ASSERT_EQ(str[5], 'A');

    // Test increment operators
    auto& ref3 = ++str[5]; // Pre-increment returns char&
    GTEST_ASSERT_EQ(typeid(ref3), typeid(char&));
    GTEST_ASSERT_EQ(ref3, 'B');
    GTEST_ASSERT_EQ(str[5], 'B');

    auto old_val = str[5]++; // Post-increment returns char (value)
    GTEST_ASSERT_EQ(typeid(old_val), typeid(char));
    GTEST_ASSERT_EQ(old_val, 'B');
    GTEST_ASSERT_EQ(str[5], 'C');

    // Test chaining assignments - all should return char&
    auto& ref4 = (str[1] = str[2] = str[3] = 'Z');
    GTEST_ASSERT_EQ(typeid(ref4), typeid(char&));
    GTEST_ASSERT_EQ(ref4, 'Z');
    GTEST_ASSERT_EQ(str[1], 'Z');
    GTEST_ASSERT_EQ(str[2], 'Z');
    GTEST_ASSERT_EQ(str[3], 'Z');
}

TEST(exlib_qstring, auto_charproxy_behavior_analysis)
{
    // Detailed analysis of what happens with auto ch = str[5]
    exlib::string str = "Hello World";

    printf("\n=== CharProxy Behavior Analysis ===\n");

    // When we do auto ch = str[5], what exactly happens?
    auto ch = str[5]; // This creates a CharProxy object

    // Print type information
    printf("Type of ch: %s\n", typeid(ch).name());
    printf("Type of char: %s\n", typeid(char).name());
    printf("Are they the same type? %s\n", (typeid(ch) == typeid(char)) ? "YES" : "NO");

    // Test the actual value
    printf("Value of ch when compared to ' ': %s\n", (ch == ' ') ? "EQUAL" : "NOT EQUAL");
    printf("Value of ch when converted to char: '%c'\n", static_cast<char>(ch));

    // Now let's test if the content changes when the original string changes
    printf("\n--- Testing if CharProxy content changes ---\n");

    // Original value
    char original_value = ch; // Implicit conversion to char
    printf("Original value of ch: '%c'\n", original_value);

    // Modify the string at the same position
    str[5] = 'X';
    printf("Changed str[5] to 'X'\n");

    // Check if ch reflects the change
    char new_value = ch; // Implicit conversion to char
    printf("Value of ch after string modification: '%c'\n", new_value);
    printf("Did ch content change? %s\n", (new_value != original_value) ? "YES - IT CHANGED!" : "NO - Same value");

    // This demonstrates the core issue: CharProxy holds a reference to the string
    // and index, so its "value" changes when the underlying string changes

    printf("\n--- Testing with a copy of the string ---\n");
    exlib::string str2 = str; // Copy the string
    auto ch2 = str2[5]; // Get CharProxy to the copy

    printf("str2[5] = '%c'\n", static_cast<char>(ch2));

    // Modify original string
    str[5] = 'Z';
    printf("Changed original str[5] to 'Z'\n");
    printf("str[5] = '%c'\n", static_cast<char>(str[5]));
    printf("str2[5] (via ch2) = '%c'\n", static_cast<char>(ch2));
    printf("ch (from original string) = '%c'\n", static_cast<char>(ch));

    printf("=== End Analysis ===\n\n");
}

// ==================== STL兼容性测试 ====================

TEST(exlib_qstring, stl_compatibility_type_definitions)
{
    // 测试STL标准类型定义 (使用C++11兼容语法)
    static_assert(std::is_same<exlib::string::value_type, char>::value, "value_type should be char");
    static_assert(std::is_same<exlib::string::size_type, size_t>::value, "size_type should be size_t");
    static_assert(std::is_same<exlib::string::difference_type, ptrdiff_t>::value, "difference_type should be ptrdiff_t");
    static_assert(std::is_same<exlib::string::reference, char&>::value, "reference should be char&");
    static_assert(std::is_same<exlib::string::const_reference, const char&>::value, "const_reference should be const char&");
    static_assert(std::is_same<exlib::string::pointer, char*>::value, "pointer should be char*");
    static_assert(std::is_same<exlib::string::const_pointer, const char*>::value, "const_pointer should be const char*");
    static_assert(std::is_same<exlib::string::iterator, char*>::value, "iterator should be char*");
    static_assert(std::is_same<exlib::string::const_iterator, const char*>::value, "const_iterator should be const char*");
}

TEST(exlib_qstring, stl_compatibility_iterators)
{
    exlib::string exlib_str("Hello, World!");
    std::string std_str("Hello, World!");

    // 测试迭代器接口
    GTEST_ASSERT_EQ(exlib_str.end() - exlib_str.begin(), std_str.end() - std_str.begin());
    GTEST_ASSERT_EQ(*exlib_str.begin(), *std_str.begin());
    GTEST_ASSERT_EQ(*(exlib_str.end() - 1), *(std_str.end() - 1));

    // 测试const迭代器
    const exlib::string& const_exlib = exlib_str;
    const std::string& const_std = std_str;
    GTEST_ASSERT_EQ(*const_exlib.begin(), *const_std.begin());
    GTEST_ASSERT_EQ(*const_exlib.cbegin(), *const_std.cbegin());

    // 测试反向迭代器
    GTEST_ASSERT_EQ(*exlib_str.rbegin(), *std_str.rbegin());
    GTEST_ASSERT_EQ(*exlib_str.crbegin(), *std_str.crbegin());
}

TEST(exlib_qstring, stl_compatibility_range_for_loop)
{
    exlib::string exlib_str("ABC");
    std::string std_str("ABC");

    // 测试范围for循环
    std::string exlib_result, std_result;

    for (char c : exlib_str) {
        exlib_result += c;
    }

    for (char c : std_str) {
        std_result += c;
    }

    GTEST_ASSERT_EQ(exlib_result, std_result);
    GTEST_ASSERT_EQ(exlib_result, "ABC");
}

TEST(exlib_qstring, stl_compatibility_capacity_methods)
{
    exlib::string exlib_str;
    std::string std_str;

    // 测试capacity相关方法
    GTEST_ASSERT_EQ(exlib_str.empty(), std_str.empty());
    GTEST_ASSERT_EQ(exlib_str.length(), std_str.length());
    GTEST_ASSERT_EQ(exlib_str.size(), std_str.size());

    exlib_str = "test";
    std_str = "test";
    GTEST_ASSERT_EQ(exlib_str.empty(), std_str.empty());
    GTEST_ASSERT_EQ(exlib_str.length(), std_str.length());

    // 测试reserve
    size_t old_capacity = exlib_str.capacity();
    exlib_str.reserve(100);
    GTEST_ASSERT_GE(exlib_str.capacity(), 100);
    GTEST_ASSERT_GE(exlib_str.capacity(), old_capacity);
    GTEST_ASSERT_EQ(strcmp(exlib_str.c_str(), "test"), 0); // 内容不变

    // 测试max_size
    GTEST_ASSERT_GT(exlib_str.max_size(), 0);
}

TEST(exlib_qstring, stl_compatibility_element_access)
{
    exlib::string exlib_str("Hello");
    std::string std_str("Hello");

    // 测试at方法
    for (size_t i = 0; i < exlib_str.length(); ++i) {
        GTEST_ASSERT_EQ(exlib_str.at(i), std_str.at(i));
    }

    // 测试at方法边界检查
    EXPECT_THROW(exlib_str.at(100), std::out_of_range);
    EXPECT_THROW(std_str.at(100), std::out_of_range);

    // 测试front/back
    GTEST_ASSERT_EQ(exlib_str.front(), std_str.front());
    GTEST_ASSERT_EQ(exlib_str.back(), std_str.back());

    // 测试空字符串的front/back（仅测试exlib::string，std::string是未定义行为）
    exlib::string empty_exlib;
    EXPECT_THROW(empty_exlib.front(), std::out_of_range);
    EXPECT_THROW(empty_exlib.back(), std::out_of_range);
}

TEST(exlib_qstring, stl_compatibility_modifiers)
{
    exlib::string exlib_str;
    std::string std_str;

    // 测试push_back
    exlib_str.push_back('A');
    std_str.push_back('A');
    GTEST_ASSERT_EQ(exlib_str, std_str.c_str());

    exlib_str.push_back('B');
    std_str.push_back('B');
    GTEST_ASSERT_EQ(exlib_str, std_str.c_str());

    // 测试pop_back
    exlib_str.pop_back();
    std_str.pop_back();
    GTEST_ASSERT_EQ(exlib_str, std_str.c_str());

    // 测试空字符串的pop_back
    exlib::string empty_exlib;
    std::string empty_std;
    empty_exlib.pop_back(); // 应该安全
    // std::string的pop_back在空字符串上是未定义行为，所以不测试
    GTEST_ASSERT_TRUE(empty_exlib.empty());
}

TEST(exlib_qstring, stl_compatibility_erase_operations)
{
    // 测试erase(pos, len)
    exlib::string exlib_str("Hello, World!");
    std::string std_str("Hello, World!");

    exlib_str.erase(5, 2); // 删除", "
    std_str.erase(5, 2);
    GTEST_ASSERT_EQ(exlib_str, std_str.c_str());

    // 测试erase(pos) - 删除到末尾
    exlib_str.erase(5);
    std_str.erase(5);
    GTEST_ASSERT_EQ(exlib_str, std_str.c_str());

    // 测试erase边界情况
    EXPECT_THROW(exlib_str.erase(100), std::out_of_range);
    EXPECT_THROW(std_str.erase(100), std::out_of_range);
}

TEST(exlib_qstring, stl_compatibility_erase_iterators)
{
    exlib::string exlib_str("abcdef");
    std::string std_str("abcdef");

    // 测试erase(iterator)
    auto exlib_it = exlib_str.erase(exlib_str.begin() + 2); // 删除'c'
    auto std_it = std_str.erase(std_str.begin() + 2);

    GTEST_ASSERT_EQ(exlib_str, std_str.c_str());
    GTEST_ASSERT_EQ(*exlib_it, *std_it); // 返回的迭代器指向相同位置

    // 测试erase(first, last)
    exlib_it = exlib_str.erase(exlib_str.begin() + 1, exlib_str.begin() + 3); // 删除"bd"
    std_it = std_str.erase(std_str.begin() + 1, std_str.begin() + 3);

    GTEST_ASSERT_EQ(exlib_str, std_str.c_str());
    GTEST_ASSERT_EQ(*exlib_it, *std_it);
}

TEST(exlib_qstring, stl_compatibility_algorithms)
{
    exlib::string exlib_str("dcba");
    std::string std_str("dcba");

    // 测试std::sort
    std::sort(exlib_str.begin(), exlib_str.end());
    std::sort(std_str.begin(), std_str.end());
    GTEST_ASSERT_EQ(exlib_str, std_str.c_str());
    GTEST_ASSERT_EQ(strcmp(exlib_str.c_str(), "abcd"), 0);

    // 测试std::reverse
    std::reverse(exlib_str.begin(), exlib_str.end());
    std::reverse(std_str.begin(), std_str.end());
    GTEST_ASSERT_EQ(exlib_str, std_str.c_str());
    GTEST_ASSERT_EQ(strcmp(exlib_str.c_str(), "dcba"), 0);

    // 测试std::find
    auto exlib_found = std::find(exlib_str.begin(), exlib_str.end(), 'c');
    auto std_found = std::find(std_str.begin(), std_str.end(), 'c');
    GTEST_ASSERT_EQ(exlib_found - exlib_str.begin(), std_found - std_str.begin());

    // 测试std::count
    exlib_str = "aabbcc";
    std_str = "aabbcc";
    int exlib_count = std::count(exlib_str.begin(), exlib_str.end(), 'a');
    int std_count = std::count(std_str.begin(), std_str.end(), 'a');
    GTEST_ASSERT_EQ(exlib_count, std_count);
    GTEST_ASSERT_EQ(exlib_count, 2);
}

TEST(exlib_qstring, stl_compatibility_transform)
{
    exlib::string exlib_str("hello");
    std::string std_str("hello");

    // 测试std::transform (转换为大写)
    std::transform(exlib_str.begin(), exlib_str.end(), exlib_str.begin(),
        [](char c) { return std::toupper(c); });
    std::transform(std_str.begin(), std_str.end(), std_str.begin(),
        [](char c) { return std::toupper(c); });

    GTEST_ASSERT_EQ(exlib_str, std_str.c_str());
    GTEST_ASSERT_EQ(strcmp(exlib_str.c_str(), "HELLO"), 0);
}

TEST(exlib_qstring, stl_compatibility_copy_algorithm)
{
    exlib::string source("test");
    std::vector<char> exlib_dest(10);
    std::vector<char> std_dest(10);

    // 测试std::copy
    std::copy(source.begin(), source.end(), exlib_dest.begin());

    std::string std_source("test");
    std::copy(std_source.begin(), std_source.end(), std_dest.begin());

    GTEST_ASSERT_TRUE(std::equal(exlib_dest.begin(), exlib_dest.begin() + 4,
        std_dest.begin()));
}

TEST(exlib_qstring, stl_compatibility_find_algorithms)
{
    exlib::string exlib_str("The quick brown fox");
    std::string std_str("The quick brown fox");

    // 测试std::search
    exlib::string pattern("brown");
    std::string std_pattern("brown");

    auto exlib_found = std::search(exlib_str.begin(), exlib_str.end(),
        pattern.begin(), pattern.end());
    auto std_found = std::search(std_str.begin(), std_str.end(),
        std_pattern.begin(), std_pattern.end());

    GTEST_ASSERT_EQ(exlib_found - exlib_str.begin(), std_found - std_str.begin());

    // 测试std::find_if
    auto exlib_upper = std::find_if(exlib_str.begin(), exlib_str.end(),
        [](char c) { return std::isupper(c); });
    auto std_upper = std::find_if(std_str.begin(), std_str.end(),
        [](char c) { return std::isupper(c); });

    GTEST_ASSERT_EQ(exlib_upper - exlib_str.begin(), std_upper - std_str.begin());
}

TEST(exlib_qstring, stl_compatibility_numeric_algorithms)
{
    exlib::string exlib_str("abc");
    std::string std_str("abc");

    // 测试std::accumulate (计算字符ASCII值之和)
    int exlib_sum = std::accumulate(exlib_str.begin(), exlib_str.end(), 0);
    int std_sum = std::accumulate(std_str.begin(), std_str.end(), 0);

    GTEST_ASSERT_EQ(exlib_sum, std_sum);
    GTEST_ASSERT_EQ(exlib_sum, 'a' + 'b' + 'c');
}

TEST(exlib_qstring, stl_compatibility_partition)
{
    exlib::string exlib_str("aAbBcC");
    std::string std_str("aAbBcC");

    // 测试std::partition (将小写字母放在前面)
    auto exlib_partition = std::partition(exlib_str.begin(), exlib_str.end(),
        [](char c) { return std::islower(c); });
    auto std_partition = std::partition(std_str.begin(), std_str.end(),
        [](char c) { return std::islower(c); });

    // 验证分区点相同
    GTEST_ASSERT_EQ(exlib_partition - exlib_str.begin(),
        std_partition - std_str.begin());

    // 验证前半部分都是小写
    GTEST_ASSERT_TRUE(std::all_of(exlib_str.begin(), exlib_partition,
        [](char c) { return std::islower(c); }));
}

TEST(exlib_qstring, stl_compatibility_with_containers)
{
    // 测试与STL容器的兼容性
    std::vector<exlib::string> vec_exlib;
    std::vector<std::string> vec_std;

    vec_exlib.push_back("hello");
    vec_exlib.push_back("world");

    vec_std.push_back("hello");
    vec_std.push_back("world");

    // 测试std::sort
    std::sort(vec_exlib.begin(), vec_exlib.end());
    std::sort(vec_std.begin(), vec_std.end());

    GTEST_ASSERT_EQ(vec_exlib.size(), vec_std.size());
    for (size_t i = 0; i < vec_exlib.size(); ++i) {
        GTEST_ASSERT_EQ(vec_exlib[i], vec_std[i].c_str());
    }
}
