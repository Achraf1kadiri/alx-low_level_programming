#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: The first string to be examined.
 * @accept: The second string containing bytes to search for.
 *
 * Description: This function scans the string @s for the first occurrence
 * of any byte present in the @accept string.
 *
 * Return: A pointer to the matching byte in @s, or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
