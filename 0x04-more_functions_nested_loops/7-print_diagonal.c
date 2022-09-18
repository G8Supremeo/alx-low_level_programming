#include "main.h"

/**
 * print_diagonal - this function is going to print
 * a diagonal line
 * @n: is the number of times \ will be printed
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
int a, b;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (a = 1; a <= n; a++)
{
for (b = 1; b <= a; b++)
{
_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
