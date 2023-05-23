#include "main.h"
#include "stdlib.h"

/**
 * free_grid - Free 2 dimensional grid
 * @grid: The 2 dimensional grid to be fred
 * @height: Number of allocated memory in grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
