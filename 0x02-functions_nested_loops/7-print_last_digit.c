#include "main.h"

/**
 * print_last_digit - this function will print the last digit of a number
 *
 * @r: number whose last digit is to be printed
 *
 * Return: The value of the last digit
 */

int print_last_digit(int r)
{
	int last_digit;

	last_digit = (r % 10);

	if (last_digit < 0)
	{
		last_digit *= -1;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
