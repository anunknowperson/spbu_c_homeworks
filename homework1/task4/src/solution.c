#include <stdio.h>
#include <stdlib.h>

#include <conio.h>


int* compute_array() {
	int* sums = calloc(28, sizeof(int));

	for (int a = 0; a < 10; a++) {
		for (int b = 0; b < 10; b++) {
			for (int c = 0; c < 10; c++) {
				sums[a + b + c] += 1;
			}
		}
	}

	return sums;
}

int sum_array(int* array) {
	int result = 0;
	
	for (int i = 0; i < 28; i++) {
		result += array[i] * array[i];
	}

	return result;
}


int run(int argc, char *argv[]) {
	
	int* array = compute_array();
	int result = sum_array(array);

	printf("Lucky tickets count: %d", result);

	free(array);

	printf("\nPress any key to exit...");
	
	
	getch();

    return 0;
}
