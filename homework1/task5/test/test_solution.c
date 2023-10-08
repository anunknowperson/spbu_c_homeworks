#include "unity.h"

#include "solution.h"



void test_check_brackets( void )
{
    int result = check_brackets("()");

    TEST_ASSERT_EQUAL_INT(1, result);

    result = check_brackets(")(");

    TEST_ASSERT_EQUAL_INT(0, result);

    result = check_brackets("((()))");

    TEST_ASSERT_EQUAL_INT(1, result);

    result = check_brackets("((())");

    TEST_ASSERT_EQUAL_INT(0, result);
    
}