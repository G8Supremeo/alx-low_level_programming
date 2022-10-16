#include "variadic_functions.h"

/**
  * print_numbers - A variadic func that prints numbers followed by a new line
  * @separator: the string to be printed between numbers
  * @n: is the number of integers passed to the function
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list var_list;
	unsigned int i;
	int next_arg;

	va_start(var_list, n);
	for (i = 0; i < n; i++)
	{
		next_arg = va_arg(var_list, int);
		printf("%d", next_arg);
		if ((i < n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(var_list);
}
