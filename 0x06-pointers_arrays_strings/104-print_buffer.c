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
	{
    int i;
    int j = 0;
    int k;
    char ten[] = "\0\0\0\0\0\0\0\0\0\0";
    char *tp = ten;
    
    for (i = 0; i < size; i++)
    {
        if (j == 0)
        {
            printf("%08x:", i);
        }
        if (isprint (*b))
        tp[j] = *b;
        else
        tp[j] = '.';
        
        if (i % 2 == 0)
        {
            printf("%c", ' ');
        }
        printf("%02x", *b);
        
        if ((i + 1) % 10 == 0)
        {
            printf(" %s\n", tp); j = 0;
            
            for (k = 0; k < 10; k++)
            {
                tp[k] = '\0';
            }
        }
        else
        {
            j++;
        }    
        b++;
    }
    if (j != 0)
    {
        for (k = 0; k < (10 - j) * 2 + (10 - j) / 2; k++)
        printf(" ");
        printf(" %s\n", tp);
    }
}
