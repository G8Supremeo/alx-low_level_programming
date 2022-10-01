#include "main.h"

/**
  * print_diagsums - A function that prints the sum of the two diagonals
  * of a square matrix of integers
  * @a: array/square matrix of size by size
  * @size: the size of the square matrix
  *
  * Return: void
  */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = (size - 1);
	int sum1 = 0;
	int sum2 = 0;

	while (i < (size * size))
	{
		sum1 += a[i];
		i = i + (size + 1);
	}
	while (j <= (size * (size - 1)))
	{
		sum2 += a[j];
		j = j + (size - 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
