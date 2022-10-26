#include "lists.h"

/**
  * pop_listint - deletes the head node of listint_t
  * @head: double pointer to the list
  * Return: the head node's data
  */

int pop_listint(listint_t **head)
{
	listint_t *end = *head;
	listint_t *prev = NULL;

	if ((*head) == NULL)
		return (0);

	while (end->next)
	{
		prev = end;
		end = end->next;
	}
	prev->next = NULL;
	free(end);
	return ((*head)->n);
}
