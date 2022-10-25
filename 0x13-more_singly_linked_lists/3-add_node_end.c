#include "lists.h"

/**
  * _strlen - A function that returns the length of a str
  * @str: string pointer
  * Return: length of the str
  */

size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
  * add_node_end - A func that  adds a new node at the bend of a list_t list.
  * @head: linked list_t list head pointer
  * @str: string to be added
  * Return:the address of the new element, or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
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
