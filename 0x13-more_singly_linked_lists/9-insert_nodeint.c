#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given index
  * @idx: is the index of the list where the new node should be added
  * @head: double head pointer to the lined list
  * @n: data of new node
  * Return: the address of the new node else NULL
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new_node;

	if (head == NULL)
		return (NULL);

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	tmp = *head;

	if (idx == 0)
	{
		new_node->next = tmp;
		*head = new_node;
		return (*head);
	}

	while (--idx)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
