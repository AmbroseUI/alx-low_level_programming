#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - initialize a 2-d array of variable dimensions
 *
 * @width: array rows
 * @height: array columns
 *
 * Return: pointer to 2-d array or null if one of param if <= 0
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **) malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(width * sizeof(int));

		if (array[i] == NULL)
		{
			free(array);
			for (j = 0; j <= i; j++)
				free(array[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
