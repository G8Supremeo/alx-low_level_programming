#include "main.h"

/**
 * _puts - this function prints a string to stdout
 * @str: the pointer holding the address of the string to be printed
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
