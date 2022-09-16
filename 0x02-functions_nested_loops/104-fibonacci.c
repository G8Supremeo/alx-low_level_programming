#include <stdio.h>

/**
 * main - print the 1st 98 fibonacci numbers
 * starting with 1 & 2 followed by a new line
 *
 * Return: Always 0.
 */

int main(void)
{
	int count;
	unsigned long fibo1 = 0, fibo2 = 1, sum;

	for (count = 0; count < 98; count++)
	{
		sum = fibo1 + fibo2;
		printf("%lu", sum);

		fibo1 = fibo2;
		fibo2 = sum;

		if (count == 97)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
