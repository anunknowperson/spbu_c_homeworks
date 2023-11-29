#include <time.h>

#include <stdio.h>
#include <stdlib.h>

#include <conio.h>
#include <memory.h>

#include "frequent.h"

#define MAX_RAND_VAL 100
#define ARR_LENGTH 10000



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


int run(int argc, char *argv[])
{
    srand(time(NULL));

    FILE *file;
    char *filename = "C:\\input.txt";
    int array[ARR_LENGTH];
    int count = 0;

    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return -1;
    }

    while (count < ARR_LENGTH && fscanf(file, "%d", &array[count]) == 1) {
        count++;
    }

    fclose(file);

    int result = findMostFrequent(array, count);
    printf("The most frequent element is: %d\n", result);
    

	printf("\nPress any key to exit...");

	getch();

	return 0;
}
