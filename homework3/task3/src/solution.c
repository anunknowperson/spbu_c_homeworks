#include <time.h>

#include <stdio.h>
#include <stdlib.h>

#include <conio.h>
#include <memory.h>

#define MAX_RAND_VAL 100
#define ARR_LENGTH 10000


typedef struct {
    int element;
    int frequency;
} ElementFreq;

int findMostFrequent(int arr[], int n) {
    if (n == 0) return -1;

    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    ElementFreq *freq = (ElementFreq *)malloc((maxVal + 1) * sizeof(ElementFreq));
    if (freq == NULL) return -1;

    for (int i = 0; i <= maxVal; i++) {
        freq[i].element = i;
        freq[i].frequency = 0;
    }

    for (int i = 0; i < n; i++) {
        freq[arr[i]].frequency++;
    }

    int maxFrequency = 0, mostFrequent = -1;
    for (int i = 0; i <= maxVal; i++) {
        if (freq[i].frequency > maxFrequency) {
            maxFrequency = freq[i].frequency;
            mostFrequent = freq[i].element;
        }
    }

    free(freq);

    return mostFrequent;
}

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

	int n = ARR_LENGTH;


    int* array = generateRandomArray(n);

    int result = findMostFrequent(array, n);
    printf("The most frequent element is: %d\n", result);
    

	printf("\nPress any key to exit...");

	getch();

	return 0;
}
