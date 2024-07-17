#ifndef _SEARCH_ALGO_H_
#define _SEARCH_ALGO_H_

#include <stdio.h>
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value); /* Prototype for array search*/
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search_sub(int *array, int left, int right, int value); /* Rename the helper binary search*/

#endif /* _SEARCH_ALGO_H_ */
