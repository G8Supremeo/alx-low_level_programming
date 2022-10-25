#include "lists.h"
#include <stdio.h>

/**
  * list_len - A func that returns the number of elements in a linked list_t
  * @h: linked list_t list pointer
  * Return: the number of elements
  */

size_t list_len(const list_t *h)
{

	size_t i;

	i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;

	}
	return (i);
}
