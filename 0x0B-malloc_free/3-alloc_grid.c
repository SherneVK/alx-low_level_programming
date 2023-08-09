#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2D array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the allocated grid, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int e, l;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (e = 0; e < height; e++)
	{
		grid[e] = (int *)malloc(width * sizeof(int));
		if (grid[e] == NULL)
		{
			for (l = 0; l < e; l++)
				free(grid[l]);
			free(grid);
			return (NULL);
		}
	}

	for (e = 0; e < height; e++)
	{
		for (l = 0; l < width; l++)
			grid[e][l] = 0;
	}

	return (grid);
}
