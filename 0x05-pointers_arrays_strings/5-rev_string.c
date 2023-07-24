#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	char temp;

	/* Find the length of the string */
	while (s[length] != '\0')
		length++;

	length--;

	/* Reverse the string */
	while (start < length)
	{
		temp = s[start];
		s[start] = s[length];
		s[length] = temp;

		start++;
		length--;
	}
}
