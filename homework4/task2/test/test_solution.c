#include "unity.h"

#include "solution.h"
#include "frequent.h"

void test_findMostFrequent_regularArray(void) {
    int arr[] = {1, 2, 3, 2, 4, 2, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findMostFrequent(arr, n);
    TEST_ASSERT_EQUAL(2, result);
}

void test_findMostFrequent_allSame(void) {
    int arr[] = {3, 3, 3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findMostFrequent(arr, n);
    TEST_ASSERT_EQUAL(3, result);
}


void test_findMostFrequent_emptyArray(void) {
    int arr[] = {};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findMostFrequent(arr, n);
    TEST_ASSERT_EQUAL(-1, result);
}

void test_findMostFrequent_sameFrequency(void) {
    int arr[] = {1, 2, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findMostFrequent(arr, n);
    
    TEST_ASSERT_TRUE(result == 1 || result == 2);
}
