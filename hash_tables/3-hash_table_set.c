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
	
	if (!ht || !ht->array || !key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	p = ht->array[index];
	while (p)
	{
		if (!strcmp(p->key, key))
		{
			free(p->value);
			p->value = strdup(value);
			if (!p->value)
				return (0);
			return (1);
		}
		p = p->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = 0;
	if (p)
		new->next = p;
	ht->array[index] = new;
	return (1);
}
