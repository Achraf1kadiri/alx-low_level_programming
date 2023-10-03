#include "main.h"
#include <stdlib.h>
/**
 * argstostr - A function that concatenates all args of the program.
 * @ac: Argument of the function.
 * @av: A pointer to an array of strings.
 * Return: A pointer to a string, NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int a, b, x = 0, y = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			y++;
	}
	y += ac;

	s = malloc(sizeof(char) * y + 1);
	if (s == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
	for (b = 0; av[a][b]; b++)
	{
		s[x] = av[a][b];
		x++;
	}
	if (s[x] == '\0')
	{
		s[x++] = '\n';
	}
	}
	return (s);
}
