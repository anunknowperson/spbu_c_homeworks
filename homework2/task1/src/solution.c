#include <time.h>

#include <stdio.h>
#include <stdlib.h>

#include <conio.h>

int fibonacci_recursive(int N)
{
	if (N == 1 || N == 2)
	{
		return 1;
	}

	return fibonacci_recursive(N - 1) + fibonacci_recursive(N - 2);
}

int fibonacci_iterative(int N)
{
	if (N == 1 || N == 2)
	{
		return 1;
	}

	int first = 1, second = 1;

	for (int i = 2; i < N; i ++) {
		int temp = second;

		second = first + second;
		first = temp;
	}

	return second;
}

int run(int argc, char *argv[])
{
	clock_t start, stop;

	printf("Recursive fibonacci numbers:\n");

	for (int i = 1; i < 45; i++)
	{
		start = clock ();
		int result = fibonacci_recursive(i);
		stop = clock();
		double elapsed =(double)(stop - start) / CLOCKS_PER_SEC;
		printf("%d: %d (elapsed: %f)\n", i, result, elapsed);
	}

	printf("\nIterative fibonacci numbers:\n");

	for (int i = 1; i < 45; i++)
	{
		start = clock ();
		int result = fibonacci_iterative(i);
		stop = clock();
		double elapsed =(double)(stop - start) / CLOCKS_PER_SEC;
		printf("%d: %d (elapsed: %f)\n", i, result, elapsed);
	}

	printf("Starting from 26 number, difference in time becomes noticeable.");

	printf("\nPress any key to exit...");

	getch();

	return 0;
}
