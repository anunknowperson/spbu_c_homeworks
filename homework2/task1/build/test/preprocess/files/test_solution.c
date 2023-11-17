#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"






void test_fibonacci_recursive( void )

{

    UnityAssertEqualNumber((UNITY_INT)((fibonacci_recursive(1))), (UNITY_INT)((1)), (

   ((void *)0)

   ), (UNITY_UINT)(8), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((fibonacci_recursive(2))), (UNITY_INT)((1)), (

   ((void *)0)

   ), (UNITY_UINT)(9), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((fibonacci_recursive(3))), (UNITY_INT)((2)), (

   ((void *)0)

   ), (UNITY_UINT)(10), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((fibonacci_recursive(4))), (UNITY_INT)((3)), (

   ((void *)0)

   ), (UNITY_UINT)(11), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((fibonacci_recursive(5))), (UNITY_INT)((5)), (

   ((void *)0)

   ), (UNITY_UINT)(12), UNITY_DISPLAY_STYLE_INT);

}



void test_fibonacci_iterative( void )

{

    UnityAssertEqualNumber((UNITY_INT)((fibonacci_iterative(1))), (UNITY_INT)((1)), (

   ((void *)0)

   ), (UNITY_UINT)(17), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((fibonacci_iterative(2))), (UNITY_INT)((1)), (

   ((void *)0)

   ), (UNITY_UINT)(18), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((fibonacci_iterative(3))), (UNITY_INT)((2)), (

   ((void *)0)

   ), (UNITY_UINT)(19), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((fibonacci_iterative(4))), (UNITY_INT)((3)), (

   ((void *)0)

   ), (UNITY_UINT)(20), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((fibonacci_iterative(5))), (UNITY_INT)((5)), (

   ((void *)0)

   ), (UNITY_UINT)(21), UNITY_DISPLAY_STYLE_INT);

}
