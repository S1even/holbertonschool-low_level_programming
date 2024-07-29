#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list_t
 * Return: the number of elements in a linked list_t
 */

size_t list_len(const list_t *h)
{
	size_t number_nodes = 0;

	while (h != NULL)
	{
		number_nodes++;
		h = h->next;
	}
	return (number_nodes);
}
