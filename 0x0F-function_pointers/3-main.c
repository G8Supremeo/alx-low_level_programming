#include "3-calc.h"

/**
  * main -mini calculator program
  * @argc: number of arguments passed
  * @argv: array of pointers to arguments
  *
  * Return: always 0
  */

int main (int argc, char *argv[])
{
	int a, b, res;

	int (*f)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
	}
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = f(a, b);
	printf("%d\n", res);
	return(0);
}
