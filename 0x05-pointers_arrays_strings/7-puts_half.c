#include "main.h"

/**
 * puts_half - this function prints half of a string, followed by a new line
 * @str: the string to be printed.
 * n: if the string characters is odd, the function should
 * print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 */

void puts_half(char *str)
{
	int len = 0;
	int n;
	int index = 0;

	while (str[index++])
		len++;

	if ((len % 2) == 0)
		n = (len / 2);
	else
		n = ((len + 1) / 2);

	for (index = n; index < len; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
