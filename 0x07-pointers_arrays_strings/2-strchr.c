#include "main.h"

/**
 * _strchr - Locate the first occurrence of a character in a string.
 * @s: The input string to search within.
 * @c: The character to search for.
 *
 * Description: This function searches for the first occurrence of
 * the character @c in the string @s.
 *
 * Return: 0 for success.
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
