#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: pointer to the head of the list
 * @str: the string to be add
 * Return: the adress of a new element, or NULL for fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_nodes;
	list_t *last = *head;
	char *new_str;
	unsigned int lenght = 0;


	new_nodes = malloc(sizeof(list_t));
	if (new_nodes == NULL)
		return (NULL);

	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_nodes);
		return (NULL);
	}

	while (str[lenght])
		lenght++;

	new_nodes->str = new_str;
	new_nodes->len = lenght;
	new_nodes->next = NULL;

	if (*head == NULL)
	{
		*head = new_nodes;
		return (new_nodes);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_nodes;

	return (new_nodes);
}
