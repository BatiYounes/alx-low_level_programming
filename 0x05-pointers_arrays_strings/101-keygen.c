#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_password - Generates a random valid password for 101-crackme progra
 *
 * Return: The generated password
 */
char *generate_password(void)
{
	char *password;
	int i, sum, target;

	srand(time(0));
	target = 2772;
	password = malloc(100);
	if (password == NULL)
		return (NULL);

	i = 0;
	sum = 0;
	while (sum < target - 122)
	{
		password[i] = rand() % 94 + 32;
		sum += password[i];
		i++;
	}

	password[i] = target - sum;
	password[i + 1] = '\0';

	return (password);
}
