#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: pointer to the head of the list
 * @str: string to be added as the value of new node
 * Return: the adress of the new element, or NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int lenght;
	list_t *new_nodes;

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
	new_nodes->next = *head;

	*head = new_nodes;

	return (new_nodes);
}
