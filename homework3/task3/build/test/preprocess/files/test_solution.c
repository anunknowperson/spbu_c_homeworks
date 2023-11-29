#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"




void test_findMostFrequent_regularArray(void) {

    int arr[] = {1, 2, 3, 2, 4, 2, 5, 2};

    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findMostFrequent(arr, n);

    UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(9), UNITY_DISPLAY_STYLE_INT);

}



void test_findMostFrequent_allSame(void) {

    int arr[] = {3, 3, 3, 3, 3};

    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findMostFrequent(arr, n);

    UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(16), UNITY_DISPLAY_STYLE_INT);

}





void test_findMostFrequent_emptyArray(void) {

    int arr[] = {};

    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findMostFrequent(arr, n);

    UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(24), UNITY_DISPLAY_STYLE_INT);

}



void test_findMostFrequent_sameFrequency(void) {

    int arr[] = {1, 2, 1, 2};

    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findMostFrequent(arr, n);



    do {if ((result == 1 || result == 2)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(32)));}} while(0);

}
