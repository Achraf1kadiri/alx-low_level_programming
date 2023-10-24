#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * pop_listint - A fun that deletes the first node of a linked list.
 * @head: A double pointer to the head of the list.
 * Return: The head node's data (N).
 **/

int pop_listint(listint_t **head)
{
	listint_t *p;
	int data;

	if (!(*head != NULL))
		return (0);

	p = *head;
	*head = (*p).next;
	data = (*p).n;
	free(p);
	return (data);
}
