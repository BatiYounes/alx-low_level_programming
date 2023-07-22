#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a given number.
 * @n: The number to find the largest prime factor of.
 *
 * Return: The largest prime factor of the number 'n'.
 */
long largest_prime_factor(long n)
{
	long factor, max_factor;

	max_factor = -1;
	while (n % 2 == 0)
	{
		max_factor = 2;
		n /= 2;
	}

	for (factor = 3; factor <= sqrt(n); factor += 2)
	{
		while (n % factor == 0)
		{
			max_factor = factor;
			n /= factor;
		}
	}

	if (n > 2)
		max_factor = n;

	return (max_factor);
}





