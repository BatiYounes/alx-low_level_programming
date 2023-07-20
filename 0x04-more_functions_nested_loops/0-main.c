#include "main.h"

/**
 * test_isupper - Test the _isupper function.
 *
 * @n: Number to pass to _isupper function.
 */
void test_isupper(int n)
{
    int r;

    r = _isupper(n);
    _putchar(r + '0');
    _putchar('\n');
}

/**
 * main - Check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    test_isupper('H');
    return (0);
}
