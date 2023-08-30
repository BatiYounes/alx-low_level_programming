#include <stdlib.h>
#include <stdio.h>
#include "lists.h" /* Assuming this is where list_t is defined */

/**
 * print_list - Prints the elements of a linked list
 * @h: Pointer to the head of the list
 * Return: Number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", h->len, h->str);
		}

		count++;
		h = h->next;
	}

	return (count);
}
