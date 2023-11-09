#include "lists.h"

/**
 * free_dlistint - a function that frees a list
 * @head: point to the head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
