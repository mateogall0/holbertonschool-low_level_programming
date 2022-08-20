#include "hash_tables.h"

/**
 * hash_table_delete - frees a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **p = 0, *p1 = 0;
	unsigned int i;

	if (!ht)
		return;
	p = ht->array;
	for (i = 0; p[i]; i++)
	{
		while (p[i])
		{
			p1 = p[i];
			p1 = p1->next;
			free(p[i]->value);
			free(p[i]->key);
			free(p[i]);
			p[i] = p1;
		}
	}
	free(p);
	free(ht);
}
