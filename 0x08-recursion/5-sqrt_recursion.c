#include "main.h"

int real_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Checs if the input is valid.
 * @n: Argument of the function.
 * Return: Calls a recursive function.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - Recursively calculates the square root of an integer.
 * @n: Argument of the function.
 * @i: An iterator for the calculation.
 * Return: Result of the calculation.
 */
int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_sqrt_recursion(n, i + 1));
}
