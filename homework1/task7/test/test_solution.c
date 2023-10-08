#include "unity.h"

#include "solution.h"


void test_count_substrings1( void )
{
    char* string1 = "ab";
    char* string2 = "baabababab";

    int result = count_substrings(string1, string2);


    TEST_ASSERT_EQUAL_INT(result, 4);

    free(string1);
    free(string2);
}

void test_count_substrings2( void )
{
    char* string1 = "";
    char* string2 = "baabababab";

    int result = count_substrings(string1, string2);


    TEST_ASSERT_EQUAL_INT(result, 0);

    free(string1);
    free(string2);
}

void test_count_substrings3( void )
{
    char* string1 = "ab";
    char* string2 = "";

    int result = count_substrings(string1, string2);


    TEST_ASSERT_EQUAL_INT(result, 0);

    free(string1);
    free(string2);
}

void test_count_substrings4( void )
{
    char* string1 = "";
    char* string2 = "";

    int result = count_substrings(string1, string2);


    TEST_ASSERT_EQUAL_INT(result, 0);

    free(string1);
    free(string2);
}