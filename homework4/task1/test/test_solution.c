#include "unity.h"

#include "solution.h"

void test_toBinary(void) {
    char binary[33];

    toBinary(5, binary);
    TEST_ASSERT_EQUAL_STRING("00000000000000000000000000000101", binary);

    toBinary(-5, binary);
    TEST_ASSERT_EQUAL_STRING("11111111111111111111111111111011", binary);

    toBinary(0, binary);
    TEST_ASSERT_EQUAL_STRING("00000000000000000000000000000000", binary);
}


void test_addBinary(void) {
    char sum[33];

    addBinary("00000000000000000000000000000101", "00000000000000000000000000000101", sum);
    TEST_ASSERT_EQUAL_STRING("00000000000000000000000000001010", sum); // 5 + 5 = 10

    addBinary("00000000000000000000000000000101", "11111111111111111111111111111011", sum);
    TEST_ASSERT_EQUAL_STRING("00000000000000000000000000000000", sum); // 5 + (-5) = 0
}

void test_toDecimal(void) {
    TEST_ASSERT_EQUAL(5, toDecimal("00000000000000000000000000000101"));
    
    TEST_ASSERT_EQUAL(0, toDecimal("00000000000000000000000000000000"));
}
