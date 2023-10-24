#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - A func to add a new node to the very end of the list.
 * @head: A double pointer to the head of the list.
 * @n: Integer for the new node.
 * Return: The address of the new node, NULL otherwise.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tp1, *tp2;

	tp1 = malloc(sizeof(listint_t));
	if (tp1 == NULL)
		return (NULL);

	(*tp1).n = n;
	(*tp1).next = NULL;

	if (*head == NULL)
	{
		*head = tp1;
		return (tp1);
	}

	tp2 = *head;
	while ((*tp2).next)
		tp2 = (*tp2).next;
	(*tp2).next = tp1;
	return (tp1);
}
