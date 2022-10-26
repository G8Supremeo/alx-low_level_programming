#include "lists.h"

/**
  * sum_listint - returns the sum of all the data (n) of a linked list
  * @head: listint_t linked list head pointer
  * Return: the sum of n data else 0
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
