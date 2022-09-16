#include "main.h"

/**
 * print_times_table - this function prints the n
 * times table, starting from 0.
 *
 * @n: nth table
 *
 */

void print_times_table(int n)
{
	int num1, num2, prod;

	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar('0');

			for (num2 = 1; num2 <= n; num2++)
			{
				_putchar(' ');
				_putchar(',');

				prod = (num1 * num2);

				if (prod <= 9 || prod <= 99)
					_putchar(' ');


				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod >= 10 && prod <= 99)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
