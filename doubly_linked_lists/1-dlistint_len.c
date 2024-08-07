#include "lists.h"

/**
 * dlistint_len - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 * Return: The number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		count_nodes++;
		h = h->next;
	}

	return (count_nodes);
}
