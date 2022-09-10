#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program will assign a
 * random number to the variable n each time
 * it is executed. Complete the source code in
 * order to print whether the number stored in
 * the variable n is positive or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z;

	srand(time(0));
	z = rand() - RAND_MAX / 2;

/* This is the loop over the random number */
	if (z > 0)
	{
		printf("%d is positive\n", z);
	}
	else if (z == 0)
	{
		printf("%d is zero\n", z);
	}
	else
	{
		printf("%d is negative\n", z);
	}

	return (0);
}
