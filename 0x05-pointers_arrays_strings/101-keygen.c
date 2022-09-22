#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randompg(int X)
{
	int c = 0;
	int randomizer = 0;

	srand((unsigned int)(time(NULL)));

	char numbers[] = "012356789";
	char letter[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTER[] = "ABCWDEFXGHIYJKYLMSQTUZNOPRV";
	char symbols[] = "!@#$%^&\\*?>/<\"|/+-";

	char password[X];

	randomizer = rand() % 4;

	for (c = 0; c < X; c++)
	{
		if (randomizer == 1)
		{
			password[c] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[c]);
		}
		else if (randomizer == 2)
		{
			password[c] = symbols[rand() % 18];
			randomizer = rand() % 4;
			printf("%c", password[c]);
		}
		else if (randomizer == 3)
		{
			password[c] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[c]);
		}
		else
		{
			password[c] = letter[rand() % 26];
			randomizer = rand() %  4;
			printf("%c", password[c]);
		}
	}
}

int main()
{
int X = 12;

randompg(X);
printf("\n");
return 0;
}
