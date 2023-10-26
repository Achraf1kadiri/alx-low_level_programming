#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary - A function to print the binary representation of an int.
 * @n: Argument of the function.
 */

void print_binary(unsigned long int n)
{
	int i = 63, index = 0;
	unsigned long int actual;

	while (i >= 0)
	{
		actual = n >> i;

		if (actual & 1)
		{
			_putchar('1');
			index++;
		}
		else if (index)
			_putchar('0');

		i--;
	}

	if (!index)
		_putchar('0');
}
