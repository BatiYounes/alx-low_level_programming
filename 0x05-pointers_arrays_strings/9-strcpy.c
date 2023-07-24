#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the terminating nul
 *           to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copy characters from src to dest until the null terminator is reached */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Append the null terminator at the end of the copied string */
	dest[i] = '\0';

	return (dest);
}
