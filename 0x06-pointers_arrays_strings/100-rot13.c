#include "main.h"

/**
  * rot13 - a function that encodes a string using rot13
  * @s: string to be encoded.
  * Return: address of s
  */

char *rot13(char *s)
{
	int i = 0;
	int j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(s + i))
			{
				s[i] = n[j];
				break;
			}
		}
	}
	return (s);
}
