#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * create_hash_table - it creates a hash table
 * @size: the size of the table
 *
 * Return: If an error occurs - NULL.
 *         else - a pointer to the new hash table
 */
hash_table_t *create_hash_table(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table->array);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	return (table);
}
