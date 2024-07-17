#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
void free_list(listint_t *list);

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    listint_t *list, *res;
    int array[] = {
        0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 53, 61, 62, 76, 99
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    list = create_list(array, size);
    print_list(list);

    res =  jump_list(list, size, 53);
    if (res)
        printf("Found %d at index: %lu\n\n", 53, res->index);
    else
        printf("Value %d not found in list\n\n", 53);

    res =  jump_list(list, size, 2);
    if (res)
        printf("Found %d at index: %lu\n\n", 2, res->index);
    else
        printf("Value %d not found in list\n\n", 2);

    res =  jump_list(list, size, 999);
    if (res)
        printf("Found %d at index: %lu\n", 999, res->index);
    else
        printf("Value %d not found in list\n", 999);

    free_list(list);
    return (EXIT_SUCCESS);
}

/**
 * create_list - Creates a singly linked list from an array of integers
 * @array: Array of integers
 * @size: Size of the array
 *
 * Return: Pointer to the head of the created list, or NULL on failure
 */
listint_t *create_list(int *array, size_t size)
{
    listint_t *head = NULL, *new_node = NULL, *temp = NULL;
    size_t i;

    if (array == NULL || size == 0)
        return (NULL);

    for (i = 0; i < size; i++)
    {
        new_node = malloc(sizeof(listint_t));
        if (new_node == NULL)
        {
            free_list(head);
            return (NULL);
        }
        new_node->n = array[i];
        new_node->index = i;
        new_node->next = NULL;
        if (head == NULL)
            head = new_node;
        else
            temp->next = new_node;
        temp = new_node;
    }
    return (head);
}

/**
 * print_list - Prints all elements of a singly linked list
 * @list: Pointer to the head of the list
 */
void print_list(const listint_t *list)
{
    const listint_t *temp = list;

    printf("List :\n");
    while (temp)
    {
        printf("Index[%lu] = [%d]\n", temp->index, temp->n);
        temp = temp->next;
    }
    printf("\n");
}

/**
 * free_list - Frees memory allocated for a singly linked list
 * @list: Pointer to the head of the list
 */
void free_list(listint_t *list)
{
    listint_t *temp;

    while (list)
    {
        temp = list;
        list = list->next;
        free(temp);
    }
}
