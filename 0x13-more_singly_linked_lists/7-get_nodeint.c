#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index -  a function that returns the nth node of
 * a listint_t linked list.
 * @head: first node of the list
 * @index: index of the node we want to return
 * Return: the node at the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
		return (NULL);

	return (tmp);
}
