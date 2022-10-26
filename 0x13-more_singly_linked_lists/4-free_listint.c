#include "lists.h"

/**
  * free_listint - free a listint_t
  * @head: head pointer to the listint_t list
  */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
