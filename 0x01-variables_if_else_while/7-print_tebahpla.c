#include <stdio.h>

#include <stdlib.h>


/**
 * main - Entry point
 *
 * Description: A program that prints the
 * alphabet in lowercase in reverse order,
 * followed by a new
 * line using only putchar twice.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase;


	for (lowercase = 'z'; lowercase >= 'a'; lowercase--)
		putchar(lowercase);

	putchar('\n');


	return (0);
}
