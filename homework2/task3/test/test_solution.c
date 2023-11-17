#include "unity.h"

#include "solution.h"

void test_swap(void)
{
    int a = 1, b = 2;

    swap(&a, &b);

    TEST_ASSERT_EQUAL_INT(a, 2);
    TEST_ASSERT_EQUAL_INT(b, 1);
}

void test_bubble_sort(void)
{
    int array[7] = {213, 12, 434, 5, 0, 10};

    bubble_sort(&array[0], 6);

    TEST_ASSERT_EQUAL_INT(array[0], 0);
    TEST_ASSERT_EQUAL_INT(array[5], 434);
}

void test_counter_sort(void)
{
    int array[7] = {213, 12, 434, 5, 0, 10};

    counter_sort(&array[0], 6);

    TEST_ASSERT_EQUAL_INT(array[0], 0);
    TEST_ASSERT_EQUAL_INT(array[5], 434);
}