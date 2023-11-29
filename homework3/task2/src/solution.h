#ifndef SOLUTION_H
#define SOLUTION_H

int* generateRandomArray(int n);

void printArray(int* array, int count);

int run(int argc, char *argv[]);


int compareInt(const void* a, const void* b);
int binarySearch(int* arr, int l, int r, int x);
int contains(int* arr, int n, int x);

#endif