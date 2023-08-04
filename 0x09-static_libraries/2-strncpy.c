/**
 * _strncpy - copies a string, up to n bytes, from src to dest
 * @dest: The destination buffer
 * @src: The source string to be copied
 * @n: The maximum number of bytes to be copied
 *
 * Return: Pointer to the destination buffer (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return dest;
}
