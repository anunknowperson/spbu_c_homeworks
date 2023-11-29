#include "unity.h"

#include "solution.h"

void test_swap(void)
{
    int a = 1, b = 2;

    swap(&a, &b);

    TEST_ASSERT_EQUAL_INT(a, 2);
    TEST_ASSERT_EQUAL_INT(b, 1);
}

void test_quick_sort(void) {
    int array[5] = {5, 3, 4, 1, 2};
    quick_sort(&array[0], 0, 4);
    TEST_ASSERT_EQUAL_INT_ARRAY(&((int[]){1, 2, 3, 4, 5})[0], &array[0], 5);
}

void test_insertion_sort(void) {
    int array[5] = {5, 3, 4, 1, 2};
    insertion_sort(&array[0], 0, 4);
    TEST_ASSERT_EQUAL_INT_ARRAY(&((int[]){1, 2, 3, 4, 5})[0], &array[0], 5);
}