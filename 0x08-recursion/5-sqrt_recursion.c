#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of n. If n does not have a natural square root, returns -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /* Base case: If n is negative, return -1 */

	if (n == 0 || n == 1)
		return (n); /* Base case: If n is 0 or 1, the square root is n */

	return (_calculate_sqrt(n, 1)); /* Start calculating the square root from 1 */
}

/**
 * _calculate_sqrt - Helper function to calculate the square root.
 * @n: The number to calculate the square root of.
 * @i: The current integer to check if its square is equal to n.
 *
 * Return: The square root of n if found, otherwise, continue checking with the next integer.
 */
int _calculate_sqrt(int n, int i)
{
	if (i * i == n)
		return (i); /* If i*i is equal to n, we found the square root */

	if (i * i > n)
		return (-1); /* If i*i is greater than n, n does not have a natural square root */

	return (_calculate_sqrt(n, i + 1)); /* Recur with the next integer */
}
