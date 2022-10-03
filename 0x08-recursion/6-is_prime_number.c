#include "main.h"

/**
  * _prime_checker - A function that checks for prime numbers
  * @i: factor check
  * @j: possible prime number
  *
  * Return: 1 if j prime, or 0 if not
  */

int _prime_checker(int i, int j)
{
	if (j < 2 || j % i == 0)
	{
		return (0);
	}
	else if (i > j / 2)
	{
		return (1);
	}
	else if (j == 2)
	{
		return (1);
	}
	else
	{
		return (_prime_checker((i + 1), j));
	}
}


/**
  * is_prime_number - A function that seaches if n is a prime number
  *
  * @n: natural number > 1 that is not a product of twosmaller
  *
  * Return: 1 if prime or 0 if not
  */

int is_prime_number(int n)
{
	return (_prime_checker(2, n));
}
