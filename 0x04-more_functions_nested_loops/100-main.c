#include <stdio.h>
#include "main.h"

int main(void)
{
	long num = 612852475143;
	long largest_prime = largest_prime_factor(num);

	printf("%ld\n", largest_prime);

	return (0);
}
