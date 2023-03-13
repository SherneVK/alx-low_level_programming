#include "main.h"
#include <stdlib.h>

/**
 * free_grid - unction that frees a 2 dimensional grid
 * @grid: shape created
 * @height: height of grid
 *
 * Return: NULL
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
