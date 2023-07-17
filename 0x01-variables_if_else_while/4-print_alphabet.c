#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphab;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
	{
		if (alphab != 'q' && alphab != 'e')
			putchar(alphab);
	}

	putchar('\n');

	return 0;
}
