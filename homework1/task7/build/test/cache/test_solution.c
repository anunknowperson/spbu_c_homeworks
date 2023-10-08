#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"






void test_count_substrings1( void )

{

    char* string1 = "ab";

    char* string2 = "baabababab";



    int result = count_substrings(string1, string2);





    UnityAssertEqualNumber((UNITY_INT)((result)), (UNITY_INT)((4)), (

   ((void *)0)

   ), (UNITY_UINT)(14), UNITY_DISPLAY_STYLE_INT);

}



void test_count_substrings2( void )

{

    char* string1 = "";

    char* string2 = "baabababab";



    int result = count_substrings(string1, string2);





    UnityAssertEqualNumber((UNITY_INT)((result)), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(25), UNITY_DISPLAY_STYLE_INT);

}



void test_count_substrings3( void )

{

    char* string1 = "ab";

    char* string2 = "";



    int result = count_substrings(string1, string2);





    UnityAssertEqualNumber((UNITY_INT)((result)), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(36), UNITY_DISPLAY_STYLE_INT);

}



void test_count_substrings4( void )

{

    char* string1 = "";

    char* string2 = "";



    int result = count_substrings(string1, string2);





    UnityAssertEqualNumber((UNITY_INT)((result)), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(47), UNITY_DISPLAY_STYLE_INT);

}
