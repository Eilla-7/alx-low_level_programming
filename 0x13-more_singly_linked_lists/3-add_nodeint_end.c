#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at
 * the end of a listint_t list.
 * @head: the linked list head
 * @n: the element in the linked list
 * Return: the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = new;
	return (new);
}
