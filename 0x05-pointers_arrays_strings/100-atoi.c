#include <stddef.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    if (s == NULL)
        return 0;

    /*	Handle the sign of the number */
    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }

    /* Convert string to integer */
    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            result = result * 10 + (s[i] - '0');
            i++;
        }
        else
        {
            break;
        }
    }

    return result * sign;
}
