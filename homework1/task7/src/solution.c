#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <conio.h>

int count_substrings(char *what, char *where)
{
	int result = 0;

	int what_length = strlen(what);
	int where_length = strlen(where);

	if (what_length == 0 || where_length == 0) {
		return 0;
	}

	for (int i = 0; i < where_length; i++)
	{
		int is_substring = 1;

		for (int j = 0; j < what_length; j++)
		{
			if (i + j >= where_length)
			{
				is_substring = 0;
				break;
			}

			if (where[i + j] != what[j])
			{
				is_substring = 0;
				break;
			}
		}

		if (is_substring)
		{
			result++;
		}
	}

	return result;
}

int run(int argc, char *argv[])
{

	char *S1 = malloc(100);
	char *S = malloc(100);

	printf("Enter first string:");

	scanf("%99s", S1);

	printf("Enter second string:");

	scanf("%99s", S);

	int result = count_substrings(S1, S);

	printf("Substrings count: %d", result);

	free(S1);
	free(S);

	printf("\nPress any key to exit...");

	getch();

	return 0;
}
