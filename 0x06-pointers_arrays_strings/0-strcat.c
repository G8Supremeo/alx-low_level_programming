#include "main.h"

/**
  * _strcat - a function that concatenates two strings
  * @dest: destination string
  * @src: source string
  * Return: a pointer to the resulting dest string
  */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
		dest_len++;
	}
	return (dest);
}
