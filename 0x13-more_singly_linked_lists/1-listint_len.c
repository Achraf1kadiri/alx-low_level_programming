#include "lists.h"

/**
 * listint_len - A func to calculate the number of elements in a linked list.
 * @h: A pointer to the linked list.
 * Return: the number of elements.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *x;
	unsigned int i = 0;

	x = h;
	while (x)
	{
		i += 1;
		x = (*x).next;
	}
	return (i);
}
