#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 */
void print_alphabet(void)
{
	char alphab;

	for (alphab= 'a'; alphab<= 'z'; alphab++)
		_putchar(alphab);

	_putchar('\n');
}
