
#include "main.h"

/**
 * _puts - prints a string to the standard output (stdout)
 * @s: The string to be printed
 */
void _puts(char *s)
{
    while (*s != '\0')
    {
        _putchar(*s);
        s++;
    }
}
