#include "unity.h"

#include "solution.h"

void test_swap(void)
{
    int a = 1, b = 2;

    swap(&a, &b);

    TEST_ASSERT_EQUAL_INT(a, 2);
    TEST_ASSERT_EQUAL_INT(b, 1);
}

void test_rearrange_array(void)
{
    int array[] = {5, 1, 8, 3, 7, 4, 6, 2};
    int size = sizeof(array) / sizeof(array[0]);
    int pivot = array[0];

    rearrangeArray(&array[0], size);

    int founded = 0;

    for (int i = 1; i < size; i++) {
        if (array[i] >= pivot) {
            founded = 1;
        }

        if (founded) {
            TEST_ASSERT_TRUE(array[i] >= pivot);
        }
    }
}
