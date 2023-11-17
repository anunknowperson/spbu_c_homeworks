#include "unity.h"

#include "solution.h"


void test_fibonacci_recursive( void )
{
    TEST_ASSERT_EQUAL_INT(fibonacci_recursive(1), 1);
    TEST_ASSERT_EQUAL_INT(fibonacci_recursive(2), 1);
    TEST_ASSERT_EQUAL_INT(fibonacci_recursive(3), 2);
    TEST_ASSERT_EQUAL_INT(fibonacci_recursive(4), 3);
    TEST_ASSERT_EQUAL_INT(fibonacci_recursive(5), 5);
}

void test_fibonacci_iterative( void )
{
    TEST_ASSERT_EQUAL_INT(fibonacci_iterative(1), 1);
    TEST_ASSERT_EQUAL_INT(fibonacci_iterative(2), 1);
    TEST_ASSERT_EQUAL_INT(fibonacci_iterative(3), 2);
    TEST_ASSERT_EQUAL_INT(fibonacci_iterative(4), 3);
    TEST_ASSERT_EQUAL_INT(fibonacci_iterative(5), 5);
}