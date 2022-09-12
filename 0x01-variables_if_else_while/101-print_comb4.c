#include <stdio.h>

/**
 * main - printing numbers
 *
 * Description: This code prints all possible
 * different combinations of three digit numbers using
 * putchar *6. No usage of data type char.
 * Numbers are printed in asc order &
 * only the smallest combination of two digits.
 * The three digits must be different
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++)
	{
		for (b = a + 1; b < 9; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar((c % 10) + '0');

				if (a == 7 && b == 8 && c == 9)
				continue;

				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
