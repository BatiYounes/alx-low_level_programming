#include <stddef.h>
#include <ctype.h>

char *cap_string(char *str)
{
    if (str == NULL)
        return NULL;

    int capitalize_next; /* Declare the variable here */
    char *current = str;

    capitalize_next = 1; /* Initialize the variable */

    while (*current)
    {
        if (capitalize_next && islower(*current))
            *current = toupper(*current);

        switch (*current)
        {
            case ' ': case '\t': case '\n':
            case ',': case ';': case '.': case '!': case '?':
            case '"': case '(': case ')': case '{': case '}':
                capitalize_next = 1;
                break;
            default:
                capitalize_next = 0;
                break;
        }

        current++;
    }

    return str;
}
