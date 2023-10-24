#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - A func to sdd a new node to the start of a list.
 * @head: A double pointer to the head of the list.
 * @n: Integer for the new node.
 * Return: The address of the new element, NULL otherwise.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);

	(*p).n = n;
	(*p).next = *head;
	*head = p;
	return (*head);
}
