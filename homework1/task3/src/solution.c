#define SIGN(x) ((x > 0) - (x < 0))

#include <stdio.h>
#include <stdlib.h>

#include <conio.h>

#include <math.h>

int find_partial_quotient(int a, int b)
{
	if (a == 0)
	{
		return 0;
	}

	int abs_a = abs(a);
	int abs_b = abs(b);

	int counter = 0;
	int result = 0;

	while (1)
	{

		if (result + abs_b <= abs_a)
		{
			result += abs_b;
			counter++;
		}
		else
		{
			break;
		}
	}

	return counter * SIGN(a) * SIGN(b);
}

int run(int argc, char *argv[])
{

	while (1)
	{
		int a, b;

		printf("Enter a and b: ");

		if (scanf("%d%d", &a, &b) != 2)
		{

			while (getchar() != '\n')
			{
			}

			printf("Incorrect data provided. Please try again.\n");

			continue;
		}

		if (b == 0)
		{
			printf("Can't divide by zero.\n");

			continue;
		}

		int result = find_partial_quotient(a, b);

		printf("Result: %d", result);

		break;
	}

	printf("\nPress any key to exit...");

	getch();

	return 0;
}
