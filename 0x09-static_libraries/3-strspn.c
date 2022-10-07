#include "main.h"


/**
  * _strspn - A function that gets the length of a prefix substring
  * @s: string with an initial segment of concern
  * @accept: string whose full length is contained in string s
  *
  * Return: number of bytes in the initial segment of s which consist
  * only of bytes from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] != 32))
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
