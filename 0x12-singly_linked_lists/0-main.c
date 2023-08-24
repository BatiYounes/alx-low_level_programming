#include <stdlib.h>
#include <stdio.h>
#include "lists.h" // Assuming this is where list_t is defined

int main(void)
{
    list_t *head = NULL;
    list_t *new = NULL;
    size_t n;

    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;

    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("World");
    new->len = 5;
    new->next = head;
    head = new;

    n = print_list(head);
    printf("-> %lu elements\n", n);

    /* Free allocated memory */
    while (head != NULL)
    {
        list_t *temp = head;
        head = head->next;
        free(temp->str);
        free(temp);
    }

    return (0);
}
