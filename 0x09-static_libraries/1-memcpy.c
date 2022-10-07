#include "main.h"

/**
  * _memcpy - A function that fills a buffer memory with another copied memory
  * @src: Pointer holding the address of the memory to be copied
  * @dest: pointer holding the address of the memory to be filled
  * @n: first bytes or size of memory area to be copied
  * Return: pointer to the memory area @dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
