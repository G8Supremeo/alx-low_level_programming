#include <stdio.h>

#include <stdlib.h>


/**
 * main - Entry point
 *
 * Description: A program that prints all the
 * single digit numbers of base 10
 * starting from 0 followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numb;


	for (numb = 0; numb < 10; numb++)
		printf("%d", numb);


	printf("\n");


	return (0);
}
