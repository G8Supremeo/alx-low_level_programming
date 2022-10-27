#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index of a linked list
  * @index: index of the node that should be deleted
  * @head: double head pointer to the linked list
  * Return: 1 if successful else -1
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *next_node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next_node = (*head)->next;
		free(head);
		*head = next_node;
		return (1);
	}
	tmp = *head;
	while (i < index - 1)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}
	next_node = tmp->next;
	tmp->next = next_node->next;
	free(next_node);
	return (1);
}
