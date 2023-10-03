#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - A function that returns a pointer to the newly allocated space.
 * @str: Argument of the function.
 * Return: NULL if str = NULL.
 */
char *_strdup(char *str)
{
	char *p;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		p[j] = str[j];

	return (p);
}
