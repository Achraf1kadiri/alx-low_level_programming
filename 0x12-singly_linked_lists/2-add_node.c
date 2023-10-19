#include "lists.h"

/**
 * add_node - A function that adds a new node to beginning of a linked list.
 * @head: A double pointer to the list.
 * @str: The new str to add to the node.
 * Return: The address of the new element, NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int len = 0;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	(*n).str = strdup(str);
	(*n).len = len;
	(*n).next = (*head);
	(*head) = n;

	return (*head);
}
