#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index of a listint_t linked list.
 * @head: point to the first node
 * @index: the index of the node to be delete
 * Return: 1 in success, -1 in error
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *curr = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (-1);
	
		tmp = tmp->next;
		i++;
	}


	curr = tmp->next;
	tmp->next = curr->next;
	free(curr);

	return (1);
}
