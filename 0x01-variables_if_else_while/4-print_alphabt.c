#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the
 * alphabet except q & e in lowercase, followed
 * by a new line using only putchar twice.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase;


	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase != 'e' && lowercase != 'q')
			putchar(lowercase);
	}

	putchar('\n');


	return (0);
}
