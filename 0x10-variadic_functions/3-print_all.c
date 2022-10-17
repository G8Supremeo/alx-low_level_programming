#include "variadic_functions.h"
/**
  * print_c - prints a char
  * @c: char to be printed
  */

void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
  * print_s - prints a string
  * @s: string to be printed
  */
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
  * print_i - prints an integer
  * @i: integer to be printed
  */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
  * print_f - prints a float
  * @f: float to be printed
  */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
  * print_all - A variadic func that prints anything
  * @format: is a list of types of arguments passed to the function
  * Return: void
  */

void print_all(const char * const format, ...)
{
	unsigned int i, j;

	print_ty ops[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};
	va_list list;
	char *separator = "";

	va_start(list, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (ops[j].ty != NULL)
		{
			if (*(ops[j].ty) == format[i])
			{
				printf("%s", separator);
				ops[j].f(list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
