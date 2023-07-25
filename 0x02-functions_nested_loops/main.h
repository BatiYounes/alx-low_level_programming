#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int n);
int print_last_digit(int n);
void jack_bauer(void);
void times_table(void);
int add(int a, int b);
void print_to_98(int n);
void print_times_table(int n);
int sum_of_multiples(void);
void print_fibonacci(void);
long fibonacci_sum_even(long limit);

#define NUM_DIGITS 1000

/**
 * struct bigint - Structure to represent large numbers
 * @num: Array to store the digits of the number
 * @size: Number of digits in the number
 */
typedef struct bigint
{
    int num[NUM_DIGITS];
    int size;
} bigint_t;

void print_bigint(const bigint_t *n);
void copy_bigint(bigint_t *dest, const bigint_t *src);
void add_bigint(bigint_t *res, const bigint_t *a, const bigint_t *b);
void fibonacci_98(void);

#endif /* MAIN_H */
