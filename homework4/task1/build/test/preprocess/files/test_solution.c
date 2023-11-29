#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"




void test_toBinary(void) {

    char binary[33];



    toBinary(5, binary);

    UnityAssertEqualString((const char*)(("00000000000000000000000000000101")), (const char*)((binary)), (

   ((void *)0)

   ), (UNITY_UINT)(9));



    toBinary(-5, binary);

    UnityAssertEqualString((const char*)(("11111111111111111111111111111011")), (const char*)((binary)), (

   ((void *)0)

   ), (UNITY_UINT)(12));



    toBinary(0, binary);

    UnityAssertEqualString((const char*)(("00000000000000000000000000000000")), (const char*)((binary)), (

   ((void *)0)

   ), (UNITY_UINT)(15));

}





void test_addBinary(void) {

    char sum[33];



    addBinary("00000000000000000000000000000101", "00000000000000000000000000000101", sum);

    UnityAssertEqualString((const char*)(("00000000000000000000000000001010")), (const char*)((sum)), (

   ((void *)0)

   ), (UNITY_UINT)(23));



    addBinary("00000000000000000000000000000101", "11111111111111111111111111111011", sum);

    UnityAssertEqualString((const char*)(("00000000000000000000000000000000")), (const char*)((sum)), (

   ((void *)0)

   ), (UNITY_UINT)(26));

}



void test_toDecimal(void) {

    UnityAssertEqualNumber((UNITY_INT)((5)), (UNITY_INT)((toDecimal("00000000000000000000000000000101"))), (

   ((void *)0)

   ), (UNITY_UINT)(30), UNITY_DISPLAY_STYLE_INT);



    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((toDecimal("00000000000000000000000000000000"))), (

   ((void *)0)

   ), (UNITY_UINT)(32), UNITY_DISPLAY_STYLE_INT);

}
