#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"






void test_count_zeros1( void )

{

    int numbers[] = {5, 0, -435352, 13231, 0};



    int result = count_zeros(numbers, 5);



    UnityAssertEqualNumber((UNITY_INT)((result)), (UNITY_INT)((2)), (

   ((void *)0)

   ), (UNITY_UINT)(12), UNITY_DISPLAY_STYLE_INT);

}



void test_count_zeros2( void )

{

    int numbers[] = {};



    int result = count_zeros(numbers, 0);



    UnityAssertEqualNumber((UNITY_INT)((result)), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(21), UNITY_DISPLAY_STYLE_INT);

}
