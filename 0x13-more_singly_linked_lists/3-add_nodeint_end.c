#include "lists.h"

/**
  * add_nodeint_end - A func that  adds a new node at the bend of a list_t list.
  * @head: linked listint_t list head pointer
  * @n: int
  * Return:the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *new_node;
	list_t *last_node;


	new_node = malloc(sizeof(list_t));
	last_node = *head;
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}


	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;

	return (new_node);
}
