#ifndef SOLUTION_H
#define SOLUTION_H

void swap(int* first_var, int* second_var);
void swap_array_slice(int* array, int start, int end);
int* enter_array(int* out_size);
int* merge_arrays(int* first_array, int first_size, int* second_array, int second_size);

int run(int argc, char *argv[]);

#endif