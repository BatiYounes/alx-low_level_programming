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
int advanced_binary(int *array, size_t size, int value);
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
void free_list(listint_t *list);

#endif /* _SEARCH_ALGO_H_ */
