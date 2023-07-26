/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: 0 if the strings are equal, a negative value if s1 is less than s2,
 *         or a positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	char *temp1 = s1;
	char *temp2 = s2;

	while (*temp1 && (*temp1 == *temp2))
	{
		temp1++;
		temp2++;
	}

	return (*temp1 - *temp2);
}
