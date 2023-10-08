#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - This function uses malloc to allocate memory.
 * @b: Argument of the function.
 * Return: A pointer to memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (p);
}
