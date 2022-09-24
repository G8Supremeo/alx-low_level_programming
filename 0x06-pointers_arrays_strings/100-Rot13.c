#include "main.h"

/**
  * rot13 - a function that encodes a string using rot13
  * @s: string to be encoded.
  * Return: address of s
  */

char *rot13(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
	{
		while ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z')) 
			{
				s[i] -= 13;
				break;
			}
			s[i] += 13;
			break;
		}
	}
	return (s);
}
