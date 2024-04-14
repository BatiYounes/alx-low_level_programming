#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

void print_array(int *array, size_t size);

/**
 * exponential_search - Searches for a value in a sorted array using
 *                      Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, prev = 0, i;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		prev = bound;
		bound *= 2;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, bound);

	if (bound >= size)
		bound = size - 1;

	for (i = prev; i <= bound; i++)
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

	return (binary_search(array + prev, bound - prev + 1, value) + prev);
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		print_array(array + left, right - left + 1);

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	return (-1);
}

/**
 * print_array - Prints an array of integers
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
		else
			printf("\n");
	}
}
