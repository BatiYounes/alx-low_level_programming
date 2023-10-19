#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/* Structure for the linked list nodes */
struct list_s
{
    char *str;
    size_t len;
    struct list_s *next;
};
typedef struct list_s list_t;

/* Function prototype */
size_t print_list(const list_t *h);

#endif /* MAIN_H */

