#include "main.h"

/**
 * print_sign - every number has a sign
 *
 * Description: function that prints the sign of a number
 * @n: single letter input
 *
 * Return: 1 if n > 0, 0 if n is zero & -1 if n < 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}

	else
	{
		_putchar(45);
		return (1);
	}
}
