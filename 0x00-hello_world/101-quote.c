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
	const char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, len);

	return (1);
}
