/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: The destination string to concatenate to.
 * @src: The source string to concatenate from.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	/* Move dest to the end of the string */
	while (*dest)
		dest++;

	/* Append at most n bytes from src to dest */
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	/* Null-terminate the resulting string */
	*dest = '\0';

	return (temp);
}
