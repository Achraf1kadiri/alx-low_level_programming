#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - A function that frees a 2dim grid.
 * @grid: A 2 dimensional Grid.
 * @height: The dimension of the grid.
 * Return: Returns a void.
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
