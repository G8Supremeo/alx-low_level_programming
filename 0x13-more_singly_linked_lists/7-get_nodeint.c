#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth of a listint_t linked list
  * @head: head pointer
  * @index: index of the node to return
  * Return: pointer to the indexed node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
