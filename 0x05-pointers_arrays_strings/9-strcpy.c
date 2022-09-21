#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer
 * pointed to by dest.
 * @dest: a buffer to receive the copied string
 * @src: source string to copy
 * Return: the copied string  pointed to by dest in the buffer
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;

	}

	return (dest);
}
