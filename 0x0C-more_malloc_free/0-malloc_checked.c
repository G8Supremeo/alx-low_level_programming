#include "main.h"

/**
  * malloc_checked - A function that allocates memory using malloc
  * @b: number of units
  *
  * Return: normal process termination with a status value of 98
  * if malloc fails, else ptr(mem)
  */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
