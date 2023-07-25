#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Computes and prints the sum of even Fibonacci numbers
 *              that are less than 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0, b = 1, fib = 0;
	int sum = 0;

	while (fib < 4000000)
	{
		fib = a + b;
		a = b;
		b = fib;

		if (fib % 2 == 0)
			sum += fib;
	}

	printf("%i\n", sum);

	return (0);
}
