#include "unity.h"

#include "solution.h"


void test_swap( void )
{
    int a = 1, b = 2;

    swap(&a, &b);

    TEST_ASSERT_EQUAL_INT(a, 2);
    TEST_ASSERT_EQUAL_INT(b, 1);
}

void test_swap_array_slice( void )
{
    int* arr = malloc(3 * sizeof(int));
    
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;


    swap_array_slice(arr, 0, 2);

    TEST_ASSERT_EQUAL_INT(arr[0], 2);
    TEST_ASSERT_EQUAL_INT(arr[1], 1);
    TEST_ASSERT_EQUAL_INT(arr[2], 3);

    free(arr);
}

void test_merge_arrays( void )
{
    int* arr1 = malloc(3 * sizeof(int));
    
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;

    int* arr2 = malloc(3 * sizeof(int));
    
    arr2[0] = 4;
    arr2[1] = 5;
    arr2[2] = 6;

    int* result = merge_arrays(arr1, 3, arr2, 3);


    TEST_ASSERT_EQUAL_INT(result[0], 1);
    TEST_ASSERT_EQUAL_INT(result[1], 2);
    TEST_ASSERT_EQUAL_INT(result[2], 3);
    TEST_ASSERT_EQUAL_INT(result[3], 4);
    TEST_ASSERT_EQUAL_INT(result[4], 5);
    TEST_ASSERT_EQUAL_INT(result[5], 6);

    free(arr1);
    free(arr2);
    free(result);
}