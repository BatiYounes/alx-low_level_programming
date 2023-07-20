#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
    int i;

    printf("Infinite loop incoming :(\n");

    i = 0;

    /* Comment out the while loop to avoid the infinite loop */
    /*
    while (i < 10)
    {
        putchar(i); // Change putchar(i) to putchar('0' + i)
        i++; // Add increment statement to avoid infinite loop
    }
    */

    printf("Infinite loop avoided! \\o/\n");

    return (0);
}
