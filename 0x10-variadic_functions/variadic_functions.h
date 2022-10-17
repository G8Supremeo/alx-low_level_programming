#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
  * struct print - print type with corresponding print function
  * @t: print type
  * @f: print function
  */

typedef struct print
{
	char *ty;
	void (*f)(va_list);
} print_ty;


#endif /* _VARIADIC_FUNCTIONS_H_ */
