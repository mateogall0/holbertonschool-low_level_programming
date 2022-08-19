#include "hash_tables.h"

/**
 * hash_table_get - get function
 * @ht: hash table
 * @key: key of slot to get
 * Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int k;
	hash_node_t *p = 0;

	if (!ht || !key)
		return (0);
	k = key_index((unsigned char *)key, ht->size);
	if (!(ht->array[k]))
		return (0);
	p = ht->array[k];
	for (; p->next; p = p->next)
	{
	}
	return (p->value);
}
