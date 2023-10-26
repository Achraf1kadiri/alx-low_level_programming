#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * flip_bits - A func that gets the needed number of bits to flip
 * to go from one number to the other.
 * @n: Argument of the function.
 * @m: Argument of the function.
 * Return: the needed number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a = 0, nfs = 0;
	unsigned long int b = sizeof(unsigned long int) * 8;

	while (a < b)
	{
		if ((m & 1) != (n & 1))
			nfs += 1;
		n = n >> 1;
		m = m >> 1;
		a++;
	}
	return (nfs);
}
