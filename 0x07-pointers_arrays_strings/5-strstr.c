#include "main.h"

/**
  * _strstr - A function that locates a substring
  * @haystack: Main string to be searched or scanned
  * @needle: small string to be searched with-in haystack string
  *
  * Return: A pointer to the first occurrence in haystack string of any of the
  * entire sequence of characters specified in needle,
  * or a NULL pointer if the sequence is not present in haystack
  */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;

	while (needle[j] != '\0')
		j++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != j)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
