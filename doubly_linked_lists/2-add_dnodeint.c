#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t
 * @head: pointer to the head of the list
 * @n: integer to add in the list
 * Return: the adress of new element, or NULL if had a fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nodes = malloc(sizeof(dlistint_t));

	if (new_nodes == NULL)
	{
		return (NULL);
	}

	new_nodes->n = n;
	new_nodes->prev = NULL;
	new_nodes->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_nodes;
	}

	*head = new_nodes;

	return (new_nodes);
}
