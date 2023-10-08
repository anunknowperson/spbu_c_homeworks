#include "unity.h"

#include "solution.h"



void test_is_prime1( void )
{
    int result1 = is_prime(-1);
    int result2 = is_prime(0);
    int result3 = is_prime(1);

    TEST_ASSERT_EQUAL_INT(result1, 0);
    TEST_ASSERT_EQUAL_INT(result2, 0);
    TEST_ASSERT_EQUAL_INT(result2, 0);
    
}

void test_is_prime2( void )
{
    int result = is_prime(2);

    TEST_ASSERT_EQUAL_INT(result, 1);
    
}

void test_is_prime3( void )
{
    int result1 = is_prime(4);
    int result2 = is_prime(6);

    TEST_ASSERT_EQUAL_INT(result1, 0);
    TEST_ASSERT_EQUAL_INT(result2, 0);
    
}


void test_is_prime4( void )
{
    int result1 = is_prime(4);
    int result2 = is_prime(6);

    TEST_ASSERT_EQUAL_INT(result1, 0);
    TEST_ASSERT_EQUAL_INT(result2, 0);
    
}
void test_is_prime5( void )
{
    int result1 = is_prime(55);
    int result2 = is_prime(79);

    TEST_ASSERT_EQUAL_INT(result1, 0);
    TEST_ASSERT_EQUAL_INT(result2, 1);
    
}