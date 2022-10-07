#include "main.h"

/**
 * _isupper - check for uppercase character
 *
 * Description: check if c is an uppercase
 * @c: single letter input
 *
 * Return: 1 if int c is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
