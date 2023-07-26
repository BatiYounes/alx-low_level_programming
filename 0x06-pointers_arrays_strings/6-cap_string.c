#include "main.h"

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: 1 if the character is a separator, 0 otherwise.
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i; // Move the loop declaration outside

	for (i = 0; separators[i]; i++)
	{
		if (c == separators[i])
			return 1;
	}

	return 0;
}

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize = 1;

	while (*ptr)
	{
		if (is_separator(*ptr))
			capitalize = 1;
		else if (capitalize && (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr = *ptr - ('a' - 'A');
			capitalize = 0;
		}

		ptr++;
	}

	return str;
}
