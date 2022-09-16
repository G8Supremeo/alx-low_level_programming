#include <stdio.h>

/**
 * main - print the sum of even-valued terms in the
 * fibonacci sequence terms not exceeding 4,000,000
 *
 * Return: Always 0.
 */

int main(void)
{
	int y;
	long int fibonacci[50], sum = 2;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (y = 2; y < 50; y++)
	{
		fibonacci[y] = fibonacci[y - 1] + fibonacci[y - 2];
		if ((fibonacci[y] % 2) == 0 && (fibonacci[y] < 4000000))
				sum += fibonacci[y];
	}

	printf("%ld\n", sum);
	return (0);
}
