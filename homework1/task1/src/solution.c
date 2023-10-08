#include <stdio.h>
#include <stdlib.h>

#include <conio.h>

void swap(int* first_var, int* second_var) {

	*first_var ^= *second_var ^= *first_var ^= *second_var;
	
}

int run(int argc, char *argv[]) {
	

	while (1){
		int a, b;

		printf("Enter a and b: ");

		if (scanf("%d%d", &a, &b) != 2) {

			while (getchar() != '\n') {}

			printf("Incorrect data provided. Please try again.\n");


			continue;
		}

		swap(&a, &b);

		printf("Result:\na=%d\nb=%d", a, b);

		break;
	}

	
	printf("\nPress any key to exit...");
	
	
	getch();

    return 0;
}
