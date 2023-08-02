#include "main.h"

/**
 * factorial - Calculates the factorial of a given number using recursion.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of n. If n is less than 0, returns -1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1); /* Base case:If n is negative, return -1 to indicate an error*/

	if (n == 0)
		return (1); /* Base case: If n is 0, factorial is 1 */

	return (n * factorial(n - 1)); /*Recur with n-1 until n becomes 0 or <0*/
}
