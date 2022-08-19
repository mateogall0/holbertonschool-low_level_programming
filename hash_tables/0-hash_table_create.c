#include "hash_tables.h"

/**
 * hash_table_create - creates a has table
 * @size: size of hash table
 * Return: 0 if fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (0);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	if (!(table->array))
	{
		free(table);
		return (0);
	}
	return (table);
}
