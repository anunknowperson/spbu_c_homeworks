#include <time.h>

#include <stdio.h>
#include <stdlib.h>

#include <conio.h>

int pow_linear(int a, int b)
{
	int result = a;

	for (int i = 0; i < b - 1; i++) {
		result *= a;
	}

	return result;
}

int pow_log(int a, int b) {
	if (b == 0){
		return 1;
	} else if (b % 2 == 0) {
		int half = pow_log(a, b / 2);

		return half * half;
	} else {
		return a * pow_log(a, b - 1);
	}
	
	return 0;
}

int run(int argc, char *argv[])
{
	
	while (1)
	{
		int method;

		printf("Enter 0 to use linear method, 1 to use log method: ");

		if (scanf("%d", &method) != 1)
		{

			while (getchar() != '\n')
			{
			}

			printf("Incorrect data provided. Please try again.\n");

			continue;
		}

		if (method != 0 && method != 1)
		{
			printf("Incorrect data provided. Please try again.\n");

			continue;
		}

		int a, b;

		printf("Enter a, b: ");

		if (scanf("%d%d", &a, &b) != 2)
		{

			while (getchar() != '\n')
			{
			}

			printf("Incorrect data provided. Please try again.\n");

			continue;
		}

		int result;

		if (method == 0) {
			result = pow_linear(a, b);
		} else {
			result = pow_log(a, b);
		}

		printf("Result: %d", result);

		break;
	}

	printf("\nPress any key to exit...");

	getch();

	return 0;
}
