#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates 2 strings.
 * @s1: Argument of the function.
 * @s2: Argument of the function.
 * Return: Pointer to s1,s2 allocated space, NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concate;
	int i, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = x = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[x] != '\0')
		x++;
	concate = malloc(sizeof(char) * (i + x + 1));

	if (concate == NULL)
		return (NULL);
	i = x = 0;
	while (s1[i] != '\0')
	{
		concate[i] = s1[i];
		i++;
	}

	while (s2[x] != '\0')
	{
		concate[i] = s2[x];
		i++, x++;
	}
	concate[i] = '\0';
	return (concate);
}
