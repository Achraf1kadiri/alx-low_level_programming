#include "main.h"

/**
 * _print_rev_recursion - Recursively prints a string in reverse order.
 * @s: Argument of the function.
 * Return: Returns void.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
