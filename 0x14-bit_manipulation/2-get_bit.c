#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit - A func that returns the value of a bit at a given index.
 * @n: Argument of the function.
 * @index: Is the index.
 * Return: The value of the bit at index, -1 otherwise.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	b = (n >> index);
	if (index > 32)
	return (-1);
	return (b & 1);
}
