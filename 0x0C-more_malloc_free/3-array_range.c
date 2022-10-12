#include "main.h"

/**
  * array_range - A function that creates an array of integers
  * The array created should contain all the values from min (included) to
  * max (included), ordered from min to max
  * If min > max, return NULL, if malloc fails, return NULL
  * @min: minimum integer
  * @max: maximum integer
  * Return: the pointer to the newly created array
  */

int *array_range(int min, int max)
{
	int i, n;
	int *mem;

	n = (max - min + 1);

	mem = malloc(sizeof(int) * n);

	if (mem == NULL)
		return (NULL);

	if (min > max)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		mem[i] = (i + min);
	}

	return (mem);
}
