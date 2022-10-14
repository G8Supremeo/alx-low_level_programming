#include "function_pointers.h"

/**
  * int_index - A function that searches for an integer. Returns the index of
  * the first element for which the cmp function does not return 0
  * @size: is the number of elements in the array
  * @cmp: is a pointer to the function to be used to compare values
  * @array: array to be searched
  *
  * Return: index i of the first element or -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			j = (*cmp)(array[i]);

			if (j)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
