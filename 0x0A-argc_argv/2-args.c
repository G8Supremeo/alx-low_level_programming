#include <stdio.h>

/**
  * main - a program that prints all arguments it receives.
  * All arguments should be printed, including the first one
  * only print one argument per line, ending with a new line
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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
