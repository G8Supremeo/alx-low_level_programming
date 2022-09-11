#include <stdio.h>

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
char C;

for (C = '0'; C <= '9'; C++)
{
	putchar(C);
}

for (C = 'a'; C <= 'f'; C++)
{
	putchar(C);
}

putchar('\n');
return (0);
}
