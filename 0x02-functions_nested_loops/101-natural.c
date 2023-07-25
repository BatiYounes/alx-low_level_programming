#include "main.h"

/**
 * sum_of_multiples - Computes the sum of all multiples of 3 or 5 below 1024.
 *
 * Return: The sum of multiples of 3 or 5 below 1024.
 */
int sum_of_multiples(void)
{
	int sum = 0;
	int num;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
			sum += num;
	}

	return (sum); /* Add parentheses around 'sum' */
}
