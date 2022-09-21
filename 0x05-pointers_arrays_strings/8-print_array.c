#include "main.h"

/**
 * print_array - a function that prints n elements of an array of
 * integers, followed by a new line.
 * @a: an array of n elements
 * @n: elements of the array
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);


	if (index == n - 1)
		continue;

	printf(", ");
	}

	printf("\n");
}
