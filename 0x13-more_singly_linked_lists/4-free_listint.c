#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - A func that frees the list.
 * @head: A double pointer to the head of the list.
 **/

void free_listint(listint_t *head)
{
	listint_t *temp1, *temp2;

	temp1 = head;
	while (!(temp1 = NULL))
	{
		temp2 = (*temp1).next;
		free(temp1);
		temp1 = temp2;
	}
}
