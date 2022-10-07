#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void pri_arr(int *array, size_t start, size_t end);
int jump_search(int *array, size_t size, int value);

#endif

