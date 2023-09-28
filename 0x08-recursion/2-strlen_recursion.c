#include "main.h"

/**
 * _strlen_recursion - Recursively calculates the length of a string.
 * @s: Argument of the function.
 * Return: Length of the given string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
