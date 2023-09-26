#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all the
 * data (n) of a listint_t linked list.
 * @head: first node of the list
 * Return: the sum of n
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
