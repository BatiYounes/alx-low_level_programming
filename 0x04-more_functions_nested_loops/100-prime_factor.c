#include "main.h"

/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 * @num: The number to find the largest prime factor for.
 *
 * Return: The largest prime factor of the number.
 */
long largest_prime_factor(long num)
{
	long divisor, largest;

	divisor = 2;
	largest = 0;

	while (num > 1)
	{
		if (num % divisor == 0)
		{
			num /= divisor;
			if (divisor > largest)
				largest = divisor;
		}
		else
		{
			if (divisor == 2)
				divisor++;
			else
				divisor += 2;
		}
	}

	return (largest);
}
