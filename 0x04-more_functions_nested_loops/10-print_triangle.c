#include "main.h"

/**
 * print_triangle - a function that prints a triangle on the screen
 * @size: the size of the triangle with # character
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
				if (b <= size - a)
				{
					_putchar(32);
				}
				else
				{
					_putchar(35);
				}
			_putchar('\n');
		}
	}
}
