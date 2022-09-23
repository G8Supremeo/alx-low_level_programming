#include "main.h"

/**
  * string_toupper - changes all lowercase letters to uppercase
  * @s: string to change. If character is in lower then subtract 32
  * and increase the iterator variable
  * Return: address of s
  */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) -= ('a' - 'A');
		}

		i++;
	}
	return (s);
}
