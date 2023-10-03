#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars.
 * @size: The size of the array.
 * @c: Argument of the function.
 * Return: A pointer to the array, NULL otherwise.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
