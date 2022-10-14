#include "3-calc.h"

/**
  * op_add - adds two numbers
  * @a: first number
  * @b: second number
  * Return: always 0
  */

int op_add(int a, int b)
{
	printf("%d\n", (a + b));
	return (0);
}

/**
  * op_sub - sub of two numbers
  * @a: first number
  * @b: second number
  * Return: always 0
  */

int op_sub(int a, int b)
{
	printf("%d\n", (a - b));
	return (0);
}

/**
  * op_mul - multiply two numbers
  * @a: first number
  * @b: second number
  * Return: always 0
  */

int op_mul(int a, int b)
{
	printf("%d\n", (a * b));
	return (0);
}

/**
  * op_div - division of two numbers
  * @a: first number
  * @b: second number
  * Return: always 0
  */

int op_div(int a, int b)
{
	printf("%d\n", (a / b));
	return (0);
}

/**
  * op_mod - a modulus b
  * @a: first number
  * @b: second number
  * Return: always 0
  */
int op_mod(int a, int b)
{
	printf("%d\n", (a % b));
	return (0);
}
