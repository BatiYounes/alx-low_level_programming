#include "main.h"

/**
 * wildcmp - Compare two strings with wildcards
 * @s1: First string
 * @s2: Second string (may contain wildcards '*')
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0') /* If strings are empty, they are identical */
		return (1);

	if (*s2 == '*') /* Wildcard found in s2 */
	{
		if (*s1 == '\0') /*s1 empty & s2 contains only*,it match an empty string*/
			return (wildcmp(s1, s2 + 1));

		/*try matching s1 with s2 or skip '*' in s2 & continue matching s1*/
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	if (*s1 != '\0' && *s2 == *s1) /*If current char match,keep matching rest*/
		return (wildcmp(s1 + 1, s2 + 1));

	return (0); /* If characters don't match, return 0 (not identical) */
}
