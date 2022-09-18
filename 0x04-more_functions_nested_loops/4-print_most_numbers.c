#include "main.h"

/**
 * print_numbers - this function prints the numbers, 
 * from 0 to 9 except 2 & 4
 */

void print_numbers(void)
{
	int digits;

	for (digits = 0; digits <= 9; digits++)
	{
		if (digits == 2 || digits == 4)
		{
			continue;
		}
		else
		{
			_putchar(digits + '0');
		}
	}

	_putchar('\n');
}
