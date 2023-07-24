#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_password - Generates a random valid password for 101-crackme
 *
 * Return: A pointer to the generated password
 */
char *generate_password(void)
{
	/* Implement your password generation logic here */

	/* Example: Generate a random password of length 10 */
	int password_length = 10;
	char *password = malloc((password_length + 1) * sizeof(char));

	if (password == NULL)
	{
		fprintf(stderr, "Error: Memory allocation failed.\n");
		return (NULL);
	}

	srand(time(0));
	for (int i = 0; i < password_length; i++)
	{
		int random_char = rand() % 62;
		if (random_char < 26)
			password[i] = 'a' + random_char;        /* Random lowercase letter */
		else if (random_char < 52)
			password[i] = 'A' + random_char - 26;    /* Random uppercase letter */
		else
			password[i] = '0' + random_char - 52;    /* Random digit */
	}
	password[password_length] = '\0';            /* Null-terminate the password */

	return (password);
}

