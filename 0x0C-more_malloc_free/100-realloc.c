#include "main.h"

/**
  * _realloc - A function that reallocates a memory block using malloc & free
  * @ptr: pointer to previously allocated memory
  * @old_size: size of allocated space for ptr
  * @new_size: size of newly allocated space
  *
  * Return: pointer to newly allocated memory, or NULL if failure
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p, *oldm = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			p[i] = oldm[i];
		}
	}
	free(ptr);
	return (p);
}
