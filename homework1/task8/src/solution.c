#include <stdio.h>
#include <stdlib.h>

#include <conio.h>

void swap(int* first_var, int* second_var) {

	*first_var ^= *second_var ^= *first_var ^= *second_var;
	
}

void swap_array_slice(int* array, int start, int end) {

	for (int i = 0; i < (end - start) / 2; i++) {
		swap(&array[start + i], &array[end - 1 - i]);
	}

}

int* enter_array(int* out_size) {
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
	*out_size = count - 1;
	return array;
}

int* merge_arrays(int* first_array, int first_size, int* second_array, int second_size) {
	int* result_array = malloc(sizeof(int) * (first_size + second_size));

	for (int i = 0; i < first_size; i++) {
		result_array[i] = first_array[i];
	}

	
	for (int i = 0; i < second_size; i++) {
		result_array[first_size + i] = second_array[i];
	}

	return result_array;
}

int run(int argc, char *argv[]) {
	
	
	printf("Please enter first array:\n");

	int size1;
	int* array1 = enter_array(&size1);

	printf("Please enter second array:\n");

	int size2;
	int* array2 = enter_array(&size2);


	swap_array_slice(array1, 0, size1);
	swap_array_slice(array2, 0, size2);

	int* result = merge_arrays(array1, size1, array2, size2);

	swap_array_slice(result, 0, size1 + size2);

	printf("Result:\n");

	for (int i = 0; i < size1 + size2; i++) {
		printf("%d\n", result[i]);
	}

	free(array1);
	free(array2);
	free(result);
	
	printf("\nPress any key to exit...");
	
	
	getch();

    return 0;
}
