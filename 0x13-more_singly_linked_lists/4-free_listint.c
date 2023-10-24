#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - A function that frees the list.
 * @head: A pointer to the head of the list.
 **/
void free_listint(listint_t *head)
{
	listint_t *actual;

	for (actual = head; actual != NULL;)
	{
		listint_t *temp = (*actual).next;

		free(actual);
		actual = temp;
	}
}

