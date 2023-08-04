/**
 * _atoi - converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;

    while (*s != '\0')
    {
        if (*s == '-')
            sign *= -1;
        else if (*s >= '0' && *s <= '9')
            result = result * 10 + (*s - '0');
        else if (result > 0) /* Stop when non-digit encountered after digits */
            break;

        s++;
    }

    return result * sign;
}
