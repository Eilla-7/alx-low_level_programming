#include "lists.h"
#include <string.h>
/**
 * add_node - a function to add a node in the beginning of the
 * list
 * @head: pointer to the list_t
 * @str:  new string to add
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (head == NULL || new == NULL)
		return (NULL);


	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
