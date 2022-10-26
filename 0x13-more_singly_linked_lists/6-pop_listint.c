#include "lists.h"

/**
  * pop_listint - deletes the head node of listint_t
  * @head: double pointer to the list
  * Return: the head node's data
  */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int h = (*head)->n;

	if ((*head) == NULL || head == NULL)
		return (0);

	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (h);
}
