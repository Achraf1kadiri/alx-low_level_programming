#include "main.h"

int real_is_prime_number(int n, int i);

/**
 * is_prime_number - Checks if the input is valid.
 * @n: Argument of the function.
 * Return: Calls a recursive function.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_is_prime_number(n, n - 1));
}

/**
 * real_is_prime_number - Recursively checks if a number is prime or not.
 * @n: Argument of the function.
 * @i: An iterator for the calculation.
 * Return: 1 if n is a prime number, 0 if not.
 */
int real_is_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_is_prime_number(n, i - 1));
}

