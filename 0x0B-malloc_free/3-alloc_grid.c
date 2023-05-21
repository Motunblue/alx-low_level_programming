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

	grid = malloc(width * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(height * sizeof(int));
		if (grid[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
