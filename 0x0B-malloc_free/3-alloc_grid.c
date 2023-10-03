#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - A function that points to a 2dim array of integers.
 * @width: Argument of the function.
 * @height: Argument of the function.
 * Return: A pointer to the array, NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **pp;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	pp = malloc(sizeof(int *) * height);

	if (pp == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		pp[a] = malloc(sizeof(int) * width);

		if (pp[a] == NULL)
		{
			for (; a >= 0; a--)
				free(pp[a]);

			free(pp);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			pp[a][b] = 0;
	}

	return (pp);
}
