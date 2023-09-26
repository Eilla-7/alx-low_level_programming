#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints elements of
 * listint_t list
 * @h: linked list
 * Return: the number of the nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
