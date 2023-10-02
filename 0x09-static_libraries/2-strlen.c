#include "main.h"
/**
 * _strlen - Finds the length of a string.
 * @s: A pointer to the string.
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int string_length = 0;

	while (*s != '\0')
	{
		string_length++;
		s++;
	}

	return (string_length);
}
