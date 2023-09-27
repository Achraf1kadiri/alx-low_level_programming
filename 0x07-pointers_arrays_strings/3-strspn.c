#include "main.h"

/**
 * _strspn - Calculate the length of a prefix substring.
 * @s: The initial segment to be analyzed.
 * @accept: The set of accepted characters.
 *
 * Description: This function determines the length of the maximum prefix
 * substring in @s that only contains characters found in the @accept set.
 *
 * Return: The number of characters in the prefix substring that are part
 *         of the @accept set.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		k = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				k = 0;
				break;
			}
		}
		if (k == 1)
			break;
	}
	return (i);
}
