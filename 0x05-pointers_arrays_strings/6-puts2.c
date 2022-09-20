#include "main.h"

/**
 * puts2 - this function prints every other character of a
 * string with the first character followed by a new line.
 * @str: the pointer holding the address of the string to be printed
 */

void puts2(char *str)
{
	int index, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (index = 0; index < len; index += 2)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}
