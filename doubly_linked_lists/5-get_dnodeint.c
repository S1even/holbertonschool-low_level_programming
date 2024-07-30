#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, start at 0
 * Return: the nth node in the list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j = 0;

	while (head != NULL)
	{
		if (j == index)
		{
			return (head);
		}

		head = head->next;
		j++;
	}

	return (NULL);
}
