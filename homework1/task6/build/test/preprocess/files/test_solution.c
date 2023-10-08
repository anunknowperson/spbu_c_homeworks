#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"








void test_is_prime1( void )

{

    int result1 = is_prime(-1);

    int result2 = is_prime(0);

    int result3 = is_prime(1);



    UnityAssertEqualNumber((UNITY_INT)((result1)), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(13), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((result2)), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(14), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((result2)), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(15), UNITY_DISPLAY_STYLE_INT);



}



void test_is_prime2( void )

{

    int result = is_prime(2);



    UnityAssertEqualNumber((UNITY_INT)((result)), (UNITY_INT)((1)), (

   ((void *)0)

   ), (UNITY_UINT)(23), UNITY_DISPLAY_STYLE_INT);



}



void test_is_prime3( void )

{

    int result1 = is_prime(4);

    int result2 = is_prime(6);



    UnityAssertEqualNumber((UNITY_INT)((result1)), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(32), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((result2)), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(33), UNITY_DISPLAY_STYLE_INT);



}





void test_is_prime4( void )

{

    int result1 = is_prime(4);

    int result2 = is_prime(6);



    UnityAssertEqualNumber((UNITY_INT)((result1)), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(43), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((result2)), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(44), UNITY_DISPLAY_STYLE_INT);



}

void test_is_prime5( void )

{

    int result1 = is_prime(55);

    int result2 = is_prime(79);



    UnityAssertEqualNumber((UNITY_INT)((result1)), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(52), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((result2)), (UNITY_INT)((1)), (

   ((void *)0)

   ), (UNITY_UINT)(53), UNITY_DISPLAY_STYLE_INT);



}
