#include <stdio.h>
#include "lists.h"
/**
 * pop_listint -  a function that deletes the head node of a listint_t
 * linked list
 * @head: point to the first element
 * Return: 0 if list isempty, the head node’s data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (head == NULL || *head == NULL)
		return (0);

	i = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (i);
}
