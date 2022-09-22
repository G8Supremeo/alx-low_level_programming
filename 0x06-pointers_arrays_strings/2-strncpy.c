#include "main.h"

/**
  * _strncpy - a function that copies n bytes of src to the dest string
  * @dest: string to copy to
  * @src: source string being copied
  * @n: largest number of bytes to copy
  * Return: a pointer to the resulting dest string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
