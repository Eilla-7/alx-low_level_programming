#include "hash_tables.h"


/**
 *
 */
hash_node_t *make_node(const char *key, const char *value)
{
	hash_node_t *nde;

	nde = malloc(sizeof(hash_node_t));
	if (nde == NULL)
		return (NULL);
	nde->key = strdup(key);
	if (nde->key == NULL)
	{
		free(nde);
		return (NULL);
	}
	nde->value = strdup(value);
	if (nde->value == NULL)
	{
		free(nde->key);
		free(nde);
		return (NULL);
	}
	nde->next = NULL;
	return (nde);
}




/**
 *
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long idx;
	hash_node_t *node, *tmp;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	idx = key_index ((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}

		tmp = tmp->next;
	}
	node = make_node(key, value);
	if (node == NULL)
		return (0);
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
