#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int bin_search_recursive(int *array, size_t start, size_t end, int value);
int jump_search(int *array, size_t size, int value);

# endif
