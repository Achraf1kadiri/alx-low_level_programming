#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - A func to insert a new node at a given position.
 * @head: A double pointer to the head of the list.
 * @idx: Index of the list where the new node will be added.
 * @n: The data in the new node.
 * Return: The address of the new node, NULL otherwise.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nn, *p;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	p = *head;
	for (; i < idx - 1 && p != NULL; i++)
		p = (*p).next;
	if (p == NULL)
		return (NULL);
	}
	nn = malloc(sizeof(listint_t));
	if (nn == NULL)
		return (NULL);
	(*nn).n = n;
	if (idx == 0)
	{
		(*nn).next = *head;
		*head = nn;
		return (nn);
	}
	(*nn).next = (*p).next;
	(*p).next = nn;
	return (nn);
}
