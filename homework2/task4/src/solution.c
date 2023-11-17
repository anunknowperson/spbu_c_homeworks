#include <time.h>

#include <stdio.h>
#include <stdlib.h>

#include <conio.h>
#include <memory.h>

void swap(int *first_var, int *second_var)
{

	*first_var ^= *second_var ^= *first_var ^= *second_var;

}
void rearrangeArray(int *array, int size) {
	int pivot = array[0];
    int i = 1, j = size - 1;

    while (i <= j) {
        while (i <= j && array[i] < pivot) i++;
        while (i <= j && array[j] >= pivot) j--;

        if (i < j) {
            swap(&array[i], &array[j]);
        }
    }

    swap(&array[0], &array[j]);
}

int run(int argc, char *argv[])
{
	srand(time(0));

	const int SIZE = 10;

	int *array = malloc(sizeof(int) * SIZE);
	
	for (int i = 0; i < SIZE; i++) {
		int rand_value = rand() % (100 + 1);

		array[i] = rand_value;

		printf("%d ", rand_value);
	}

	printf("\n");

	

	rearrangeArray(array, SIZE);




	printf("Resulting array:\n");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d\n", array[i]);
	}

	printf("\nPress any key to exit...");

	getch();

	return 0;
}
