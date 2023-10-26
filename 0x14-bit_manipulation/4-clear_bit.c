#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * clear_bit - A function to set the value of bit to 0 at index.
 * @n: Argument of the function.
 * @index: Is the index.
 * Return: 1 on success, -1 otherwise.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
