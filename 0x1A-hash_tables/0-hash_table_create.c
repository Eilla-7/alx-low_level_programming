#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: size of the array
 * Return: pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned int i;

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_table_t) * size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	return (table);
}
