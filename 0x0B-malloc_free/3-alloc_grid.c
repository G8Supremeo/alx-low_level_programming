#include "main.h"

/**
  * alloc_grid - A function that returns a pointer to a 2 dimensional array
  * of integers. Each element of the grid is initialized to 0
  *
  * @width: width of the grid
  * @height: height of the grid
  *
  * Return: NULL if width or height is 0 or -ve or if malloc fails,
  * else ptr(mem)
  */

int **alloc_grid(int width, int height)
{
	int **mem;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	mem = (int **)malloc(height * sizeof(int *));
	if (mem == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			mem[i] = (int *)malloc(width * sizeof(int));
			if (mem[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(mem[j]);
				free(mem);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				mem[i][j] = 0;
			}
		}
	}
	return (mem);
}
