#include "main.h"
#include <stdio.h>

int main(void)
{
    char *password;

    srand(time(0));

    /* Generate a random password using 101-keygen.c */
    password = generate_password();
    printf("Generated password: %s\n", password);

    return (0);
}
