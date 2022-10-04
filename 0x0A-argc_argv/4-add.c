#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
  * main - a program that adds +ve numbers.
  * the program should print the result, followed
  * by a new line, assuming that the numbers and
  * the result can be stored in an integer
  * If no number is passed to the program, print 0, followed by \n
  * If one of the number contains symbols that are not digits,
  * print Error, followed by a new line, and return 1
  *
  * @argc: number of arguments passed into the program
  * @argv: array which holds the names of all the arguments
  * passed into the program
  *
  * Return: 1 if Error else Always 0
  */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;


	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
