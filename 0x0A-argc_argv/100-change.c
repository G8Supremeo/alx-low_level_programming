#include <stdio.h>
#include <stdlib.h>

/**
  * main - A program that prints the minimum number of coins to
  * make change for an amount of money.
  * where cents is the amount of cents you need to give back
  * if the number of arguments passed to the program is not exactly 1,
  * print Error, followed by a new line, and return 1
  * If the number passed as the argument is -ve, print 0, & \n
  * unlimited number of coins of values 25, 10, 5, 2, & 1 cent
  *
  * @argc: number of arguments passed to the function
  * @argv: argument vector of pointers to strings
  *
  * Return: 0 if no errors, else 1
  *
  */

int main(int argc, char *argv[])
{
	int min_num_of_coins = 0, num_of_coins, amount, i;
	int coins_value[5] = {25, 10, 5, 2, 1};

	amount = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (amount < 0)
		puts("0");
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (coins_value[i] <= amount)
			{
				num_of_coins = (amount / coins_value[i]);
				min_num_of_coins += num_of_coins;
				amount -= (num_of_coins * coins_value[i]);
				if (amount == 0)
				{
					printf("%d\n", min_num_of_coins);
					break;
				}
			}
		}
	}
	return (0);
}
