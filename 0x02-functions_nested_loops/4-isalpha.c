#include "main.h"

/**
 * _isalpha - check for alphabet character
 *
 * Description: check if c is an alphabet
 * @c: single letter input
 *
 * Return: 1 if int c is an alphabet (lower or upper case), 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
