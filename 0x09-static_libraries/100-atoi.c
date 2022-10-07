#include "main.h"

/**
 * _atoi - This function converts a string to an integer
 * @s: a pointer to a string
 * Return: numbers in the string & if not, 0
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	char null_flag = 0;

	while (*s)
	{
		if (*s == 45)
			sign *= -1;

		if (*s >= 48 && *s <= 57)
		{
			null_flag = 1;
			num = (num * 10) + (*s - 48);
		}

		else if (null_flag)
			break;
		s++;
	}

	if (sign < 0)
		num *= -1;

	return (num);
}
