/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: The destination buffer where the string will be copied to.
 * @src: The source string to be copied.
 * @n: The maximum number of bytes to copy from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
