#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - A func to get the nth node of a list.
 * @head: A double pointer to the head of the list.
 * @index: the index of the node.
 * Return: The found node, NULL otherwise.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		head = (*head).next;
		if (head == NULL)
			return (NULL);
		i += 1;
	}

	return (head);
}
