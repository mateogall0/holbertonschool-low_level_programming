#include "hash_tables.h"

/**
 * hash_table_set - add element to hash table
 * @ht: hash table
 * @key: key
 * @value: const string
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = 0, *p = 0;
	int index = 0;

	if (!ht || !ht->array || !key)
		return (0);
	if (!value)
		value = "";
	index = key_index((const unsigned char *)key, ht->size);
	p = ht->array[index];
	new = malloc(sizeof(hash_node_t));
	memset(new, 0, sizeof(hash_node_t));
	if (!new)
		return (0);
	new->next = 0;
	if (p && strcmp(p->key, key) != 0)
		new->next = p;
	else if (p)
	{
		free(p->value);
		free(p->key);
		free(p);
	}
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (0);
	}
	ht->array[index] = new;
	return (1);
}
