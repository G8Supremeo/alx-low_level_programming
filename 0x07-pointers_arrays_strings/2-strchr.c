#include "main.h"

/**
  * _strchr - A function that locates a character in a string
  * @s: string pointer to be searched, for the desired character c
  * @c: character to be searched for, in the string s
  *
  * Return: pointer to the first occurrence of char c in s
  */

char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
