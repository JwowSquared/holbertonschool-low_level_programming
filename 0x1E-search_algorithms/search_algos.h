#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>

/* Mandatory Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* Helper Functions */
void print_subarray(int *array, int left, int right);
int helper(int *array, int left, int right, int value);

#endif /* _SEARCH_ALGOS_H_ */
