#include <stdio.h>
#include <stdlib.h>

#include <conio.h>

int count_zeros(int* array, int size) {
	int result = 0;
	
	for (int i = 0; i < size; i++) {
		if (array[i] == 0){
			result++;
		}
	}

	return result;
}

int run(int argc, char *argv[]) {
	
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

	printf("Zeros in array: %d", count_zeros(array, count));

	free(array);
	
	printf("\nPress any key to exit...");
	
	getch();

    return 0;
}
