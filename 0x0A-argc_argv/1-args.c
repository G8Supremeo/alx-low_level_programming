#include <stdio.h>

/**
  * main - a program that prints the number of arguments passed
  * The program prints a number, followed by a new line
  * @argc: number of arguments passed into the program
  * @argv: array which holds the names of all the arguments
  * passed into the program
  *
  * Return: Always 0
  */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
