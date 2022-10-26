#include "lists.h"

/**
  * add_nodeint - A func that  adds a new node at the beginning of a list
  * @head: linked list_t list head pointer
  * @n: int
  * Return:the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;

	if (head == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
