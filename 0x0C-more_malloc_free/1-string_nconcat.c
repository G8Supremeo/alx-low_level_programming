#include "main.h"

/**
  * string_nconcat - A function that concatenates two strings
  * If n is greater or equal to the length of s2 then use the entire string s2
  * @s1: string one to copy
  * @s2: string two to copy
  * @n: nbytes of s2 to be copied
  *
  * Return: NULL if malloc fails, else ptr(mem) which contains s1, followed
  * by the first n bytes of s2, and null terminated
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int i, j, c;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	mem = malloc(sizeof(char) * (i + j + 1));
	if (mem == NULL)
		return (NULL);
	for (c = 0; c < i; c++)
	{
		mem[c] = s1[c];
	}
	for (c = 0; c < j; c++)
	{
		mem[c + i] = s2[c];
	}
	mem[i + j] = '\0';
	return (mem);
}
