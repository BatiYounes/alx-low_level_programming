#include "main.h"
#include <stdio.h>

int main(void)
{
    long number = 612852475143;
    long result = largest_prime_factor(number);

    printf("%ld\n", result);
    return (0);
}
