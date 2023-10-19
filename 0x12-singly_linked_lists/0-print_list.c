#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - A function that prints all the elements of a list.
 * @h: The list to be printed.
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if ((*h).str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", (*h).len, (*h).str);

		node += 1;
		h = (*h).next;
	}

	return (node);
}

