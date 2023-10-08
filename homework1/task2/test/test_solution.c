#include "unity.h"

#include "solution.h"


void test_count_zeros1( void )
{
    int numbers[] = {5, 0, -435352, 13231, 0};

    int result = count_zeros(numbers, 5);

    TEST_ASSERT_EQUAL_INT(result, 2);
}

void test_count_zeros2( void )
{
    int numbers[] = {};

    int result = count_zeros(numbers, 0);

    TEST_ASSERT_EQUAL_INT(result, 0);
}
