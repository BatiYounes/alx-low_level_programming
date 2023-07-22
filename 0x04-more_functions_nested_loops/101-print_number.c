#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int last_digit, reversed;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	reversed = 0;
	while (n != 0)
	{
		last_digit = n % 10;
		reversed = reversed * 10 + last_digit;
		n /= 10;
	}

	while (reversed != 0)
	{
		last_digit = reversed % 10;
		_putchar(last_digit + '0');
		reversed /= 10;
	}
}
