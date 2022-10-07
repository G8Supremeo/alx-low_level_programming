#include "main.h"

/**
  * _strpbrk - A function that searches a string for any of a set of bytes
  * @s: string to be searched or scanned
  * @accept: string containing the characters to match
  *
  * Return: A pointer to the byte in s that matches one of the bytes
  * in accept or NULL if no such byte is found
  */

char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s; s++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);

		}
	}

	return (NULL);
}
