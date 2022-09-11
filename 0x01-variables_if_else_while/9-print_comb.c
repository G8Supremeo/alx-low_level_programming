#include <stdio.h>

/**
 * main - printing numbers from 0 to 9
 *
 * Description: This code prints all possible
 * combinations of single-digit numbers using
 * putchar *4. No usage of data type char.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int r;

	for (r = 48; r < 58; r++)
	{
		putchar(r);
		if (r < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
