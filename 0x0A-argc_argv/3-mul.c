#include <stdio.h>
#include <stdlib.h>

/**
  * main - a program that multiplies two numbers.
  * the program should print the result of the multiplication, followed
  * by a new line, assuming that the two numbers and
  * result of the multiplication
  * can be stored in an integer. If the program does not receive two arguments,
  * the program should print Error, followed by a new line, and return 1
  *
  * @argc: number of arguments passed into the program
  * @argv: array which holds the names of all the arguments
  * passed into the program
  *
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int i;
	int Mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			Mul *= atoi(argv[i]);
		}
		printf("%d\n", Mul);
	}
	else
	{
		printf("Error\n");
	}

	return (1);
}
