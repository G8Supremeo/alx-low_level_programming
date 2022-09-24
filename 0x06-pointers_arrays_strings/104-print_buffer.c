#include "main.h"

/**
  * print_buffer - a function that prints a buffer of size bytes
  * pointed to by b. Each line of 10 bytes must start with the
  * position of the first byte of the line in hexadecimal
  * @b: the pointer to the buffer to be printed
  * @size: number of bytes to be printed from the buffer.
  */

void print_buffer(char *b, int size)
{
	int byte, index;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: " byte);

		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
				printf(" ");
			else
				printf("%02x", *(b + index + byte));

			if ((index % 2) != 0 && index != 0)
				printf(" ");
		}
