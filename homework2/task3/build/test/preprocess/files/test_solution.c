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



void test_bubble_sort(void)

{

    int array[7] = {213, 12, 434, 5, 0, 10};



    bubble_sort(&array[0], 6);



    UnityAssertEqualNumber((UNITY_INT)((array[0])), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(21), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((array[5])), (UNITY_INT)((434)), (

   ((void *)0)

   ), (UNITY_UINT)(22), UNITY_DISPLAY_STYLE_INT);

}



void test_counter_sort(void)

{

    int array[7] = {213, 12, 434, 5, 0, 10};



    counter_sort(&array[0], 6);



    UnityAssertEqualNumber((UNITY_INT)((array[0])), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(31), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((array[5])), (UNITY_INT)((434)), (

   ((void *)0)

   ), (UNITY_UINT)(32), UNITY_DISPLAY_STYLE_INT);

}
