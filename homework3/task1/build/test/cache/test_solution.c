#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"




void test_swap(void)

{

    int a = 1, b = 2;



    swap(&a, &b);



    UnityAssertEqualNumber((UNITY_INT)((a)), (UNITY_INT)((2)), (

   ((void *)0)

   ), (UNITY_UINT)(11), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((b)), (UNITY_INT)((1)), (

   ((void *)0)

   ), (UNITY_UINT)(12), UNITY_DISPLAY_STYLE_INT);

}



void test_quick_sort(void) {

    int array[5] = {5, 3, 4, 1, 2};

    quick_sort(&array[0], 0, 4);

    UnityAssertEqualIntArray(( const void*)((&((int[]){1, 2, 3, 4, 5})[0])), ( const void*)((&array[0])), (UNITY_UINT32)((5)), (

   ((void *)0)

   ), (UNITY_UINT)(18), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);

}



void test_insertion_sort(void) {

    int array[5] = {5, 3, 4, 1, 2};

    insertion_sort(&array[0], 0, 4);

    UnityAssertEqualIntArray(( const void*)((&((int[]){1, 2, 3, 4, 5})[0])), ( const void*)((&array[0])), (UNITY_UINT32)((5)), (

   ((void *)0)

   ), (UNITY_UINT)(24), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);

}
