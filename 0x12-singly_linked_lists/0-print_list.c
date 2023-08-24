#include <stdio.h>
#include "linked_list_ops.h"

/**
 * display_linked_elements - prints all elements of a linked list
 * @h: pointer to the list_t list containing elements
 *
 * Return: number of nodes printed
 */
size_t display_linked_elements(const list_t *h)
{
    size_t node_count = 0;

    while (h)
    {
        if (!h->str)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h->len, h->str);
        h = h->next;
        node_count++;
    }

    return node_count;
}

