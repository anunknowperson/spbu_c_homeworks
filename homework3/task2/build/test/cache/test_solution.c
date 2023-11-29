#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"




void test_compareInt(void) {

    int a = 5, b = 10, c = 5;



    UnityAssertGreaterOrLessOrEqualNumber((UNITY_INT)((0)), (UNITY_INT)((compareInt(&a, &b))), UNITY_SMALLER_THAN, (

   ((void *)0)

   ), (UNITY_UINT)(8), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((compareInt(&a, &c))), (

   ((void *)0)

   ), (UNITY_UINT)(9), UNITY_DISPLAY_STYLE_INT);

    UnityAssertGreaterOrLessOrEqualNumber((UNITY_INT)((0)), (UNITY_INT)((compareInt(&b, &a))), UNITY_GREATER_THAN, (

   ((void *)0)

   ), (UNITY_UINT)(10), UNITY_DISPLAY_STYLE_INT);

}



void test_binarySearch(void) {

    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(arr[0]);



    do {if ((binarySearch(arr, 0, n - 1, 3))) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(17)));}} while(0);

    do {if (!(binarySearch(arr, 0, n - 1, 6))) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(18)));}} while(0);

    do {if ((binarySearch(arr, 0, n - 1, 1))) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(19)));}} while(0);

    do {if ((binarySearch(arr, 0, n - 1, 5))) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(20)));}} while(0);

}





void test_contains(void) {

    int arr1[] = {12, 34, 11, 9, 3};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {};

    int n2 = sizeof(arr2) / sizeof(arr2[0]);



    do {if ((contains(arr1, n1, 11))) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(30)));}} while(0);

    do {if (!(contains(arr1, n1, 7))) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(31)));}} while(0);

    do {if (!(contains(arr2, n2, 5))) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(32)));}} while(0);

}
