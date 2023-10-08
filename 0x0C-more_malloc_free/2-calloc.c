#include <stdlib.h>
#include "main.h"

/**
 * *_memoryfill - A helping func to fill memory with a const.
 * @m: The memory to fill.
 * @c: The copied character.
 * @n: The number of copy times.
 * Return: A pointer to the memory.
 */
char *_memoryfill(char *m, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		m[i] = c;
	}

	return (m);
}

/**
 * *_calloc - Uses malloc to allocate memory for an array.
 * @nmemb: The elements of the array.
 * @size: The size bytes of the element.
 * Return: A pointer to rhe memory. NULL otherwise.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memoryfill(p, 0, nmemb * size);

	return (p);
}
