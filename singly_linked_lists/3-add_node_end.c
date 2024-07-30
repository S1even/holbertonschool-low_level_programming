#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: pointer to the head of the list
 * @str: the string to be add
 * Return: the adress of a new element, or NULL for fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;
	char *new_str;
	unsigned int lenght = 0;


	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[lenght])
		lenght++;

	new_node->str = new_str;
	new_node->len = lenght;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
