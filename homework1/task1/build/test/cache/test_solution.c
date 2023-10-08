#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"






void test_swap( void )

{

    int a = 1, b = 2;



    swap(&a, &b);



    UnityAssertEqualNumber((UNITY_INT)((a)), (UNITY_INT)((2)), (

   ((void *)0)

   ), (UNITY_UINT)(12), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((b)), (UNITY_INT)((1)), (

   ((void *)0)

   ), (UNITY_UINT)(13), UNITY_DISPLAY_STYLE_INT);

}
