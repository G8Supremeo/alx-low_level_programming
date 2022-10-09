#include "main.h"

/**
  * str_concat - A function that concatenates two strings
  * the returned pointer should pt to a newly allocated space in
  * memory, which contains the contents of s1, followed by that of s2 & '\0'
  * @s1: string to be concatenated to s2
  * @s2: second string
  *
  * Return: NULL if s1 0r s2 = NULL or if malloc fails, else ptr(mem)
  */

char *str_concat(char *s1, char *s2)
{
	char *mem;
	unsigned int i, j, k, l, m, n;

	if (s1 == NULL)
		i = 0;
	else
		for (i = 0; s1[i]; i++)
			;

	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	k = i + j + 1;
	n = j;
	mem = malloc(k * sizeof(char));
	if (mem == NULL)
	{
		return (NULL);
	}
	else
	{
		for (l = 0; l < i; l++)
		{
			mem[l] = s1[l];
		}
		j = 0;
		for (m = l; m < (i + n); m++)
		{
			mem[m] = s2[j];
			j++;
		}
	}
	mem[i + j] = '\0';
	return (mem);
}
