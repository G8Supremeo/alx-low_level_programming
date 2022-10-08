#include "main.h"

/**
  * create_array - A function that creates an array of chars,
  * initializes it with a specific char
  * @size: number of elements
  * @c: data type in the buffer
  *
  * Returns NULL if size is 0 or if it fails, else ptr
  */

char *create_array(unsigned int size, char c)
{
	char *mem;
	unsigned int i = 0;

	mem = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else if (mem == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			mem[i] = c;
			i++;
		}
		return (mem);
	}
}
