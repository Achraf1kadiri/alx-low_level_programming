#include "main.h"
/**
 * _strspn - Gets the length of a substring.
 * @s: A pointer to input string.
 * @accept: A pointer to the string matching s.
 * Return: The number of characters that matched.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
