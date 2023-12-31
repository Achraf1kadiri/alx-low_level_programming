#include "lists.h"

/**
 * print_listint_safe - A safe version of print list func.
 * @head: A double pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	long int d;

	while (head)
	{
		d = head - (*head).next;
		n += 1;
		printf("[%p] %d\n", (void *)head, (*head).n);
		if (d > 0)
			head = (*head).next;
		else
		{
			printf("-> [%p] %d\n", (void *)(*head).next, (*(*head).next).n);
			break;
		}
	}
	return (n);
}
