#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a specific string to the standard error
 * Return: Always 1 (indicating an error)
 */
int main(void)
{
	ssize_t len = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n") - 1;

	/* Write the string to the standard error */
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", len);

	return (1);
}
