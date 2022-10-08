#include "main.h"

/**
  * _strdup - A function that returns a pointer to a newly allocated space in
  * memory, which contains a copy of the string given as a parameter
  * @str: string to be copied
  *
  * Return: NULL if str = NULL or if malloc fails, else ptr(mem)
  */

char *_strdup(char *str)
{
	char *mem;
	unsigned int j, i = 0;

	for (j = 0; str[j]; j++)
		;

	mem = malloc((j + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	else if (mem == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < j)
		{
			mem[i] = str[i];
			i++;
		}
		return (mem);
	}
}
