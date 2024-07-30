#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new_node node at a given position
 * @h: pointer to the head of the list
 * @idx: index of the list
 * @n: integer of the list
 * Return: the address of the new_nodes, or NULL if he fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_nodes;
	dlistint_t *current_node = *h;

	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current_node)
	{
		if (i == idx - 1)
		{
			if (current_node->next == NULL)
				return (add_dnodeint_end(h, n));

			new_nodes = malloc(sizeof(dlistint_t));

			if (new_nodes == NULL)
				return (NULL);

			new_nodes->n = n;
			new_nodes->prev = current_node;
			current_node->next->prev = new_nodes;
			current_node->next = new_nodes;
			return (new_nodes);
		}
		i++;

		current_node = current_node->next;
	}

	return (NULL);
}
