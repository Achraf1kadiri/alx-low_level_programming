#include <stdlib.h>
#include "main.h"

/**
 * *array_range - A function that creates am aray of ints.
 * @min: The min value to be stored.
 * @max: The max value to be stored.
 * Return: A pointer to the newly made array, NULL otherwise.
 */
int *array_range(int min, int max)
{
	int *p;
	int i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	p = malloc(sizeof(int) * s);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
