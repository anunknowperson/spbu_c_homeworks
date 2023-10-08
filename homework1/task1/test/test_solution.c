#include "unity.h"

#include "solution.h"


void test_swap( void )
{
    int a = 1, b = 2;

    swap(&a, &b);

    TEST_ASSERT_EQUAL_INT(a, 2);
    TEST_ASSERT_EQUAL_INT(b, 1);
}