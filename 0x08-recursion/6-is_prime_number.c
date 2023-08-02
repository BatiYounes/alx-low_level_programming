#include "main.h"

/**
 * is_prime_number - Checks if the input integer is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if n is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0); /* Base case: If n is less than or equal to 1, it is not prime */

	return (_prime_helper(n, 2)); /* Start checking for prime from divisor 2 */
}

/**
 * _prime_helper-Helper funct to check if the input integer is aprime number.
 * @n: The number to check.
 * @i: The current divisor to check if it divides n.
 *
 * Return: 1 if n is a prime number, otherwise return 0.
 */
int _prime_helper(int n, int i)
{
	if (n % i == 0 && i != n)
		return (0); /* If i divides n and i is not equal to n, n is not prime */

	if (i == n)
		return (1); /* If i is equal to n, n is prime */

	return (_prime_helper(n, i + 1)); /* Recur with the next divisor */
}
