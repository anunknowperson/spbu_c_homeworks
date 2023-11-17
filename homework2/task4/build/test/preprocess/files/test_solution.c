#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"




void test_swap(void)

{

    int a = 1, b = 2;



    swap(&a, &b);



    UnityAssertEqualNumber((UNITY_INT)((a)), (UNITY_INT)((2)), (

   ((void *)0)

   ), (UNITY_UINT)(11), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((b)), (UNITY_INT)((1)), (

   ((void *)0)

   ), (UNITY_UINT)(12), UNITY_DISPLAY_STYLE_INT);

}



void test_rearrange_array(void)

{

    int array[] = {5, 1, 8, 3, 7, 4, 6, 2};

    int size = sizeof(array) / sizeof(array[0]);

    int pivot = array[0];



    rearrangeArray(&array[0], size);



    int founded = 0;



    for (int i = 1; i < size; i++) {

        if (array[i] >= pivot) {

            founded = 1;

        }



        if (founded) {

            do {if ((array[i] >= pivot)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(31)));}} while(0);

        }

    }

}
