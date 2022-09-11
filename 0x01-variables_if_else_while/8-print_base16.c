#include <stdio.h>

#include <stdlib.h>


/**
 * main - Entry point
 *
 * Description: A program that prints all the
 * numbers of base 16 in lowercase
 * using the putchar function thrice
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numb;
	char letter;


	for (numb = 0; numb < 10; numb++)
		putchar((numb % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
	       putchar(letter);


	putchar('\n');


	return (0);
}
