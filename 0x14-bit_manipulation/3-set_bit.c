#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * set_bit - A function to set the value of a bit to 1 at index.
 * @n: The bit that will be set to 1.
 * @index: Is the index.
 * Return: 1 on success, -1 if it fails.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	*n |= (1 << index);
	return (1);
}
