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



void test_swap_array_slice( void )

{

    int* arr = malloc(3 * sizeof(int));



    arr[0] = 1;

    arr[1] = 2;

    arr[2] = 3;





    swap_array_slice(arr, 0, 2);



    UnityAssertEqualNumber((UNITY_INT)((arr[0])), (UNITY_INT)((2)), (

   ((void *)0)

   ), (UNITY_UINT)(27), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[1])), (UNITY_INT)((1)), (

   ((void *)0)

   ), (UNITY_UINT)(28), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[2])), (UNITY_INT)((3)), (

   ((void *)0)

   ), (UNITY_UINT)(29), UNITY_DISPLAY_STYLE_INT);



    free(arr);

}



void test_merge_arrays( void )

{

    int* arr1 = malloc(3 * sizeof(int));



    arr1[0] = 1;

    arr1[1] = 2;

    arr1[2] = 3;



    int* arr2 = malloc(3 * sizeof(int));



    arr2[0] = 4;

    arr2[1] = 5;

    arr2[2] = 6;



    int* result = merge_arrays(arr1, 3, arr2, 3);





    UnityAssertEqualNumber((UNITY_INT)((result[0])), (UNITY_INT)((1)), (

   ((void *)0)

   ), (UNITY_UINT)(51), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((result[1])), (UNITY_INT)((2)), (

   ((void *)0)

   ), (UNITY_UINT)(52), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((result[2])), (UNITY_INT)((3)), (

   ((void *)0)

   ), (UNITY_UINT)(53), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((result[3])), (UNITY_INT)((4)), (

   ((void *)0)

   ), (UNITY_UINT)(54), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((result[4])), (UNITY_INT)((5)), (

   ((void *)0)

   ), (UNITY_UINT)(55), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((result[5])), (UNITY_INT)((6)), (

   ((void *)0)

   ), (UNITY_UINT)(56), UNITY_DISPLAY_STYLE_INT);



    free(arr1);

    free(arr2);

    free(result);

}
