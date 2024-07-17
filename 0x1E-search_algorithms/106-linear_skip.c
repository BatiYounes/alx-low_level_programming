#include <stdio.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not
 * found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev, *current;

	if (list == NULL)
		return (NULL);

	prev = list;
	current = list->express;

	while (current)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n >= value)
			break;
		prev = current;
		current = current->express;
	}

	if (!current)
	{
		current = prev;
		while (current->next)
			current = current->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev->index, current->index);

	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
