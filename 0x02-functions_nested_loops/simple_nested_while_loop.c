#include <stdio.h>

/**
 * main - simple nested while loop
 *
 * Description: magic of nested while loop
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0, j;

	while (i < 6)
	{
		j = 0;
		while (j < 4)
		{
			printf("2 ");
			j++;
		}
		printf("\n");
		i++;

	}

	return (0);
}
