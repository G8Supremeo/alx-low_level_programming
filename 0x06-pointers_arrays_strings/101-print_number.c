#include "main.h"

/**
  * print_number - a function that prints out an integer
  * @n: integer to be printed using _putchar.c
  * Return: Always 0 (Success)
  */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	else if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
