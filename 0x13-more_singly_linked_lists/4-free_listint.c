#include "lists.h"

/**
  * free_listint - free a listint_t
  * @head: head pointer to the listint_t list
  */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(tmp);
	}
}
