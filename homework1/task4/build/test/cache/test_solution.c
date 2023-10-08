#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"








void test_answer( void )

{

    int* array = compute_array();

 int result = sum_array(array);



    UnityAssertEqualNumber((UNITY_INT)((55252)), (UNITY_INT)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(12), UNITY_DISPLAY_STYLE_INT);



}
