#include "main.h"

/**
 * _isupper - Checks if a character is uppercase.
 * @c: Argument of the function.
 *
 * Return: 1 for success, otherwise 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
