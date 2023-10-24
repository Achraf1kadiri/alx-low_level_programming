#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - A func to delete the node at index of the list.
 * @head: A double pointer to the head of the list.
 * @index: index of the node to delete.
 * Return: 1 on success, -1 otherwise.
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *actual, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*(*head)).next;
		free(*head);
		*head = next;
		return (1);
	}
	actual = *head;
	for (i = 0; i < index - 1; i++)
	{
		if ((*actual).next == NULL)
			return (-1);
		actual = (*actual).next;
	}
	next = (*actual).next;
	(*actual).next = (*next).next;
	free(next);
	return (1);
}
