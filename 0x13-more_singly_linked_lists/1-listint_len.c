#include "lists.h"
#include <stdio.h>

/**
  * listint_len - A func that returns the number of elements in a linked listint_t
  * @h: linked listint_t list pointer
  * Return: the number of elements
  */

size_t listint_len(const listint_t *h)
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
