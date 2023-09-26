#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - a function to free the list
 * @head: the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
