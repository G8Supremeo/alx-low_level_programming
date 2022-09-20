#include "main.h"

/**
 * print_rev - this function prints a string to stdout
 * @s: the pointer holding the address of the string to be
 * printed
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}
