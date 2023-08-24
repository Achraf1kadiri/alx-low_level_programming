#include <stdio.h>
#include "custom_lists.h"

/**
 * display_custom_list - displays the content of a custom linked list
 * @list: pointer to the custom_list_t list to display
 *
 * Return: the count of elements displayed
 */
size_t display_custom_list(const custom_list_t *list)
{
    size_t count = 0;

    while (list)
    {
        if (!list->data)
            printf("[0] (null)\n");
        else
            printf("[%lu] %s\n", list->length, list->data);
        list = list->next;
        count++;
    }

    return count;
}

