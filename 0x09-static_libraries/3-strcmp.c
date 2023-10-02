#include "main.h"
/**
 * _strcmp - Compares 2 strings.
 * @s1: A pointer to the first string.
 * @s2: A pointer to the second string.
 *
 * Return: 0 if the strings are equal, the difference otherwise.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
