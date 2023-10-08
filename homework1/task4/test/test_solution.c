#include "unity.h"

#include "solution.h"



void test_answer( void )
{
    int* array = compute_array();
	int result = sum_array(array);

    TEST_ASSERT_EQUAL_INT(55252, result);
    
}