#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: pointer to the head of the list
 * @str: the string to be add
 * Return: the adress of a new element, or NULL for fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	int lenght;
	list_t *new_nodes, *second_nodes;

	if (head == NULL || str == NULL)
		return (NULL);

	new_nodes = malloc(sizeof(list_t));
	if (new_nodes == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new_nodes);
		return (NULL);
	}

	for (lenght = 0; str[lenght];)
		lenght++;

	new_nodes->str = duplicate;
	new_nodes->len = lenght;
	new_nodes->next = NULL;

	if (*head == NULL)
	{
		*head = new_nodes;
		return (new_nodes);
	}

	else
	{
		second_nodes = *head;
		while (second_nodes->next != NULL)
			second_nodes = second_nodes->next;

		second_nodes->next = new_nodes;
	}
	return (*head);
}
