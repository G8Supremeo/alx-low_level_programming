#include "main.h"

/**
 * main - print _putchar
 *
 * Description: print _putchar and \n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}

	_putchar('\n');


	return (0);
}
