#include "lists.h"

/**
 * print_listint - A function to print all elements of a list.
 * @h: A pointer to the printed list.
 * Return: The number of nodes.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *p;
	unsigned int i = 0;

	for (p = h; p != NULL; p = (*p).next)
	{
		printf("%d\n", (*p).n);
		i += 1;
	}

	return (i);
}

