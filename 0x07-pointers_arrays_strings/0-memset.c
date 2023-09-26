#include "main.h"

/**
 * _memset - Fill a memory block with a specified value.
 * @s: The starting address of the memory block to be filled.
 * @b: The value to fill the memory block with.
 * @n: The number of bytes to be modified.
 *
 * Description: This function fills a memory block starting at the given
 * address @s with the specified value @b for the specified number of bytes @n.
 *
 * Return: A modified array with the new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
