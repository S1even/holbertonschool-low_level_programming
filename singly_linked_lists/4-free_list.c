#include "lists.h"

/**
 * free_list - free the memory allocated for a list_t list
 * @head: pointer to head of list
 * Return: nothing (void)
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->next)
		free_list(head->next);

	free(head->str);
	free(head);
}
