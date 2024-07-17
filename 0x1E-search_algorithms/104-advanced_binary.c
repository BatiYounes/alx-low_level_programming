#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints an array
 * @array: Pointer to the first element of the array
 * @left: Starting index to print from
 * @right: Ending index to print to
 *
 * Description: Prints the elements of the array from index 'left' to 'right'.
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * adv_bin_recur - Performs binary search recursively
 * @array: Pointer to the first element of the array
 * @left: Starting index of the array
 * @right: Ending index of the array
 * @value: Value to search for
 *
 * Return: Index where value is located, -1 if not found
 *
 * Description: Implements binary search recursively on the sorted array.
 */
int adv_bin_recur(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			if (mid == 0 || array[mid - 1] != value)
				return (mid);
			return (adv_bin_recur(array, left, mid, value));
		}
		else if (array[mid] < value)
			return (adv_bin_recur(array, mid + 1, right, value));
		else
			return (adv_bin_recur(array, left, mid - 1, value));
	}
	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array using advanced
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, -1 if not found
 *
 * Description: Initiates the advanced binary search on the sorted array.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (adv_bin_recur(array, 0, size - 1, value));
}
