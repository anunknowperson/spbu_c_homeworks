#include <time.h>

#include <stdio.h>
#include <stdlib.h>

#include <conio.h>
#include <memory.h>

#define MAX_RAND_VAL 100

int* generateRandomArray(int n) {
    int* array = (int*)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        array[i] = rand() % MAX_RAND_VAL;
    }

    return array;
}

void printArray(int* array, int count) {
    for (int i = 0; i < count; i++)
	{
		printf("%d\n", array[i]);
	}
}

int compareInt(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int binarySearch(int* arr, int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x) {
            return 1;
        }

        if (arr[mid] > x) {
            return binarySearch(arr, l, mid - 1, x);
        }

        return binarySearch(arr, mid + 1, r, x);
    }

    return 0;
}

int contains(int* arr, int n, int x) {
    qsort(arr, n, sizeof(int), compareInt);

    return binarySearch(arr, 0, n - 1, x);
}


int run(int argc, char *argv[])
{
    srand(time(NULL));

	int n, k;

	while (1)
	{


		printf("Enter n, k: ");

		if (scanf("%d%d", &n, &k) != 2)
		{

			while (getchar() != '\n')
			{
			}

			printf("Incorrect data provided. Please try again.\n");

			continue;
		}
        
		break;
	}

    int* array = generateRandomArray(n);
    int* toFind = generateRandomArray(k);


	printf("Generated array:\n");

	printArray(array, n);

    printf("Numbers to find:\n");

    for (int i = 0; i < k; i++) {
        printf("%d: ", toFind[i]);
        
        if (contains(array, n, toFind[i])) {
            printf("Found.\n");
        } else {
            printf("Not found.\n");
        }
    }

	printf("\nPress any key to exit...");

	getch();

	return 0;
}
