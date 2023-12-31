#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')  /* Base_case If the end of the string is reached, return  0*/
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));  /* Recur for the rest of the string */
}
