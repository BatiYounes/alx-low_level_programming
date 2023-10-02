#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 * @x: The base value.
 * @y: The exponent value.
 *
 * Return: The value of x raised to the power of y.
 *         If y is lower than 0, returns -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1); /* Base case: If y is negative, return -1 */

	if (y == 0)
		return (1); /* Base case: If y is 0, the result is 1 */

	return (x * _pow_recursion(x, y - 1)); /* Recur with y-1- y=0 or less0*/
}
