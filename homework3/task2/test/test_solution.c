#include "unity.h"

#include "solution.h"

void test_compareInt(void) {
    int a = 5, b = 10, c = 5;

    TEST_ASSERT_LESS_THAN(0, compareInt(&a, &b)); 
    TEST_ASSERT_EQUAL(0, compareInt(&a, &c)); 
    TEST_ASSERT_GREATER_THAN(0, compareInt(&b, &a)); 
}

void test_binarySearch(void) {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    TEST_ASSERT_TRUE(binarySearch(arr, 0, n - 1, 3)); 
    TEST_ASSERT_FALSE(binarySearch(arr, 0, n - 1, 6));
    TEST_ASSERT_TRUE(binarySearch(arr, 0, n - 1, 1)); 
    TEST_ASSERT_TRUE(binarySearch(arr, 0, n - 1, 5)); 
}


void test_contains(void) {
    int arr1[] = {12, 34, 11, 9, 3};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    TEST_ASSERT_TRUE(contains(arr1, n1, 11));
    TEST_ASSERT_FALSE(contains(arr1, n1, 7));
    TEST_ASSERT_FALSE(contains(arr2, n2, 5));
}
