#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the pointer to the string
 */

void rev_string(char *s)
{
	int len = 0, index = 0;
	char ext;

	while (s[len] != '\0')
		len++;

	while (index < len--)
	{
		ext = s[index];
		s[index++] = s[len];
		s[len] = ext;
	}
}
