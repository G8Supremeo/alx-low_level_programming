#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This app will print the size of
 * various data types on the computer it is compiled and
 * run on.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int li;
	float f;
	double d;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("Size of a double: %lu byte(s)\n", (unsigned long)sizeof(d));
	return (0);
}
