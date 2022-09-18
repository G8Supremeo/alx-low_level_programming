#include "main.h"

/**
 * print_square - this function is going to print a square
 * @size: is the number of times # will be printed
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
