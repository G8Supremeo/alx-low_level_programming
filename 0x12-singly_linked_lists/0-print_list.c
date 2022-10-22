#include "lists.h"
#include <stdio.h>

/**
  * print_list - A function that prints all the elements of a list_t list
  * @h: node or list_t pointer
  * Return: the number of nodes
  */

size_t print_list(const list_t *h)
{

	unsigned int i;

	i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;

	}
	return (i);
}
