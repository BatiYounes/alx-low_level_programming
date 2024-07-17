#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list using
 * the jump search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not
 * found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_step, index;
	listint_t *prev, *current;

	if (list == NULL || size == 0)
		return (NULL);

	jump_step = sqrt(size);
	prev = list;
	current = list;

	while (current->next != NULL && current->n < value)
	{
		prev = current;
		for (index = 0; index < jump_step && current->next != NULL; index++)
		{
			current = current->next;
		}
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev->index, current->index);

	while (prev != NULL && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
