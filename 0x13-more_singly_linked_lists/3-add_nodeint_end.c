#include "lists.h"

/**
  * add_nodeint_end - A func that  adds a new node at the bend of a list.
  * @head: linked listint_t list head pointer
  * @n: int
  * Return:the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node  = malloc(sizeof(listint_t));
	listint_t *tmp;

	tmp = *head;
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
