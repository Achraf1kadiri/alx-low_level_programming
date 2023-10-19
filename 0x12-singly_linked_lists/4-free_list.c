#include "lists.h"
/**
 * free_list – A function that frees a linked list.
 * @head: A pointer to the list to be freed.
 */
void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = (*head).next;
		free((*head).str);
		free(head);
		head = t;
	}
}

