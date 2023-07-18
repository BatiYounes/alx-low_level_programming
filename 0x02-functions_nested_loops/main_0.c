#include <limits.h>
#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	/* print_last_digit */
	r = print_last_digit(98);
	_putchar('0' + r);
	_putchar('\n');

	/* print_sign */
	r = print_sign(98);
	if (r < 0)
		r *= -1;
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}
