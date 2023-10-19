#include "lists.h"

/**
 * list_len - A function that returns the number of elements in a linked list.
 * @h: A pointer to traverse the linked list.
 * Return: Number of elements in a linked list.
 */
size_t list_len(const list_t *h)
{
	const list_t *x;
	unsigned int i = 0;

	x = h;
	while (x)
	{
		i += 1;
		x = (*x).next;
	}
	return (i);
}

