/**
 * _strncat - concatenates two strings, up to n bytes of src
 * @dest: The destination buffer
 * @src: The source string to be concatenated
 * @n: The maximum number of bytes to be used from src
 *
 * Return: Pointer to the destination buffer (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
    char *dest_ptr = dest;

    while (*dest != '\0')
    {
        dest++;
    }

    while (*src != '\0' && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    *dest = '\0'; /* Add the null-terminating byte */

    return dest_ptr;
}
