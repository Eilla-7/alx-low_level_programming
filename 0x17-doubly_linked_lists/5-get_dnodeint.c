#include "lists.h"

/**
 * get_dnodeint_at_index - a function return a specific node
 * @head: point to the head
 * @index: the index of the node that would be returned
 * Return: the nkde , NULL if failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}
