#include "lists.h"

/**
  * free_listint - free a listint_t
  * @head: head pointer to the listint_t list
  */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *tmp1;

	tmp1 = *head;

	while (tmp != NULL)
	{
		tmp1 = tmp->next;
		free(tmp);
		tmp = tmp1;
	}
	*head = NULL;
}
