#include "variadic_functions.h"

/**
  * print_strings - A variadic func that prints strings followed by a new line
  * @separator: the string to be printed between numbers
  * @n: is the number of strings passed to the function
  * Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list var_list;
	unsigned int i;
	char *next_str;

	va_start(var_list, n);
	for (i = 0; i < n; i++)
	{
		next_str = va_arg(var_list, char *);

		if (next_str)
			printf("%s", next_str);
		else
			printf("(nil)");

		if ((i < n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(var_list);
}
