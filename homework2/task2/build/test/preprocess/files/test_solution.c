#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"






void test_pow_linear( void )

{

    UnityAssertEqualNumber((UNITY_INT)((pow_linear(1, 2))), (UNITY_INT)((1)), (

   ((void *)0)

   ), (UNITY_UINT)(8), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((pow_linear(2, 3))), (UNITY_INT)((8)), (

   ((void *)0)

   ), (UNITY_UINT)(9), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((pow_linear(3, 2))), (UNITY_INT)((9)), (

   ((void *)0)

   ), (UNITY_UINT)(10), UNITY_DISPLAY_STYLE_INT);

}



void test_pow_log( void )

{

    UnityAssertEqualNumber((UNITY_INT)((pow_log(1, 2))), (UNITY_INT)((1)), (

   ((void *)0)

   ), (UNITY_UINT)(15), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((pow_log(2, 3))), (UNITY_INT)((8)), (

   ((void *)0)

   ), (UNITY_UINT)(16), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((pow_log(3, 2))), (UNITY_INT)((9)), (

   ((void *)0)

   ), (UNITY_UINT)(17), UNITY_DISPLAY_STYLE_INT);

}
