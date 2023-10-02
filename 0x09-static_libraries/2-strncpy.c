#include "main.h"
/**
 * _strncpy - Copy n number of characters of a string.
 * @dest: A pointer to the destination.
 * @src: A pointer to the source.
 * @n: Max number of characters to copy.
 *
 * Return: The destination.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
