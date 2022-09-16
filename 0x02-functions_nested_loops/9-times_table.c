#include "main.h"

/**
 * times_table - This function prints the 9 times table
 * starting from 0
 * Return: Always 0.
 */

void times_table(void)
{
	int j = 0, m, S;

	while (j <= 9)
	{
		_putchar('0');

		m = 1;

		while (m <= 9)
		{
			_putchar(',');
			_putchar(' ');

			S = j * m;

			if (S <= 9)
				_putchar(' ');
			else
				_putchar((S / 10) + '0');

			_putchar((S % 10) + '0');
			m++;
		}
		_putchar('\n');
		j++;
	}

}
