#include <time.h>

#include <stdio.h>
#include <stdlib.h>

#include <conio.h>
#include <memory.h>

void swap(int *first_var, int *second_var)
{

	*first_var ^= *second_var ^= *first_var ^= *second_var;

}

void insertion_sort(int *array, int left, int right) {
    for (int i = left + 1; i <= right; i++) {
        int key = array[i];
        int j = i - 1;

        while (j >= left && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

void quick_sort(int *array, int left, int right) {
    if (left < right) {
        if (right - left < 10) {
            insertion_sort(array, left, right);
        } else {
            int pivot = array[right];
            int i = (left - 1);

            for (int j = left; j <= right - 1; j++) {
                if (array[j] < pivot) {
                    i++;
					swap(&array[i], &array[j]);
                }
            }

			swap(&array[i+1], &array[right]);

            int pi = i + 1;

            quick_sort(array, left, pi - 1);
            quick_sort(array, pi + 1, right);
        }
    }
}


int run(int argc, char *argv[])
{
	int* array = malloc(0);
	int count = 1;

	for (;;count++){
		int number;

		printf("Please enter numeric array element (write 's' or any other letter to stop): ");

		if (scanf("%d", &number) != 1) {

			while (getchar() != '\n') {}


			break;
		}

		array = realloc(array, sizeof(int) * (count));

		array[count - 1] = number;




	}

	

	quick_sort(array, 0, count - 1);



	printf("Resulting array:\n");

	for (int i = 0; i < count; i++)
	{
		printf("%d\n", array[i]);
	}

	printf("\nPress any key to exit...");

	getch();

	return 0;
}
