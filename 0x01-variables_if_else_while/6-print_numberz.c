#include <stdio.h>

#include <stdlib.h>


/**
 * main - Entry point
 *
 * Description: A program that prints all the
 * single digit numbers of base 10
 * starting from 0 followed by a new line.
 * Only use putchar twice.
 * The use of variable of type char is
 * not allowed.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numb;


	for (numb = 0; numb < 10; numb++)
		putchar((numb % 10) + '0');


	putchar('\n');


	return (0);
}
