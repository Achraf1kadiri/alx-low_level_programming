#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - A func to calculate the sum of all the data (N) in a list.
 * @head: A double pointer to the head of the list.
 * Return: The calculated sum.
 **/

int sum_listint(listint_t *head)
{
	int sigma = 0;

	while (head != NULL)
	{
		sigma += (*head).n;
		head = (*head).next;
	}
	return (sigma);
}
