#include "unity.h"

#include "solution.h"


void test_pow_linear( void )
{
    TEST_ASSERT_EQUAL_INT(pow_linear(1, 2), 1);
    TEST_ASSERT_EQUAL_INT(pow_linear(2, 3), 8);
    TEST_ASSERT_EQUAL_INT(pow_linear(3, 2), 9);
}

void test_pow_log( void )
{
    TEST_ASSERT_EQUAL_INT(pow_log(1, 2), 1);
    TEST_ASSERT_EQUAL_INT(pow_log(2, 3), 8);
    TEST_ASSERT_EQUAL_INT(pow_log(3, 2), 9);
}