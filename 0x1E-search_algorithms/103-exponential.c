#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * binary_search_sub - Searches for a value in a sorted
 * @array: Pointer to the first element of the array to search in.
 * @left: Left index of the subarray to search in.
 * @right: Right index of the subarray to search in.
 * @value: Value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found.
 */
int binary_search_sub(int *array, int left, int right, int value)
{
	int mid, i;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array using
 *                      exponential search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t left, right;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	return (binary_search_sub(array, left, right, value));
}
