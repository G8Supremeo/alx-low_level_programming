#include "main.h"

/**
  * _strcat - a function that concatenates two strings
  * @dest: destination string
  * @src: source string
  * Return: a pointer to the resulting dest string
  */

char *_strcat(char *dest, char *src)
{
	int i, l;

	i = l = 0;

	while (*(dest + i))
	{
		i++;
	}

	while ((*(dest + i) = *(src + l)))
	{
		i++;
		l++;
	}

	return (dest);
}
