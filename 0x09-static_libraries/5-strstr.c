/**
 * _strstr - locates a substring
 * @haystack: The main string to be searched
 * @needle: The substring to be located
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    char *haystack_ptr;
    char *needle_ptr;

    while (*haystack)
    {
        haystack_ptr = haystack;
        needle_ptr = needle;
        while (*haystack_ptr == *needle_ptr && *needle_ptr)
        {
            haystack_ptr++;
            needle_ptr++;
        }
        if (*needle_ptr == '\0')
            return haystack;
        haystack++;
    }
    return NULL;
}
