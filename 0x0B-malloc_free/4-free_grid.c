#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - a function that frees a 2 dimensional grid
 *
 * @grid: grid to be freed
 * @height: grid height
 *
 * Return: pointer to 2-d array or null if one of param if <= 0
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
