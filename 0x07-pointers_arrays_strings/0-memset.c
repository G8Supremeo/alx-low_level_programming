#include "main.h"

/**
  * _memset - A function that fills a buffer memory with a constant byte
  * @s: Pointer holding the address of the memory to be filled
  * @b: constant byte to fill the memory
  *
  * Return: pointer to the memory area @s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
