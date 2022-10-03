#include "main.h"

/**
  * factorial - A function that returns the factorial of a given number
  * @n: number whose factorial is to be determined
  *
  * Return: Always 1 (success)
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
