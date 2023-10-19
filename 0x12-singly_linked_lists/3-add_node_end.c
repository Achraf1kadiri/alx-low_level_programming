#include "lists.h"
/**
 * add_node_end – A function that adds a new node at the end of a list.
 * @head: A double pointer to the list.
 * @str: The new str to add to the node.
 * Return: Address of the new element, NULL if it fails.
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp1, *tmp2;
	unsigned int leng = 0;

	if (str == NULL)
		return (NULL);

	tmp1 = malloc(sizeof(list_t));
	if (tmp1 == NULL)
		return (NULL);

	(*tmp1).str = strdup(str);
	if ((*tmp1).str == NULL)
	{
		free(tmp);
		return (NULL);
	}
	while (str[leng])
		leng++;
	(*tmp1).len = leng;
	(*tmp1).next = NULL;

	if (*head == NULL)
	{
		*head = tmp1;
		return (tmp1);
	}

	tmp2 = *head;
	while ((*tmp2).next)
		tmp2 = (*tmp2).next;
	(*tmp2).next = tmp1;
	return (tmp1);
}

