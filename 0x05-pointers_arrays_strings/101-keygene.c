// C program for 101-crackme
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// A function that randomly generates password of length X

void randomPasswordGeneration(int X)
{
// Initialize a counter
	int c = 0;

	int randomizer = 0;

	// Seeding the random-number generator with the current time 
	// so thst the password will be different every time
	
	srand((unsigned int)(time(NULL)));

	// Array of numbers
	char numbers[] = "012356789";

	// Array of small alphabelts
	char letter[] = "abcdefghijklmnopqrstuvwxyz";

	// Array of capital alphabets
	char LETTER[] = "ABCWDEFXGHIYJKYLMSQTUZNOPRV";

	// Array of special symbols
	char symbols[] = "!@#$%^&\\*?>/<\"|/+-";

	// Stores the random password
	char password[X];

	// To select the randomizer inside the loop
	randomizer = rand() % 4;

	// Iterate the counter over the range of 0 to X
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

// Driver code
int main()
{
// Length of the password to be generated
int X = 12;

// Function call
randomPasswordGeneration(X);
printf("\n");
return 0;
}
