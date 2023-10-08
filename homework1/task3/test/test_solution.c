#include "unity.h"

#include "solution.h"


void test_find_partial_quotient1( void )
{
    int result = find_partial_quotient(10, 5);

    TEST_ASSERT_EQUAL_INT(result, 2);
}

void test_find_partial_quotient2( void )
{
    int result = find_partial_quotient(0, 5);

    TEST_ASSERT_EQUAL_INT(result, 0);
}

void test_find_partial_quotient3( void )
{
    int result = find_partial_quotient(-16, 5);

    TEST_ASSERT_EQUAL_INT(result, -3);
}

void test_find_partial_quotient4( void )
{
    int result = find_partial_quotient(16, -5);

    TEST_ASSERT_EQUAL_INT(result, -3);
}

void test_find_partial_quotient5( void )
{
    int result = find_partial_quotient(-16, -5);

    TEST_ASSERT_EQUAL_INT(result, 3);
}