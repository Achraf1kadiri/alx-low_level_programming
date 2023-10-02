#include "main.h"

/**
 * _isalpha - Checks if a character is lowercase or uppercase.
 * @c: Argument of the function.
 * Return: 1 if yes, 0 if not.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
