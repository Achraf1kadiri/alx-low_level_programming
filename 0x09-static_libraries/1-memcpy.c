#include "main.h"
/**
 *_memcpy -  This function copies a memory area.
 *@dest: A pointer to the destination memory.
 *@src: A pointer to the source memory.
 *@n: The number of bytes to copy.
 *
 *Return: A pointer to the destination memory.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
