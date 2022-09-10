#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the
 * alphabet in lowercase and then in uppercase,
 * followed by a new
 * line using only putchar thrice.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;


	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');


	return (0);
}
