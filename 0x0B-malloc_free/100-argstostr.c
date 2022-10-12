#include "main.h"

/**
  * argstostr - A function that concatenates all the arguments of a program
  * @ac: number of arguments passed into the program
  * @av: argument vector
  *
  * Return: NULL if ac == 0 || av == NULL, if malloc fails,
  * else return pter to a new string
  */

char *argstostr(int ac, char **av)
{
	int i, j, z = 0, c = 0;
	char *mem;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			z++;
		}
		z++;
	}
	z++;
	mem = malloc(sizeof(char) * z);
	if (mem == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
			{
				mem[c] = av[i][j];
				c++;
			}
			mem[c] = '\n';
			c++;
		}
	}
	mem[c] = '\0';
	return (mem);
}
