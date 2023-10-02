#include "main.h"
/**
 * _strpbrk - Searches for the first char in the string.
 * @s: A pointer to the string.
 * @accept: A pointer to the matching string.
 * Return: A pointer to the character found, 0 if not.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
		}
	s++;
	}

return ('\0');
}
