#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Create a 2 dimensional array of integers
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: Pointer to created array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
