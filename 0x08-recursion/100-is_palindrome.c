#include "main.h"

int checks_palindrome(char *s, int i, int len);
int string_len_recursion(char *s);

/**
 * is_palindrome - Checs if the input is valid.
 * @s: Argument of the function.
 * Return: 1 if yes, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (checks_palindrome(s, 0, string_len_recursion(s)));
}

/**
 * string_len_recursion - Recursively calculates the length of a string.
 * @s: Argument of the function.
 * Return: The length of the string.
 */
int string_len_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_len_recursion(s + 1));
}

/**
 * check_pal - Recursively checks if the string is a palindrome.
 * @s: Argument of the function.
 * @i: An iterator for traction.
 * @len: length of the string.
 * Return: 1 if palindrome, 0 if not
 */
int checks_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (checks_palindrome(s, i + 1, len - 1));
}
