#include <stdio.h>

/**
 * main - printing numbers
 *
 * Description: This code prints all possible
 * combinations of two two-digits numbers using
 * putchar *8. No usage of data type char.
 * Numbers are printed in asc order.
 * The two numbers should be separated by comma & space
 * Numbers should be from 0 to 99
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(32);
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (a == 98 && b == 99)
				continue;

			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');
	return (0);
}
