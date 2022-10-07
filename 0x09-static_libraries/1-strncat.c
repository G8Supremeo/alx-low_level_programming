#include "main.h"

/**
  * _strncat - a function that appends src to the dest string
  * @dest: string to append by src
  * @src: source string to append to dest
  * @n: largest number of bytes to append
  * Return: a pointer to the resulting dest string
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, l;

	i = l = 0;

	while (*(dest + i))
	{
		i++;
	}

	while (l < n && *(src + l))
	{
		*(dest + i) = *(src + l);
		i++;
		l++;
	}

	if (l < n)
		*(dest + i) = *(src + l);

	return (dest);
}
