/**
 * _memcpy - copies memory area from src to dest
 * @dest: The destination buffer
 * @src: The source buffer to be copied from
 * @n: The number of bytes to be copied
 *
 * Return: Pointer to the destination buffer (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    for (i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }
    return dest;
}
