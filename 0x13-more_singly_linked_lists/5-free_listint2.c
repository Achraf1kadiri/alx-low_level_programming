#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - a func that frees the list.
 * @head: A double pointer to the head of the list.
 **/

void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;

	for (; *head != NULL; *head = p)
	{
		p = (*(*head)).next;
		free(*head);
	}
}
