#include "main.h"

/**
 * print_line - this function is going to print a line
 * @n: is the number of times _ will be printed
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
