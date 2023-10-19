#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: A pointer to the list to be freed.
 *
 * Description: This function frees a linked list.
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
