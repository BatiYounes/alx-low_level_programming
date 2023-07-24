#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *password;

    password = generate_password();
    if (password == NULL)
    {
        fprintf(stderr, "Error: Unable to generate password.\n");
        return (EXIT_FAILURE);
    }

    printf("Generated password: %s\n", password);

    free(password); /* Don't forget to free the allocated memory */

    return (EXIT_SUCCESS);
}
