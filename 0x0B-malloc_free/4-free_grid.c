#include "main.h"

/**
  * free_grid - A function that frees a 2 dimensional grid previously
  * created by the alloc_grid function.
  * @height: height or rows of grid
  * @grid: 2D Array of grid
  *
  * Return: void
  */

void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
