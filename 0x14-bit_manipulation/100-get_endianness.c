#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_endianness - A function to check for endianness.
 * Return: 0 for big endian, 1 for the other.
 */
int get_endianness(void)
{
	unsigned int a = 1;

	if (*((char *)&a) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
