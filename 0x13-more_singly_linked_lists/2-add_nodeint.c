#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the
 * beginning of a listint_t list.
 * @head: point to the first node
 * @n: data of the new node
 * Return: adress of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
