#include "main.h"

/**
 * _isdigit - check for digit (0 thru 9)
 *
 * Description: check if c is a digit
 * @c: single data input
 *
 * Return: 1 if int c is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= ':')
		return (1);
	else
		return (0);
}
