#include <time.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#include <conio.h>
#include <memory.h>

#define BITS 32

void toBinary(int num, char *binary) {
    unsigned int mask = 1U << (BITS - 1);
    for (int i = 0; i < BITS; i++, mask >>= 1) {
        binary[i] = (num & mask) ? '1' : '0';
    }
    binary[BITS] = '\0';
}

void addBinary(const char *a, const char *b, char *sum) {
    int carry = 0;
    for (int i = BITS - 1; i >= 0; i--) {
        int bitA = a[i] - '0';
        int bitB = b[i] - '0';
        int total = bitA + bitB + carry;
        sum[i] = (total % 2) + '0';
        carry = total / 2;
    }
    sum[BITS] = '\0';
}

int toDecimal(const char *binary) {
    int num = 0;
    int sign = 1;


    if (binary[0] == '1') {
        sign = -1;
    }

    unsigned int mask = 1U << (BITS - 1);
    for (int i = 0; i < BITS; i++, mask >>= 1) {
        if (binary[i] == '1') {
            num += mask;
        }
    }
    
    return sign * num;
}

int run(int argc, char *argv[])
{

    int a, b;

	while (1)
	{
		printf("Enter a, b: ");

		if (scanf("%d%d", &a, &b) != 2)
		{

			while (getchar() != '\n')
			{
			}

			printf("Incorrect data provided. Please try again.\n");

			continue;
		}
		break;
	}

    char binary1[BITS + 1];
    char binary2[BITS + 1];
    char sum[BITS + 1];

    toBinary(a, binary1);
    toBinary(b, binary2);

    printf("Binary of first number in two's complement: %s\n", binary1);
    printf("Binary of second number in two's complement: %s\n", binary2);


    addBinary(binary1, binary2, sum);

    printf("Sum in binary: %s\n", sum);


    int decimalSum = toDecimal(sum);
    printf("Sum in decimal: %d\n", decimalSum);

	printf("\nPress any key to exit...");

	getch();

	return 0;
}
