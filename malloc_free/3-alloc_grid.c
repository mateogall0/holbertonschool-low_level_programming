#include "main.h"

/**
 * alloc_grid - alloc 2 dimensional grid
 * @with: int
 * @height: int
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || width <= 0 )
		return (0);
	grid = (int **) malloc(height * sizeof(int *));
	for (i = 0; i < width; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));
		for (j = 0; grid[i][j]; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
