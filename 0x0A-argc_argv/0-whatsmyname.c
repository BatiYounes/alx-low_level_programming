#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc; /* To suppress the unused parameter warning */

	printf("%s\n", argv[0]);
	return (0);
}
