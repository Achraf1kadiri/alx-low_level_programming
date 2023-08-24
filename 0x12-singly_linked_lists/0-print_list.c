#include <stdio.h>
#include "lists.h"

/**
 * print_list - displays all elements stored in a linked list
 * @h: pointer to the list_t structure representing the list
 *
 * Returns: the count of nodes that have been printed
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}

	return (a);
}
