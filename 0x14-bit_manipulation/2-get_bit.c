#include "main.h"


/**
 * get_bit_len - return the number bit in a number
 *
 * Return: number of bits
 */

unsigned int get_bit_len(void)
{
	unsigned int length = sizeof(unsigned long int) * 8;

	return (length);
}

/**
 * get_bit - returns a bit at nth index
 * @n: number to be check
 * @index: index to check for
 *
 * Return: index or -1 if not exist
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int idex = get_bit_len();
	int bit;

	if (index >= idex)
		return (-1);

	bit = (n & (1 << index)) >> index;

	return (bit);
}
