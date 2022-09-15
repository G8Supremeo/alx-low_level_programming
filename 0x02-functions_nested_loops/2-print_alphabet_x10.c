#include "main.h"

/**
 * print_alphabet_x10 - check description
 *
 * Description:print alphabet from a-z x10.
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 97;

		while (j < 123)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}

}
