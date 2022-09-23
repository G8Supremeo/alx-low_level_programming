#include "main.h"

/**
  * _strcmp - a function that compares two strings
  * @s1: first string
  * @s2: secong string
  * Return: the difference of s1 & s2
  */

int _strcmp(char *s1, char *s2)
{
	int diff = (*s1 - *s2);

	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (diff);
		}
		s1++, s2++;
	}
	return (*s1 - *s2);
}
