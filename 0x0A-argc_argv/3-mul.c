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
  * Return: 1 if Error else Always 0
  */

int main(int argc, char *argv[])
{
	int x, y, z;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		z = (x * y);

		printf("%d\n", z);
	}

	return (0);
}
