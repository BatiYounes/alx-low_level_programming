#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first
 * character, followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void puts2(char *str)
{
    int length = _strlen(str);
    int i;

    for (i = 0; i < length; i += 2)
        _putchar(str[i]);
    _putchar('\n');
}
