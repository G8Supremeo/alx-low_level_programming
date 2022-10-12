#include "main.h"

/**
  * _calloc - A function that allocates memory for an array of nmemb elements
  * of size bytes each, using malloc.
  * The allocated memory is initialized to zero
  * if nmemb or size is 0, then _calloc returns NULL
  * @nmemb: number of elements in the array
  * @size: size in bytes of the elements
  *
  * Return: void pointer to allocated memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		mem[i] = 0;
	}
	return (mem);
}
