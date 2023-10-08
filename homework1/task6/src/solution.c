#include <stdio.h>
#include <stdlib.h>

#include <conio.h>

#include <math.h>

int is_prime(int n) {
	if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;

    for (int i = 3; i < (int) pow(n, 0.5) + 1; i += 2){
		if (n % i == 0) {
			return 0;
		}
	}
    
    return 1;
}


int run(int argc, char *argv[]) {
	
	while (1){
		int a;

		printf("Enter number a: ");

		if (scanf("%d", &a) != 1) {

			while (getchar() != '\n') {}

			printf("Incorrect data provided. Please try again.\n");

			continue;
		}

		if (2 <= a) {
			printf("Prime: %d\n", 2);
		}

		for (int i = 3; i <= a; i+= 2) {
			if (is_prime(i)) {
				printf("Prime: %d\n", i);
			}
		}

		break;
	}

	
	printf("\nPress any key to exit...");
	
	
	getch();

    return 0;
}
