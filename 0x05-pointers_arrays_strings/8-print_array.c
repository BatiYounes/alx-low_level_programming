#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers, followed by a new l
 * @a: Pointer to the array.
 * @n: Number of elements to print.
 */
void print_array(int *a, int n)
{
	int i;

	if (a == NULL || n <= 0)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}