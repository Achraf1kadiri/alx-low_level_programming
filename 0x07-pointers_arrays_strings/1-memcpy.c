#include "main.h"

/**
 * _memcpy - Copy a memory area.
 * @dest: The destination memory where data is stored.
 * @src: The source memory from which data is copied.
 * @n: The number of bytes to be copied.
 *
 * Description: This function copies a memory area from @src to @dest
 * for a total of @n bytes.
 *
 * Return: A pointer to the destination memory where data was copied.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
