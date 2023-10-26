#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * binary_to_uint - A func to convert a base 2 number to unsigned int.
 * @b: A pointer to a string.
 * Return: The converted number, 0 otherwise.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int cn = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		cn = 2 * cn + (b[i] - '0');
		i++;
	}

	return (cn);
}
