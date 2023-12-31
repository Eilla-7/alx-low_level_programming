#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index -  a function that inserts a new
 * node at a given position
 * @head: pointer to the first node
 * @idx: is the index of the list where the new node should
 * be added
 * @n: data of the new node
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *tmp;

	new = malloc(sizeof(listint_t));

	if (new == NULL || head == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	tmp = *head;
	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}

		else
			tmp = tmp->next;
	}

	return (NULL);
}
