/**
 * _strcpy - copies a string (including the null-terminating byte) to a buffer
 * @dest: The destination buffer
 * @src: The source string to be copied
 *
 * Return: The pointer to the destination buffer (dest).
 */
char *_strcpy(char *dest, char *src)
{
    char *dest_ptr = dest;

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0'; /* Add the null-terminating byte */

    return dest_ptr;
}
