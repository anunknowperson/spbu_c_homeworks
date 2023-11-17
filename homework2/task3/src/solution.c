#include <time.h>

#include <stdio.h>
#include <stdlib.h>

#include <conio.h>
#include <memory.h>

void swap(int *first_var, int *second_var)
{

	*first_var ^= *second_var ^= *first_var ^= *second_var;
}

void bubble_sort(int *array, int length)
{
	for (int i = 0; i < length - 1; ++i)
	{
		for (int j = 0; j < length - i - 1; ++j)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
			}
		}
	}
}

void counter_sort(int *array, int length)
{
	int *output = malloc(sizeof(int) * length);

	int max_number = 0;

	for (int i = 0; i < length; i++)
	{
		if (array[i] > max_number)
		{
			max_number = array[i];
		}
	}

	int *freq = calloc(max_number + 1, sizeof(int));

	for (int i = 0; i < length; i++)
	{
		freq[array[i]]++;
	}

	int total = 0;
	for (int i = 0; i < max_number + 1; i++)
	{
		int oldCount = freq[i];
		freq[i] = total;
		total += oldCount;
	}

	for (int i = 0; i < length; i++)
	{
		output[freq[array[i]]] = array[i];
		freq[array[i]]++;
	}

	for (int i = 0; i < length; i++)
	{
		array[i] = output[i];
	}

	free(output);
	free(freq);
}

int run(int argc, char *argv[])
{
	clock_t start, stop;
	double elapsed;

	const int SIZE = 100000;

	int *array = malloc(sizeof(int) * SIZE);
	int *array2 = malloc(sizeof(int) * SIZE);
	
	for (int i = 0; i < SIZE; i++) {
		int rand_value = rand() % (1000 + 1);

		array[i] = rand_value;
		array2[i] = rand_value;
	}

	
	start = clock();
	counter_sort(array2, SIZE);
	stop = clock();
	elapsed = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("counter sort elapsed: %f\n", elapsed);

	start = clock();
	bubble_sort(array, SIZE);
	stop = clock();
	elapsed = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("bubble sort elapsed: %f\n", elapsed);

	


	/*printf("Resulting array:\n");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d\n", array2[i]);
	}*/

	printf("\nPress any key to exit...");

	getch();

	return 0;
}
