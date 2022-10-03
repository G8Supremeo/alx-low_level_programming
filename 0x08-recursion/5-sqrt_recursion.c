#include "main.h"

/**
  * _sqrt_checker - A function that checks for a perfect square
  * @i: guess integer to determine the perfect square
  * @j: number whose square root is to be determined
  *
  * Return: the square root of j or -1
  */

int _sqrt_checker(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	else if (i * i > j)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_checker((i + 1), j));
	}
}


/**
  * _sqrt_recursion - A function that returns the natural
  * square root of a number
  * @n: natural number whose square root is to be determined
  *
  *
  * Return: -1 or 0
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (_sqrt_checker(1, n));
	}
}
