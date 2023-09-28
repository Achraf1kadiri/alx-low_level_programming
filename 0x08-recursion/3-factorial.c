#include "main.h"

/**
 * factorial - Recursively calculates the factorial of an integer.
 * @n: Argument of the function.
 * Return: n factorial or -1 if n is negative.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
