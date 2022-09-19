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
		for (a = 0; a < size; a++)
		{
			for (b = 0; b <= a; b++)
			{
				_putchar(32);
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
