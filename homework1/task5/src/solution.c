#include <stdio.h>
#include <stdlib.h>

#include <conio.h>

#include <string.h>

int check_brackets(char* string) {
	int counter = 0;
	int string_length = strlen(string);

	for (int i = 0; i < string_length; i++) {
		if (string[i] == '(') {
			counter ++;
		} else if (string[i] == ')') {
			counter --;
		}

		if (counter < 0) {
			return 0;
		}
	}

	return counter == 0;
}

int run(int argc, char *argv[]) {

	while(1) {
		printf("\nPlease enter string to check bracket balance: ");

		char* string = malloc(sizeof(char) * 100);
		scanf("%99s", string);

		int correct = 1;

		for (int i = 0; i < strlen(string); i++) {
			if (string[i] != '(' && string[i] != ')') {
				correct = 0;
				break;
			}
		}

		if (!correct) {
			printf("\nInvalid data provided, please enter again.");

			continue;
		}

		if (check_brackets(string)) {
			printf("String is balanced.");
		} else {
			printf("String is unbalanced.");
		}

		break;
	}
	

	printf("\nPress any key to exit...");
	
	getch();

    return 0;
}
