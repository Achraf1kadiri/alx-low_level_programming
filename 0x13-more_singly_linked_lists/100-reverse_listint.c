#include "lists.h"

/**
 * reverse_listint - A func to reverse a list.
 * @head: A double pointer to the head of the list.
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	for (; *head; *head = next)
	{
		next = (*(*head)).next;
		(*(*head)).next = previous;
		previous = *head;
	}

	*head = previous;

	return (*head);
}

