#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"






void test_find_partial_quotient1( void )

{

    int result = find_partial_quotient(10, 5);



    UnityAssertEqualNumber((UNITY_INT)((result)), (UNITY_INT)((2)), (

   ((void *)0)

   ), (UNITY_UINT)(10), UNITY_DISPLAY_STYLE_INT);

}



void test_find_partial_quotient2( void )

{

    int result = find_partial_quotient(0, 5);



    UnityAssertEqualNumber((UNITY_INT)((result)), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(17), UNITY_DISPLAY_STYLE_INT);

}



void test_find_partial_quotient3( void )

{

    int result = find_partial_quotient(-16, 5);



    UnityAssertEqualNumber((UNITY_INT)((result)), (UNITY_INT)((-3)), (

   ((void *)0)

   ), (UNITY_UINT)(24), UNITY_DISPLAY_STYLE_INT);

}



void test_find_partial_quotient4( void )

{

    int result = find_partial_quotient(16, -5);



    UnityAssertEqualNumber((UNITY_INT)((result)), (UNITY_INT)((-3)), (

   ((void *)0)

   ), (UNITY_UINT)(31), UNITY_DISPLAY_STYLE_INT);

}



void test_find_partial_quotient5( void )

{

    int result = find_partial_quotient(-16, -5);



    UnityAssertEqualNumber((UNITY_INT)((result)), (UNITY_INT)((3)), (

   ((void *)0)

   ), (UNITY_UINT)(38), UNITY_DISPLAY_STYLE_INT);

}
