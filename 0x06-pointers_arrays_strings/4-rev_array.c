#include "main.h"

/**
  * reverse_array - a function that reverses the content of an array
  * of integers
  * @a: array of integers
  * @n: is the number of elements of the array
*/

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0, n = n - 1; (i < n); i++, n--)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = tmp;
	}
}
