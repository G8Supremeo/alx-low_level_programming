#include "function_pointers.h"

/**
  * array_iterator - A function that executes a function given as a parameter
  * on each element of an array.
  * @size: is the size of the array
  * @action: pointer to the function to be executed
  * @array: array to be printed
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
