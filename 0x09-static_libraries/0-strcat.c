/**
 * _strcat - concatenates two strings
 * @dest: The destination buffer
 * @src: The source string to be concatenated
 *
 * Return: Pointer to the destination buffer (dest).
 */
char *_strcat(char *dest, char *src)
{
    char *dest_ptr = dest;

    while (*dest != '\0')
    {
        dest++;
    }

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0'; /* Add the null-terminating byte */

    return dest_ptr;
}
