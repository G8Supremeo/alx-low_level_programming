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
	for (; *haystack != '\0'; haystack++)
	{
		char *main = haystack;
		char *sub = needle;

		while (*main == *sub && *sub != '\0')
		{
			main++;
			sub++;
		}
		if (*sub == '\0')
			return (haystack);
	}
	return (NULL);
}
