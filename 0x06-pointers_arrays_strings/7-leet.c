#include "main.h"

/**
  * leet - a function that encodes a string into 1337
  * @s: string to be encoded.
  * If character is in lower then subtract 32
  * and increase the iterator variable
  * Return: address of s
  */

char *leet(char *s)
{
	int i = 0;
	int j;
	char a[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(s + i) == a[j])
			{
				s[i] = n[j];
			}
		}
	}
	return (s);
}
