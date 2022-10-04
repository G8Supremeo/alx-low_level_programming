#include <stdio.h>

/**
  * main - a program that prints its name, followed by a new line
  * If the exec program is renamed, it will print the new name
  * without having to compile the c file again
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
