#include <stdio.h>
#include "main.h"

int main() {
    long limit = 4000000;
    long sum = fibonacci_sum_even(limit);

    printf("Sum of even-valued Fibonacci terms not exceeding 4,000,000: %ld\n", sum);

    return 0;
}
