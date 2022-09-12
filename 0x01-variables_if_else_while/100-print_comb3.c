#include <stdio.h>

/**
 * main - printing numbers from 0 to 9
 *
 * Description: This code prints all possible
 * different combinations of two digit numbers using
 * putchar *5. No usage of data type char.
 * Numbers are printed in asc order &
 * only the smallest combination of two digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');

			if (a == 8 && b == 9)
				continue;

			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
