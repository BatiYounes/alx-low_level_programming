#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * Searches for a value in a sorted array using Jump search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev = 0, i;

	if (array == NULL)
		return (-1);

	step = sqrt(size);

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (array[step] < value && step < size)
	{
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	for (i = prev; i <= (step < size ? step : size - 1); i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
