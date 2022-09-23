#include "main.h"

/**
  * cap_string - a function that capitalizes all the words of a string
  * @s: string to change. If character is in lower then subtract 32
  * and increase the iterator variable
  * Return: address of s
  */

char *cap_string(char *s)
{
	int i = 0;
	int j;
	char spa[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
			{
				*(s + i) -= 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (spa[j] == (s[i - 1]))
					{
						(s[i] = s[i] - 32);
					}
				}
			}
		}

		i++;
	}
	return (s);
}
